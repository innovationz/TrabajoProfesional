
#include "lcd_buffer.h"
#include "lcd_fonts.h"
#include "Driver_LcdGrafic.h"

#ifndef API_LCD_GRAFIC_H_
#define API_LCD_GRAFIC_H_

//#define F4X6		font_4x6
//#define F5X7		font_5x7
//#define F6X10		font_6x10
//#define F6X13B		font_6x13B
//#define F7X13B		font_7x13B
//#define F9X15		font_9x15
//#define FLUBI19		font_lubI19
//#define FLUBS24		font_luBS14
//#define FTIMBI24	font_timBI24
//#define FTIMR14		font_timR14

#define	FONT_SMALL		font_7x13B
#define	FONT_MEDIUM		font_9x15
#define	FONT_BIG		font_12x24

void API_LcdInit(void);
void API_LcdGraficPrintBuffer(void);
void API_LcdGraficPrint(char * , unsigned char * , unsigned char , unsigned char );
void API_LcdGraficCleanScreen(void);
void API_LcdGraficCleanScreenSection(unsigned char x, unsigned char y, unsigned char lon, unsigned char height);

#endif /* API_LCD_GRAFIC_H_ */
