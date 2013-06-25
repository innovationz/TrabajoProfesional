/*
===============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Copyright (C) 
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cr_section_macros.h>
#include <NXP/crp.h>
#include "API_Uart.h"

__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;

int main(void) {
	
	uint8_t salida[50];
	uint8_t dataAdc = 10;

	sprintf((char*)salida,"Valor adc: %d\n\r",dataAdc);

	API_Uart_Config();
	API_UartSendString((char*)salida);



	// Enter an infinite loop, just incrementing a counter
	volatile static int i = 0 ;
	while(1) {
		i++ ;
	}
	return 0 ;
}
