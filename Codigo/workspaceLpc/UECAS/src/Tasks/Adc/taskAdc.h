/*
 * taskAdc.h
 *
 *  Created on: Oct 27, 2012
 *      Author: "Facundo Nahuel Uriel Silva"
 */

#ifndef TASKADC_H_
#define TASKADC_H_

#include "LPC17xx.h"

#include "lpc17xx_pinsel.h"
#include "lpc17xx_adc.h"
#include "lpc17xx_rtc.h"

#include <math.h>

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "queue.h"

#include "../Tasks/PcCommunication/ProtocolPCComunication.h"
#include "../Tasks/PcCommunication/taskPcCommunication.h"

#define NUMERO_MUESTRAS_SENSADO_DESCARGA	2500

#define UMBRAL_INICIO_SENSADO_DESCARGA		4000

/**
 *
 */
typedef enum{
	ADC_None = -1,//!< ADC_None
	ADC_0 = 0,//!< ADC_0 BaseBoard PIN GPIO_11 = 16
	ADC_1 = 1,//!< ADC_1 BaseBoard PIN GPIO_12 = 17
	ADC_2 = 2,//!< ADC_2 BaseBoard PIN GPIO_13 = 18
	ADC_3 = 3,//!< ADC_3 BaseBoard PIN GPIO_14 = 19
	ADC_4 = 4 //!< ADC_4 BaseBoard PIN GPIO_15 = 20
} ADC_type;

/**
 *
 */
typedef struct{
	uint16_t Adc0Value;
	uint16_t Adc1Value;
	uint16_t Adc2Value;
	uint16_t Adc3Value;
	uint16_t Adc4Value;
} SensorsValues;


typedef enum{
	tasMonitoreando,
	tasInicializandoSensadoCorriente,
	tasEsperandoInicioSensandoCorriente,
	tasIniciandoSensadoCorriente,
	tasSensandoCorriente,
	tasEnviadoDatosCorriente,
	tasEsperandoIniciarMonitoreo,
	tasIniciandoMonitoreo
} AdcTaskState;

typedef enum{
	aisSensadoTensiones,
	aisEsperandoFlanco,
	aisSensandoCorriente,
	aisSensandoTensionDescarga,
} AdcInterruptMode;

/**
 *
 */
typedef struct{
	ADC_type		adc;
	union{
		uint16_t	value;
		uint8_t		valueArray[2];
	};
	AdcTaskState currentState;
	AdcTaskState nextState;
} msgAdcCore;

/**
 *
 */
void ADC_IRQHandler(void);

/** \brief
 *
 * @param param
 */
void taskAdc(void *param);

void taskAdc(void *param);


#endif /* TASKADC_H_ */
