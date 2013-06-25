/*
 * Core.c
 *
 *  Created on: Sep 26, 2012
 *      Author: "Facundo Nahuel Uriel Silva"
 */

#include "taskCore.h"
#include "lpc17xx_ssp.h"

// Colas de mensajes
xQueueHandle queuePcComTX;	// Cola para el envio de mensajes a la PC
xQueueHandle queuePcComRX;	// Cola para la recepcion de mensajes desde la PC
xQueueHandle queueAcdToCore;	// Cola para recibir el valor de los Acds
xQueueHandle queueCoreToAcd;	// Cola para enviar comandos al Acds

volatile uint16_t* medicionCorrienteDescarga;
volatile uint32_t sizeMedicionCorrienteDescarga;

volatile uint16_t* medicionTensionDescarga;
volatile uint32_t sizeMedicionTensionDescarga;

extern xSemaphoreHandle mutexDisparo;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void taskCoreInit(){

	initContactores();

	setContactorOFF(Contactor_1);
	setContactorOFF(Contactor_2);
	setContactorOFF(Contactor_3);

}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void taskCore(void *paramametro){

	CoreState coreState = csIniciando;
	msgPcCom msgToTX;
	msgPcCom msgFromRX;
	msgAdcCore msgFromAdc;
	msgAdcCore msgToAdc;

	portTickType xDelay;

	int16_t tensionFuenteHV;
	int16_t tensionCapacitores;
	int16_t corrienteDescarga;
	int16_t sensorAux0;
	int16_t sensorAux1;

	int32_t sizeCola = 0;
	int16_t indexMedicion;


	// Inicializacion de las colas de mensajes

	// Se inicializa la cola de mensajes de transmision
	queuePcComTX = xQueueCreate( MAX_SIZE_QUEUE_TX, sizeof( msgPcCom ) );

	// Se inicializa la cola de mensajes de recepcion
	queuePcComRX = xQueueCreate( MAX_SIZE_QUEUE_RX, sizeof( msgPcCom ) );

	// Se inicializa la cola de mensajes de comunicacion con el adc
	queueAcdToCore = xQueueCreate( MAX_SIZE_QUEUE_ADC_CORE, sizeof( msgAdcCore ) );

	// Se inicializa la cola de mensajes de comunicacion con el adc
	queueCoreToAcd = xQueueCreate( MAX_SIZE_QUEUE_CORE_ADC, sizeof( msgAdcCore ) );

//	medicionCorrienteDescarga = (uint16_t*)malloc(sizeof(uint16_t)*2000);
//	medicionTensionDescarga = (uint16_t*)malloc(sizeof(uint16_t)*2000);
//
//	memset(medicionCorrienteDescarga,0x00,sizeof(uint16_t)*2000);
//	memset(medicionTensionDescarga,0x00,sizeof(uint16_t)*2000);
//
//	free(medicionCorrienteDescarga);
//	free(medicionTensionDescarga);

	while(1){

		switch(coreState){

			///////////////////////////////////////

			case csIniciando:

				msgFromRX.cmd.cmdId = CMD_PCCOM_NACK;
				coreState = csSincronizando;

				setContactorOFF(Contactor_1);
				setContactorOFF(Contactor_2);
				setContactorOFF(Contactor_3);
				break;

			///////////////////////////////////////

			case csSincronizando:

				if(msgFromRX.cmd.cmdId == CMD_PCCOM_SYNC_RESPONSE){
					msgToTX.cmd.cmdId = CMD_PCCOM_NACK;
					msgFromAdc.adc = ADC_None;
					coreState = csIdle;
				}

				pcComInitMsg(&msgToTX.cmd,CMD_PCCOM_SYNC_REQUEST);
				msgToTX.cmd.len = 0;
				xQueueSend(queuePcComTX,&msgToTX,100);
				msgFromRX.cmd.cmdId = CMD_PCCOM_NACK;
				xDelay = 1000 / portTICK_RATE_MS;
				vTaskDelay(xDelay);

				break;


			///////////////////////////////////////

			case csIdle:

				break;

			///////////////////////////////////////

			case csIniciandoProceso:
				// Seteo luces

				setContactorON(Contactor_3);

				break;

			///////////////////////////////////////

			case csActivandoFuenteHv:

				break;

			///////////////////////////////////////

			case csCargandoCapacitores:

				setContactorON(Contactor_1);

				break;

			///////////////////////////////////////

			case csCargaCompletada:

				setContactorOFF(Contactor_1);

				coreState = csInicializandoDescarga;
//				coreState = csEsperandoDisparo;

				break;

			///////////////////////////////////////

			case csInicializandoDescarga:

				// Se pide memoria para las muestras
				medicionCorrienteDescarga = (uint16_t*)malloc(sizeof(uint16_t)*NUMERO_MUESTRAS_SENSADO_DESCARGA);
				medicionTensionDescarga = (uint16_t*)malloc(sizeof(uint16_t)*NUMERO_MUESTRAS_SENSADO_DESCARGA);

//				if(medicionCorrienteDescarga == NULL){
//					sizeMedicionCorrienteDescarga++;
//				}

				sizeMedicionCorrienteDescarga = 0;
				memset(medicionCorrienteDescarga,0x00,sizeof(uint16_t)*NUMERO_MUESTRAS_SENSADO_DESCARGA);

				sizeMedicionTensionDescarga = 0;
				memset(medicionTensionDescarga,0x00,sizeof(uint16_t)*NUMERO_MUESTRAS_SENSADO_DESCARGA);

				msgToAdc.nextState = tasInicializandoSensadoCorriente;
				msgToAdc.adc = ADC_None;
				xQueueSend(queueCoreToAcd,&msgToAdc,100);

//				coreState = csEsperandoConfirmacionAdcTask;
				coreState = csEsperandoDisparo;

				break;

			///////////////////////////////////////

			case csEsperandoConfirmacionAdcTask:

				if(msgFromAdc.currentState == tasEnviadoDatosCorriente){
					coreState = csEsperandoDisparo;
				}

				break;

			///////////////////////////////////////

			case csEsperandoDisparo:
				break;

			///////////////////////////////////////

			case csIniciandoDescarga:

				setContactorON(Contactor_2);

				xDelay = 13 / portTICK_RATE_MS;
				vTaskDelay(xDelay);

				xSemaphoreGive(mutexDisparo);

//				setContactorON(Contactor_2);

				taskYIELD();
				coreState = csDescargando;

				break;

			///////////////////////////////////////

			case csDescargando:
				// Setear adc

				break;

			///////////////////////////////////////

			case csDescargaCompletada:

				setContactorOFF(Contactor_2);
				setContactorOFF(Contactor_3);

				coreState = csEsperandoAdcDatos;


				break;

			///////////////////////////////////////

			case csEsperandoAdcDatos:

				if(msgFromAdc.currentState == tasEnviadoDatosCorriente){
					coreState = csEsperandoPedidoDatos;
				}

				break;

			///////////////////////////////////////

			case csEsperandoPedidoDatos:


				break;

			///////////////////////////////////////


			case csEnviadoDatos:

				xDelay = 50 / portTICK_RATE_MS; // 50ms

				for(indexMedicion = 0; indexMedicion < sizeMedicionCorrienteDescarga; indexMedicion++){
					sendMedicionToPc(indexMedicion, sizeMedicionCorrienteDescarga-indexMedicion-1, medicionCorrienteDescarga[indexMedicion]);
					vTaskDelay(xDelay);
				}

				free(medicionCorrienteDescarga);
				sizeMedicionCorrienteDescarga = 0;

				msgToAdc.nextState = tasIniciandoMonitoreo;
				msgToAdc.adc = ADC_None;
				xQueueSend(queueCoreToAcd,&msgToAdc,100);

				coreState = csIdle;

				break;

			///////////////////////////////////////

		}

		// se intenta leer un mensaje de la cola de mensajes de la PC
		if( ( sizeCola = uxQueueMessagesWaiting(queuePcComRX)) > 0){

			if(xQueueReceive(queuePcComRX,&msgFromRX,( portTickType ) 0) == pdTRUE){

				switch(msgFromRX.cmd.cmdId){

					case CMD_PCCOM_INIT_PROCESS:
						coreState = csIniciandoProceso;
						break;

					case CMD_PCCOM_ACTIVAR_HV:
						coreState = csActivandoFuenteHv;
						break;

					case CMD_PCCOM_INICIAR_CARGA:
						coreState = csCargandoCapacitores;
						break;

					case CMD_PCCOM_CARGA_TERMINADA:
						coreState = csCargaCompletada;
						break;

					case CMD_PCCOM_REALIZAR_DESCARGA:
						coreState = csIniciandoDescarga;
						break;

					case CMD_PCCOM_DESCARGA_TERMINADA:
						coreState = csDescargaCompletada;
						break;

					case CMD_PCCOM_EVIAR_DATOS_DESCARGA:
						coreState = csEnviadoDatos;
						break;

					//debug

					case CMD_PCCOM_ACTUADOR_1_ON:
						setContactorON(Contactor_1);
						break;

					case CMD_PCCOM_ACTUADOR_1_OFF:
						setContactorOFF(Contactor_1);
						break;

					case CMD_PCCOM_ACTUADOR_2_ON:
						setContactorON(Contactor_2);
						break;

					case CMD_PCCOM_ACTUADOR_2_OFF:
						setContactorOFF(Contactor_2);
						break;

					case CMD_PCCOM_ACTUADOR_3_ON:
						setContactorON(Contactor_3);
						break;

					case CMD_PCCOM_ACTUADOR_3_OFF:
						setContactorOFF(Contactor_3);
						break;

				}

			}else{
				msgFromRX.cmd.cmdId = CMD_PCCOM_NACK;
			}
		}

		// se intenta leer un mensaje de la cola de mensajes del adc
		if(uxQueueMessagesWaiting(queueAcdToCore) > 0){

			if(xQueueReceive(queueAcdToCore,&msgFromAdc,( portTickType ) 0) == pdTRUE){

				switch(msgFromAdc.adc){

					case ADC_0:
						tensionFuenteHV = msgFromAdc.value;
						break;

					case ADC_1:
						tensionCapacitores = msgFromAdc.value;
						break;

					case ADC_2:
						corrienteDescarga = msgFromAdc.value;
						break;

					case ADC_3:
						sensorAux0 = msgFromAdc.value;
						break;

					case ADC_4:
						sensorAux1 = msgFromAdc.value;
						break;

					case ADC_None:
						break;
				}

				if(msgFromAdc.adc != ADC_None){
					sendAdcValueToPc(msgFromAdc.adc, msgFromAdc.valueArray);

				}

			}
//
//			}else{
//				msgFromAdc.adc = ADC_None;
//			}
		}


		taskYIELD();
	}
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void initContactores(){

	// Salida control actuadores
	LPC_GPIO2->FIODIR |= CONTACTOR_1_LOCATION;
	LPC_GPIO2->FIODIR |= CONTACTOR_2_LOCATION;
	LPC_GPIO2->FIODIR |= CONTACTOR_3_LOCATION;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void setContactorON(Contactor contactor){

	switch(contactor){
		case Contactor_1:
			LPC_GPIO2->FIOSET = CONTACTOR_1_LOCATION;
			break;

		case Contactor_2:
			LPC_GPIO2->FIOSET = CONTACTOR_2_LOCATION;
			break;

		case Contactor_3:
			LPC_GPIO2->FIOSET = CONTACTOR_3_LOCATION;
			break;
	}

}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void setContactorOFF(Contactor contactor){

	switch(contactor){
		case Contactor_1:
			LPC_GPIO2->FIOCLR = CONTACTOR_1_LOCATION;
			break;

		case Contactor_2:
			LPC_GPIO2->FIOCLR = CONTACTOR_2_LOCATION;
			break;

		case Contactor_3:
			LPC_GPIO2->FIOCLR = CONTACTOR_3_LOCATION;
			break;
	}

}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void sendAdcValueToPc(ADC_type adc, uint8_t* valueData){

	msgPcCom msgToTX;

	switch(adc){

		case ADC_0:
			pcComInitMsg(&msgToTX.cmd,CMD_PCCOM_READ_ADC_0);
			break;

		case ADC_1:
			pcComInitMsg(&msgToTX.cmd,CMD_PCCOM_READ_ADC_1);
			break;

		case ADC_2:
			pcComInitMsg(&msgToTX.cmd,CMD_PCCOM_READ_ADC_2);
			break;

		case ADC_3:
			pcComInitMsg(&msgToTX.cmd,CMD_PCCOM_READ_ADC_3);
			break;

		case ADC_4:
			pcComInitMsg(&msgToTX.cmd,CMD_PCCOM_READ_ADC_4);
			break;

		case ADC_None:
			break;
	}

	msgToTX.cmd.data[0] = valueData[0];
	msgToTX.cmd.data[1] = valueData[1];
	msgToTX.cmd.len = 2;

	xQueueSend(queuePcComTX,&msgToTX,100);

}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////


void sendMedicionToPc(uint16_t indexMuestra, uint16_t muestasRestantes, uint16_t muestra){

	msgPcCom msgToTX;
	uint8_t* temp;

	pcComInitMsg(&msgToTX.cmd,CMD_PCCOM_VALUE_CURRENT);

	temp = (uint8_t*)&indexMuestra;
	msgToTX.cmd.data[0] = temp[0];
	msgToTX.cmd.data[1] = temp[1];

	temp = (uint8_t*)&muestra;
	msgToTX.cmd.data[2] = temp[0];
	msgToTX.cmd.data[3] = temp[1];

	temp = (uint8_t*)&muestasRestantes;
	msgToTX.cmd.data[4] = temp[0];
	msgToTX.cmd.data[5] = temp[1];

	msgToTX.cmd.len = 6;

	xQueueSend(queuePcComTX,&msgToTX,100);

}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
