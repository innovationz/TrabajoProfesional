/*
 * lcd.c
 *
 *  Created on: Nov 25, 2010
 *      Author: root
 */

/*
 * Método de lectura/escritura
 *
 * Bajar PORTlCDe
 * Setear PORTlCDrW de acuerdo a si quiero leer o escribir
 * Setear PORTlCDcS1 y PORTlCDcS2 para identificar la zona a escribir
 * Setear PORTlCDdS para indicar si es comando o escritura
 * Setear los puertos PORTlCDd0 a PORTlCDd7 con el valor o dejarlos como inputs
 * para leer
 * Subir PORTlCDe y bajarlo de nuevo
 * */

#include "lcd.h"

int LcdInit(void) {

//	lcdD0Val = GpioInit(PORTlCDd0, PORTdIRoUT);
//	lcdD1Val = GpioInit(PORTlCDd1, PORTdIRoUT);
//	lcdD2Val = GpioInit(PORTlCDd2, PORTdIRoUT);
//	lcdD3Val = GpioInit(PORTlCDd3, PORTdIRoUT);
//	lcdD4Val = GpioInit(PORTlCDd4, PORTdIRoUT);
//	lcdD5Val = GpioInit(PORTlCDd5, PORTdIRoUT);
//	lcdD6Val = GpioInit(PORTlCDd6, PORTdIRoUT);
//	lcdD7Val = GpioInit(PORTlCDd7, PORTdIRoUT);
//	lcdEVal = GpioInit(PORTlCDe, PORTdIRoUT);
//	lcdRwVal = GpioInit(PORTlCDrW, PORTdIRoUT);
//	lcdCs1Val = GpioInit(PORTlCDcS1, PORTdIRoUT);
//	lcdCs2Val = GpioInit(PORTlCDcS2, PORTdIRoUT);
//	lcdDsVal = GpioInit(PORTlCDdS, PORTdIRoUT);
//
//	SELECTaLL
//	LcdPowerOn();
//	LcdDisplayStartLine(0);
//	LcdSetAddress(0);
//	LcdSetPage(0);
//	SELECTcS1
}

int LcdPowerOn(void) {
//	LcdByte(0x3F); // 0 0 1 1 1 1 1 1
//	GpioSetVal(lcdDsVal, LOW);
//	GpioSetVal(lcdRwVal, LOW);
//	LcdTransmit();
	return 0;
}

int LcdPowerOff(void) {
//	LcdByte(0x3E); // 0 0 1 1 1 1 1 0
//	GpioSetVal(lcdDsVal, LOW);
//	GpioSetVal(lcdRwVal, LOW);
//	LcdTransmit();
	return 0;
}

void LcdTransmit(void) {
//	GpioSetVal(lcdEVal, LOW);
//	GpioSetVal(lcdEVal, HIGH);
//	GpioSetVal(lcdEVal, LOW);
}

// Y axis
int LcdSetAddress(unsigned char address) {
//	address &= 0x3F;
//	LcdByte(0x40 | address); // 0 1 [ address ]:6
//	GpioSetVal(lcdDsVal, LOW);
//	GpioSetVal(lcdRwVal, LOW);
//	LcdTransmit();
}

int LcdSetPage(unsigned char page) {
//	page &= 0x7;
//	LcdByte(0xB8 | page); // 1 0 1 1 1 [ page ]:3
//
//	GpioSetVal(lcdDsVal, LOW);
//	GpioSetVal(lcdRwVal, LOW);
//	LcdTransmit();
}

int LcdDisplayStartLine(unsigned char startline) {
//	startline &= 0x3F;
//	LcdByte(0xC0 | startline); // 1 1 [ start line ]:6
//	GpioSetVal(lcdDsVal, LOW);
//	GpioSetVal(lcdRwVal, LOW);
//	LcdTransmit();
}

int LcdWrite(unsigned char data) {
//	LcdByte(data);
//	LCDsELECTiNSTRUCTION;
//	LCDsELECTwRITE;
//	LcdTransmit();
}

//	INFINITE LOOP!!!!!!
int LcdWritePoints(void) {
//	char i = 0, j = 0, pagina = 0, chip = 0;
//	SELECTcS1
//	while (1) {
//		//getchar();
//		LcdWrite(1 << i);
//		i++;
//		if (i > 7)
//			i = 0;
//		j++;
//		if (j > 63) {
//			j = 0;
//			pagina++;
//			if (pagina > 7) {
//				SELECTcS2
//				pagina = 0;
//				return 0;
//			}
//			printf("Cambio pagina (%d)\n", pagina);
//			LcdSetPage(pagina);
//		}
//	}
}

int LcdBorrarPantalla(void) {
	int i, j, k;
	SELECTcS1
	for (k = 0; k < 2; k++) {
		for (j = 0; j < 8; j++) {
			LcdSetPage(j);
			for (i = 0; i < 64; i++) {
				LcdWrite(0);
			}
		}
		SELECTcS2
		LcdPowerOn();
	}

}

int LcdImprimeBuffer(void) {
	unsigned char * buf = lcd_buffer;
	int i, j, k;
	SELECTcS1
	LcdSetAddress(0);
	LcdSetPage(0);
	for (k = 0; k < 2; k++) {
		for (j = 0; j < 8; j++) {
			LcdSetPage(j);
			for (i = 0; i < 64; i++) {
				LcdWrite(buf[i + j * 128 + k * 64]);
				//				if (k) getchar();
			}
		}
		SELECTcS2
		LcdSetAddress(0);
		LcdSetPage(0);
		LcdPowerOn();
	}
}

unsigned char LcdGetBuffDim(char * buff, unsigned char *font) {
	unsigned int dim, i;
	unsigned char x_dim = 0;
	buf_set_font(font);
	int lon = strlen(buff);
	for (i = 0; i < lon; i++) {
		x_dim += BuffGetCharDim(buff[i]);
	}
	dim = x_dim;
	return dim;
}

int LcdPrint(char * data, unsigned char * font, unsigned char x, unsigned char y) {
	int lon = strlen(data), i;
	//printf("%s (%d)\n",data,strlen(data));
	buf_set_font(font);
	buf_set_position(x,y);
	for (i = 0; i < lon; i++) {
		buf_putchar(data[i]);
	}
	//LcdImprimeBuffer();
}

int LcdBorraBuffer(unsigned char x, unsigned char y, unsigned char lon, unsigned char height) {
	unsigned char y_shift = y & 0x7, y_abs = y >> 3, h = height;
	unsigned char * buf = lcd_buffer + x + y_abs * 128;
	unsigned char i, j;
	for (i = 0; i < lon; i++) {
		//printf("puntero %d\n",x+y_abs*128+i);
		*buf = *buf & (0xFF >> (8 - y_shift));
		h -= (8 - y_shift);
		for (j = 1; h > 0; j++) {
			//printf("h=%d j=%d\n",h,j);
			if (h > 8) {
				*(buf + 128 * j) &= 0;
				h -= 8;
			} else {
				if (h > 0) {
					*(buf + 128 * j) &= 0xFF << h;
					h = 0;
				} else
					break;
			}
		}
		h = height;
		buf++;
	}

}

int LcdByte(unsigned char data) {

//	GpioSetVal(lcdD0Val, (data & 1 << 0) >> 0);
//	GpioSetVal(lcdD1Val, (data & 1 << 1) >> 1);
//	GpioSetVal(lcdD2Val, (data & 1 << 2) >> 2);
//	GpioSetVal(lcdD3Val, (data & 1 << 3) >> 3);
//	GpioSetVal(lcdD4Val, (data & 1 << 4) >> 4);
//	GpioSetVal(lcdD5Val, (data & 1 << 5) >> 5);
//	GpioSetVal(lcdD6Val, (data & 1 << 6) >> 6);
//	GpioSetVal(lcdD7Val, (data & 1 << 7) >> 7);
}
