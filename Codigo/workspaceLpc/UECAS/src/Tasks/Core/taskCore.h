/*
 * Core.h
 *
 *  Created on: Sep 26, 2012
 *      Author: "Facundo Nahuel Uriel Silva"
 */

#ifndef CORE_H_
#define CORE_H_

#include "LPC17xx.h"
#include "lpc_types.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Tasks/KeepAlive/taskKeepAlive.h"
#include "Tasks/PcCommunication/taskPcCommunication.h"
#include "Tasks/PcCommunication/ProtocolPCComunication.h"
#include "Tasks/Adc/taskAdc.h"
#include "Tasks/Lcd/taskLcd.h"
#include "Tasks/SdCard/taskSdCard.h"

#define MAX_SIZE_QUEUE_RX			20
#define MAX_SIZE_QUEUE_TX			30 // REVISAR
#define MAX_SIZE_QUEUE_ADC_CORE		20
#define MAX_SIZE_QUEUE_CORE_ADC		20

#define MAX_COUNT_KEEP_ALIVE		1000

#define CONTACTOR_1_LOCATION	(1<<10)	//< GPIO Conctactor 1 - 38
#define CONTACTOR_2_LOCATION	(1<<8)	//< GPIO Conctactor 2 - 37
#define CONTACTOR_3_LOCATION	(1<<12)	//< GPIO Conctactor 3 - 44

/** Enumeracion que representa los estados del task Core
 *
 */
typedef enum {
	csError,             //!< csError
	csIniciando,   //!< csIniciando
	csSincronizando,//!< csSincronizando
	csIdle,//!< csIdle
	csIniciandoProceso,
	csActivandoFuenteHv,  //!< csFuenteHvActivada
	csCargandoCapacitores,//!< csCargandoCapacitores
	csCargaCompletada, //!< csCargaCompletada
	csEsperandoDisparo,//!< csEsperandoDisparo
	csInicializandoDescarga,
	csEsperandoConfirmacionAdcTask,
	csIniciandoDescarga,
	csDescargando,     //!< csDescargando
	csDescargaCompletada,
	csEsperandoAdcDatos,
	csEsperandoPedidoDatos,
	csEnviadoDatos     //!< csEnviadoDatos
} CoreState;

/**
 *
 * @param paramametro
 */
void taskCore(void *paramametro);

/**
 *
 */
void taskCoreInit();


/**
 *
 */
typedef enum {
	Contactor_1,//!< Contactor_1
	Contactor_2,//!< Contactor_2
	Contactor_3 //!< Contactor_3
} Contactor;

/**
 *
 */
void initContactores();

/**
 *
 * @param contactor
 */
void setContactorON(Contactor contactor);

/**
 *
 * @param contactor
 */
void setContactorOFF(Contactor contactor);

/**
 *
 * @param adc
 * @param valueData
 */
void sendAdcValueToPc(ADC_type adc, uint8_t* valueData);

/**
 *
 * @param indexMuestra
 * @param muestasRestantes
 * @param muestra
 */
void sendMedicionToPc(uint16_t indexMuestra, uint16_t muestasRestantes, uint16_t muestra);

#endif /* CORE_H_ */
