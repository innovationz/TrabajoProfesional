/*
 * taskAdc.c
 *
 *  Created on: Oct 27, 2012
 *      Authorint16_t getAdcValue(ADC_type adc);: "Facundo Nahuel Uriel Silva"
 */

#include "taskAdc.h"

xSemaphoreHandle mutexAdcReady;
xSemaphoreHandle mutexSensadoCorrienteReady;
xSemaphoreHandle mutexDisparo;

volatile SensorsValues medicion;
volatile ADC_type currentAdc;
volatile AdcInterruptMode interruptAdcMode;

extern xQueueHandle queueAcdToCore;
extern xQueueHandle queueCoreToAcd;

extern uint16_t* medicionCorrienteDescarga;
extern uint16_t sizeMedicionCorrienteDescarga;

extern uint16_t* medicionTensionDescarga;
extern uint32_t sizeMedicionTensionDescarga;

volatile uint16_t currentValueTemp;
volatile uint16_t valorTecho;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void taskAdc(void *param){

	AdcTaskState adcState = tasMonitoreando;
	msgAdcCore msgToCore;
	msgAdcCore msgFromCore;
	PINSEL_CFG_Type PinCfg;
	portTickType xDelay = 500 / portTICK_RATE_MS;

	mutexAdcReady = xSemaphoreCreateMutex();
	mutexSensadoCorrienteReady = xSemaphoreCreateMutex();
	mutexDisparo = xSemaphoreCreateMutex();

	xSemaphoreTake(mutexAdcReady, portMAX_DELAY);
	xSemaphoreTake(mutexDisparo, portMAX_DELAY);
	xSemaphoreTake(mutexSensadoCorrienteReady, portMAX_DELAY);

	PinCfg.Funcnum = 1;
	PinCfg.OpenDrain = 0;
	PinCfg.Pinmode = 0;

	// Adc 0
	PinCfg.Portnum = 0;
	PinCfg.Pinnum = 23;
	PINSEL_ConfigPin(&PinCfg);

	// Adc 1
	PinCfg.Portnum = 0;
	PinCfg.Pinnum = 24;
	PINSEL_ConfigPin(&PinCfg);

	// Adc 2
	PinCfg.Portnum = 0;
	PinCfg.Pinnum = 25;
	PINSEL_ConfigPin(&PinCfg);

	// Adc 3
	PinCfg.Portnum = 0;
	PinCfg.Pinnum = 26;
	PINSEL_ConfigPin(&PinCfg);

	// Adc 4
	PinCfg.Portnum = 1;
	PinCfg.Pinnum = 30;
	PINSEL_ConfigPin(&PinCfg);

	ADC_Init(LPC_ADC, 200000);
	ADC_BurstCmd(LPC_ADC,0);

	ADC_IntConfig(LPC_ADC,ADC_ADINTEN0,ENABLE);
	ADC_IntConfig(LPC_ADC,ADC_ADINTEN1,ENABLE);
	ADC_IntConfig(LPC_ADC,ADC_ADINTEN2,ENABLE);
	ADC_IntConfig(LPC_ADC,ADC_ADINTEN3,ENABLE);
	ADC_IntConfig(LPC_ADC,ADC_ADINTEN4,ENABLE);

	ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,ENABLE);
	ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_1,DISABLE);
	ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_2,DISABLE);
	ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_3,DISABLE);
	ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_4,DISABLE);
	currentAdc = ADC_0;

	NVIC_SetPriority(ADC_IRQn, ((0x01<<3)|0x01));

	interruptAdcMode = aisSensadoTensiones;

	/* Enable ADC in NVIC */
	NVIC_EnableIRQ(ADC_IRQn);

	// Start conversion
	ADC_StartCmd(LPC_ADC,ADC_START_NOW);

	while(1){

		switch(adcState){

			//////////////////////////////////////////////////////

			case tasMonitoreando:

				xSemaphoreTake(mutexAdcReady, portMAX_DELAY);

				msgToCore.currentState = adcState;

				msgToCore.adc = ADC_0;
				msgToCore.valueArray[0] = (uint8_t)(medicion.Adc0Value & 0x000000FF);
				msgToCore.valueArray[1] = (uint8_t)((medicion.Adc0Value & 0x0000FF00) >> 8);
				xQueueSend(queueAcdToCore,&msgToCore,100);

				msgToCore.adc = ADC_1;
				msgToCore.valueArray[0] = (uint8_t)(medicion.Adc1Value & 0x000000FF);
				msgToCore.valueArray[1] = (uint8_t)((medicion.Adc1Value & 0x0000FF00) >> 8);
				xQueueSend(queueAcdToCore,&msgToCore,100);

				msgToCore.adc = ADC_2;
				msgToCore.valueArray[0] = (uint8_t)(medicion.Adc2Value & 0x000000FF);
				msgToCore.valueArray[1] = (uint8_t)((medicion.Adc2Value & 0x0000FF00) >> 8);
				xQueueSend(queueAcdToCore,&msgToCore,100);

				msgToCore.adc = ADC_3;
				msgToCore.valueArray[0] = (uint8_t)(medicion.Adc3Value & 0x000000FF);
				msgToCore.valueArray[1] = (uint8_t)((medicion.Adc3Value & 0x0000FF00) >> 8);
				xQueueSend(queueAcdToCore,&msgToCore,100);

				msgToCore.adc = ADC_4;
				msgToCore.valueArray[0] = (uint8_t)(medicion.Adc4Value & 0x000000FF);
				msgToCore.valueArray[1] = (uint8_t)((medicion.Adc4Value & 0x0000FF00) >> 8);
				xQueueSend(queueAcdToCore,&msgToCore,100);

				vTaskDelay(xDelay);

				NVIC_EnableIRQ(ADC_IRQn);
				ADC_StartCmd(LPC_ADC,ADC_START_NOW);

				break;

			//////////////////////////////////////////////////////

			case tasInicializandoSensadoCorriente:

				xSemaphoreTake(mutexAdcReady, portMAX_DELAY);

				// Se configura la logica de la interrupcion para sensar el sensor de corriente a 150KHZ
				NVIC_DisableIRQ(ADC_IRQn);

//				taskENTER_CRITICAL();

//				ADC_PowerdownCmd(LPC_ADC,DISABLE);
//				ADC_DeInit(LPC_ADC);
//				ADC_Init(LPC_ADC, 200000); // 200000
//				ADC_BurstCmd(LPC_ADC,0);
//
//				ADC_IntConfig(LPC_ADC,ADC_ADINTEN0,ENABLE);
//				ADC_IntConfig(LPC_ADC,ADC_ADINTEN1,ENABLE);
//				ADC_IntConfig(LPC_ADC,ADC_ADINTEN2,ENABLE);
//				ADC_IntConfig(LPC_ADC,ADC_ADINTEN3,ENABLE);
//				ADC_IntConfig(LPC_ADC,ADC_ADINTEN4,ENABLE);
//
//				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,DISABLE);
//				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_1,DISABLE); // Sensor Tension capacitores
//				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_2,ENABLE); // Sensor Corriente descaga
//				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_3,DISABLE);
//				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_4,DISABLE);

//				taskEXIT_CRITICAL();

				currentValueTemp = 0;
				valorTecho = 0;

//				ADC_PowerdownCmd(LPC_ADC,ENABLE);


				adcState = tasIniciandoSensadoCorriente;

				break;

			//////////////////////////////////////////////////////

			case tasIniciandoSensadoCorriente:

				if(xSemaphoreTake(mutexDisparo, 1) == pdTRUE){
					interruptAdcMode = aisEsperandoFlanco;
//					interruptAdcMode = aisSensandoCorriente;
					adcState = tasSensandoCorriente;
					sizeMedicionCorrienteDescarga = 0;

//					ADC_BurstCmd(LPC_ADC,1);
				}

				break;

			//////////////////////////////////////////////////////

			case tasSensandoCorriente:
				NVIC_EnableIRQ(ADC_IRQn);
				ADC_StartCmd(LPC_ADC,ADC_START_NOW);
				xSemaphoreTake(mutexSensadoCorrienteReady, portMAX_DELAY);

				// Si se pudo tomar es que termino el proceso de descarga
				adcState = tasEnviadoDatosCorriente;

				break;

			//////////////////////////////////////////////////////

			case tasEnviadoDatosCorriente:

				// Se informa el estado actual
				msgToCore.currentState = tasEnviadoDatosCorriente;
				msgToCore.adc = ADC_None;
				xQueueSend(queueAcdToCore,&msgToCore,100);

				adcState = tasEsperandoIniciarMonitoreo;

				break;

			//////////////////////////////////////////////////////

			case tasEsperandoIniciarMonitoreo:

				break;

			//////////////////////////////////////////////////////

			case tasIniciandoMonitoreo:

				ADC_DeInit(LPC_ADC);
				ADC_Init(LPC_ADC, 5000);
//				ADC_BurstCmd(LPC_ADC,0);
				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,ENABLE);
				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_1,DISABLE);
				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_2,DISABLE);
				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_3,DISABLE);
				ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_4,DISABLE);
				currentAdc = ADC_0;

				interruptAdcMode = aisSensadoTensiones;
				adcState = tasMonitoreando;

				NVIC_EnableIRQ(ADC_IRQn);
				ADC_StartCmd(LPC_ADC,ADC_START_NOW);

				break;

			//////////////////////////////////////////////////////
		}

		// se intenta leer un mensaje de la cola de mensajes del adc
		if(uxQueueMessagesWaiting(queueCoreToAcd) > 0){

			if(xQueueReceive(queueCoreToAcd,&msgFromCore,( portTickType ) 0) == pdTRUE){

				adcState = msgFromCore.nextState;

			}
		}

		taskYIELD();

	}

}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void ADC_IRQHandler(void){

	signed portBASE_TYPE pxHigherPriorityTaskWoken = pdFALSE;

	switch(interruptAdcMode){

		case aisSensadoTensiones:

			NVIC_DisableIRQ(ADC_IRQn);

			switch(currentAdc){

				case ADC_0:
//					medicion.Adc0Value =  ADC_GetData(ADC_CHANNEL_0);
					while(!(LPC_ADC->ADSTAT & 0x01));

					medicion.Adc0Value = LPC_ADC->ADDR0 & 0x0FFF;
					currentAdc = ADC_1;
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_1,ENABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_2,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_3,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_4,DISABLE);
					NVIC_EnableIRQ(ADC_IRQn);
					ADC_StartCmd(LPC_ADC,ADC_START_NOW);
					break;

				case ADC_1:
					while(!(LPC_ADC->ADSTAT & 0x02));
//					medicion.Adc1Value =  ADC_GetData(ADC_CHANNEL_1);
					medicion.Adc1Value = LPC_ADC->ADDR1 & 0x0FFF;
					currentAdc = ADC_2;
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_1,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_2,ENABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_3,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_4,DISABLE);
					NVIC_EnableIRQ(ADC_IRQn);
					ADC_StartCmd(LPC_ADC,ADC_START_NOW);
					break;

				case ADC_2:
					medicion.Adc2Value =  ADC_GetData(ADC_CHANNEL_2);
					currentAdc = ADC_3;
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_1,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_2,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_3,ENABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_4,DISABLE);
					NVIC_EnableIRQ(ADC_IRQn);
					ADC_StartCmd(LPC_ADC,ADC_START_NOW);
					break;

				case ADC_3:
					medicion.Adc3Value =  ADC_GetData(ADC_CHANNEL_3);
					currentAdc = ADC_4;
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_1,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_2,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_3,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_4,ENABLE);
					NVIC_EnableIRQ(ADC_IRQn);
					ADC_StartCmd(LPC_ADC,ADC_START_NOW);
					break;

				case ADC_4:
					medicion.Adc4Value =  ADC_GetData(ADC_CHANNEL_4);
					currentAdc = ADC_0;
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,ENABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_1,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_2,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_3,DISABLE);
					ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_4,DISABLE);
					ADC_StartCmd(LPC_ADC,ADC_START_NOW);

					xSemaphoreGiveFromISR(mutexAdcReady,&pxHigherPriorityTaskWoken);
					break;
					ADC_DeInit(LPC_ADC);
				case ADC_None:
					break;
			}

			break;

		////////////////////////////////////////////////////////

		case aisEsperandoFlanco:

			currentValueTemp = ADC_GetData(ADC_CHANNEL_2);

//			if(valorTecho == 0 && currentValueTemp > 2024){
//				valorTecho = currentValueTemp;
//			}
//
//			if(	(currentValueTemp < valorTecho) && ((valorTecho - currentValueTemp) > 16 ) ){
//				interruptAdcMode = aisSensandoCorriente;
//			}

			if(	currentValueTemp < UMBRAL_INICIO_SENSADO_DESCARGA ){
				interruptAdcMode = aisSensandoCorriente;
			}

			NVIC_EnableIRQ(ADC_IRQn);
			ADC_StartCmd(LPC_ADC,ADC_START_NOW);

			break;

		////////////////////////////ADC_START_NOW////////////////////////////

		case aisSensandoCorriente:

			medicionCorrienteDescarga[sizeMedicionCorrienteDescarga++] = ADC_GetData(ADC_CHANNEL_2);

			if(sizeMedicionCorrienteDescarga == NUMERO_MUESTRAS_SENSADO_DESCARGA){
				NVIC_DisableIRQ(ADC_IRQn);
//				ADC_BurstCmd(LPC_ADC,0);
				xSemaphoreGiveFromISR(mutexSensadoCorrienteReady,&pxHigherPriorityTaskWoken);
			}
			else{
				NVIC_EnableIRQ(ADC_IRQn);
				ADC_StartCmd(LPC_ADC,ADC_START_NOW);
			}

//			interruptAdcMode = aisSensandoTensionDescarga;


			break;

		////////////////////////////////////////////////////////

		case aisSensandoTensionDescarga:

			medicionTensionDescarga[sizeMedicionTensionDescarga++] = ADC_GetData(ADC_CHANNEL_1);

			interruptAdcMode = aisSensandoCorriente;

			break;

		}

}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////