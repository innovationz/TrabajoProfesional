/*
 * taskSerialMemory.c
 *
 *  Created on: Oct 27, 2012
 *      Author: "Facundo Nahuel Uriel Silva"
 */

#include "taskSerialMemory.h"

void taskSerialMemoryInit(){

	PINSEL_CFG_Type PinCfg;
	I2C_M_SETUP_Type txsetup;
	uint8_t bufWrite[2];

	/* Initialize I2C2 pin connect */
	PinCfg.Funcnum = 2;
	PinCfg.Pinnum = 10;
	PinCfg.Portnum = 0;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 11;
	PINSEL_ConfigPin(&PinCfg);

	// Initialize I2C peripheral
	I2C_Init(LPC_I2C2, 100000);

	/* Enable I2C1 operation */
	I2C_Cmd(LPC_I2C2, ENABLE);


	txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
	txsetup.tx_data = (uint8_t*)bufWrite;
	txsetup.tx_length = 2;
	txsetup.rx_data = NULL;
	txsetup.rx_length = 0;
	txsetup.retransmissions_max = 3;

	bufWrite[0] = 0x16;
	bufWrite[1] = 0x05;

	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);

}

void taskSerialMemory(void *param){

	I2C_M_SETUP_Type txsetup;
	uint8_t bufWrite[2];

	txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 1.0.1.0.CS(0).Add9.Add8.R/W
	txsetup.tx_data = (uint8_t*)bufWrite;
	txsetup.tx_length = 1;
	txsetup.rx_data = NULL;
	txsetup.rx_length = 0;
	txsetup.retransmissions_max = 3;
	txsetup.rx_count = 0;

	bufWrite[0] = 0x06; // x
	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);


	while(1){

	}

}
