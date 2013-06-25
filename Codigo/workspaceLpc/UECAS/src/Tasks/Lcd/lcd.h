/*
 * lcd.h
 *
 *  Created on: Nov 25, 2010
 *      Author: root
 */

#include "lcd_buffer.h"
#include "lcd_fonts.h"

#ifndef LCD_H_
#define LCD_H_

#define HIGH                    1
#define LOW                             0

#define SELECTcS1				{GpioSetVal(lcdCs1Val,HIGH); GpioSetVal(lcdCs2Val,LOW);}
#define SELECTcS2				{GpioSetVal(lcdCs2Val,HIGH); GpioSetVal(lcdCs1Val,LOW);}
#define SELECTaLL				{GpioSetVal(lcdCs2Val,HIGH); GpioSetVal(lcdCs1Val,HIGH);}
#define LCDsELECTwRITE			GpioSetVal(lcdRwVal,LOW)
#define LCDsELECTrEAD			GpioSetVal(lcdRwVal,HIGH)
#define LCDsELECTdATA			GpioSetVal(lcdDsVal,LOW)
#define LCDsELECTiNSTRUCTION	GpioSetVal(lcdDsVal,HIGH)
#define LCDelOW					GpioSetVal(lcdEVal,LOW)
#define LCDehIGH				GpioSetVal(lcdEVal,HIGH)

#define F4X6		font_4x6
#define F5X7		font_5x7
#define F6X10		font_6x10
#define F6X13B		font_6x13B
#define F7X13B		font_7x13B
#define F9X15		font_9x15
#define FLUBI19		font_lubI19
#define FLUBS24		font_luBS14
#define FTIMBI24	font_timBI24
#define FTIMR14		font_timR14

#define FtITLE		FLUBI19
#define FsUBtITLE	F7X13B
#define FtIME		F6X10

#define OFFSETtIMEy		64-11+1
#define OFFSETtITLE 	+1
#define OFFSETsUBtITLE1	25
#define OFFSETsUBtITLE2	38


//	Display gráfico mini6410 SUBE

#define PORTlCDd0	GPI+0
#define PORTlCDd1	GPI+1
#define PORTlCDd2	GPI+2
#define PORTlCDd3	GPI+3
#define PORTlCDd4	GPI+4
#define PORTlCDd5	GPI+5
#define PORTlCDd6	GPI+6
#define PORTlCDd7	GPI+7
#define PORTlCDe	GPI+10
#define PORTlCDrW	GPI+9
#define PORTlCDcS1	GPI+12
#define PORTlCDcS2	GPI+11
#define PORTlCDdS	GPI+8

#define PORTlCDrS	GPI+13
#define PORTlCDoE	GPI+14

/*
// Display Gráfico mini2440
 *
#define PORTlCDd0	EINT8
#define PORTlCDd1	EINT11
#define PORTlCDd2	EINT14
#define PORTlCDd3	EINT17
#define PORTlCDd4	EINT19
#define PORTlCDd5	EINT18
#define PORTlCDd6	EINT15
#define PORTlCDd7	EINT13
#define PORTlCDe	EINT5
#define PORTlCDrW	EINT3
#define PORTlCDcS1	EINT9
#define PORTlCDcS2	EINT6
#define PORTlCDdS	EINT1

*/

int lcdD0Val;
int lcdD1Val;
int lcdD2Val;
int lcdD3Val;
int lcdD4Val;
int lcdD5Val;
int lcdD6Val;
int lcdD7Val;
int lcdEVal;
int lcdRwVal;
int lcdCs1Val;
int lcdCs2Val;
int lcdDsVal;


// Para el mini6410 SUBE

int lcdRsVal;
int lcdOeVal;

// *********************

int LcdByte ( unsigned char );
int LcdWritePoints (void);
int LcdWrite ( unsigned char );
int LcdDisplayStartLine ( unsigned char );
int LcdSetPage ( unsigned char );
int LcdSetAddress ( unsigned char );
void LcdTransmit (void);
int LcdPowerOff (void);
int LcdPowerOn (void);
int LcdInit(void);
int LcdBorrarPantalla ( void );
int LcdImprimeBuffer (void);
unsigned char LcdGetBuffDim ( char * , unsigned char *);
int LcdPrint(char * , unsigned char * , unsigned char , unsigned char );
int LcdBorraBuffer (unsigned char , unsigned char , unsigned char , unsigned char );

#endif /* LCD_H_ */
