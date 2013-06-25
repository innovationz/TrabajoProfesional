EESchema Schematic File Version 2  date Fri 01 Mar 2013 08:17:09 PM ART
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:max7318
LIBS:nhd-12864wg-ctfh-vn
LIBS:nhd‐12864mz‐fsw‐gbw‐l
LIBS:DisplayGraficoConectorUSB-cache
EELAYER 27 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Controlador Display Grafico. Conector Usb."
Date "26 feb 2013"
Rev "1"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MAX7318 U?
U 1 1 512A8F51
P 3500 3850
F 0 "U?" H 3500 2850 60  0000 C CNN
F 1 "MAX7318" H 3550 4300 60  0000 C CNN
F 2 "" H 3500 3850 60  0001 C CNN
F 3 "" H 3500 3850 60  0001 C CNN
	1    3500 3850
	1    0    0    -1  
$EndComp
$Comp
L USB J?
U 1 1 51278B20
P 3550 5800
F 0 "J?" H 3500 6200 60  0000 C CNN
F 1 "USB" V 3300 5950 60  0000 C CNN
F 2 "" H 3550 5800 60  0001 C CNN
F 3 "" H 3550 5800 60  0001 C CNN
	1    3550 5800
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 5126B233
P 3050 2150
F 0 "#PWR?" H 3050 2240 20  0001 C CNN
F 1 "+5V" H 3050 2240 30  0000 C CNN
F 2 "" H 3050 2150 60  0001 C CNN
F 3 "" H 3050 2150 60  0001 C CNN
	1    3050 2150
	-1   0    0    1   
$EndComp
$Comp
L +5V #PWR?
U 1 1 5126B22D
P 4550 2150
F 0 "#PWR?" H 4550 2240 20  0001 C CNN
F 1 "+5V" H 4550 2240 30  0000 C CNN
F 2 "" H 4550 2150 60  0001 C CNN
F 3 "" H 4550 2150 60  0001 C CNN
	1    4550 2150
	-1   0    0    1   
$EndComp
$Comp
L +5V #PWR?
U 1 1 5126AFB7
P 6700 3850
F 0 "#PWR?" H 6700 3940 20  0001 C CNN
F 1 "+5V" H 6700 3940 30  0000 C CNN
F 2 "" H 6700 3850 60  0001 C CNN
F 3 "" H 6700 3850 60  0001 C CNN
	1    6700 3850
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5126AF93
P 6700 3950
F 0 "#PWR?" H 6700 3950 30  0001 C CNN
F 1 "GND" H 6700 3880 30  0001 C CNN
F 2 "" H 6700 3950 60  0001 C CNN
F 3 "" H 6700 3950 60  0001 C CNN
	1    6700 3950
	0    1    1    0   
$EndComp
$Comp
L CONN_3 K1
U 1 1 507814C4
P 5300 1700
F 0 "K1" V 5250 1700 50  0000 C CNN
F 1 "ContrastControl_10k" V 5350 1700 40  0000 C CNN
F 2 "" H 5300 1700 60  0001 C CNN
F 3 "" H 5300 1700 60  0001 C CNN
	1    5300 1700
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR01
U 1 1 50782512
P 2950 2150
F 0 "#PWR01" H 2950 2150 30  0001 C CNN
F 1 "GND" H 2950 2080 30  0001 C CNN
F 2 "" H 2950 2150 60  0001 C CNN
F 3 "" H 2950 2150 60  0001 C CNN
	1    2950 2150
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 507825E9
P 5650 1950
F 0 "#PWR02" H 5650 1950 30  0001 C CNN
F 1 "GND" H 5650 1880 30  0001 C CNN
F 2 "" H 5650 1950 60  0001 C CNN
F 3 "" H 5650 1950 60  0001 C CNN
	1    5650 1950
	1    0    0    -1  
$EndComp
Text Label 5950 1700 2    60   ~ 0
V0
$Comp
L GND #PWR03
U 1 1 50782717
P 4650 2150
F 0 "#PWR03" H 4650 2150 30  0001 C CNN
F 1 "GND" H 4650 2080 30  0001 C CNN
F 2 "" H 4650 2150 60  0001 C CNN
F 3 "" H 4650 2150 60  0001 C CNN
	1    4650 2150
	1    0    0    -1  
$EndComp
Text Label 3550 2400 1    60   ~ 0
DB0
Text Label 3650 2400 1    60   ~ 0
DB1
Text Label 3750 2400 1    60   ~ 0
DB2
Text Label 3850 2400 1    60   ~ 0
DB3
Text Label 3950 2400 1    60   ~ 0
DB4
Text Label 4050 2400 1    60   ~ 0
DB5
$Comp
L GND #PWR?
U 1 1 512AA025
P 2750 4750
F 0 "#PWR?" H 2750 4750 30  0001 C CNN
F 1 "GND" H 2750 4680 30  0001 C CNN
F 2 "" H 2750 4750 60  0001 C CNN
F 3 "" H 2750 4750 60  0001 C CNN
	1    2750 4750
	1    0    0    -1  
$EndComp
Text Label 2550 3850 2    60   ~ 0
DB0
Text Label 2550 3950 2    60   ~ 0
DB1
Text Label 2550 4050 2    60   ~ 0
DB2
Text Label 2550 4150 2    60   ~ 0
DB3
Text Label 2550 4250 2    60   ~ 0
DB4
Text Label 2550 4350 2    60   ~ 0
DB5
Text Label 2550 4450 2    60   ~ 0
DB6
Text Label 2550 4550 2    60   ~ 0
DB7
$Comp
L NHD-12864WG-CTFH-VN U?
U 1 1 512AA6CB
P 3650 1650
F 0 "U?" H 4500 1950 60  0000 C CNN
F 1 "NHD-12864WG-CTFH-VN" H 3700 1950 60  0000 C CNN
F 2 "~" H 3400 1750 60  0000 C CNN
F 3 "~" H 3400 1750 60  0000 C CNN
	1    3650 1650
	1    0    0    -1  
$EndComp
Text Label 4450 2400 1    60   ~ 0
VEE
Text Label 5650 1300 3    60   ~ 0
VEE
Text Label 4250 2400 1    60   ~ 0
DB7
Text Label 4150 2400 1    60   ~ 0
DB6
Text Label 3150 2400 1    60   ~ 0
V0
Text Label 2750 2400 1    60   ~ 0
CS2
Text Label 2850 2400 1    60   ~ 0
CS1
Text Label 3250 2400 1    60   ~ 0
RS
Text Label 3350 2400 1    60   ~ 0
R/W
Text Label 3450 2350 3    60   ~ 0
E
Text Label 4350 2400 1    60   ~ 0
~RST
Text Label 4425 4650 2    60   ~ 0
CS1
Text Label 4255 4550 0    60   ~ 0
CS2
Text Label 4370 4450 2    60   ~ 0
RS
Text Label 4445 4350 2    60   ~ 0
R/W
Text Label 4250 4250 0    60   ~ 0
E
Text Label 4415 4150 2    60   ~ 0
~RST
NoConn ~ 4150 4050
NoConn ~ 4150 3950
$Comp
L +5V #PWR?
U 1 1 512AABFF
P 4200 3500
F 0 "#PWR?" H 4200 3590 20  0001 C CNN
F 1 "+5V" H 4200 3590 30  0000 C CNN
F 2 "" H 4200 3500 60  0001 C CNN
F 3 "" H 4200 3500 60  0001 C CNN
	1    4200 3500
	1    0    0    -1  
$EndComp
Text Label 5000 3650 0    60   ~ 0
SDA
Text Label 5000 3750 0    60   ~ 0
SCL
$Comp
L GND #PWR?
U 1 1 512AA9B7
P 3050 6350
F 0 "#PWR?" H 3050 6350 30  0001 C CNN
F 1 "GND" H 3050 6280 30  0001 C CNN
F 2 "" H 3050 6350 60  0001 C CNN
F 3 "" H 3050 6350 60  0001 C CNN
	1    3050 6350
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 512AA9BD
P 4000 6350
F 0 "#PWR?" H 4000 6350 30  0001 C CNN
F 1 "GND" H 4000 6280 30  0001 C CNN
F 2 "" H 4000 6350 60  0001 C CNN
F 3 "" H 4000 6350 60  0001 C CNN
	1    4000 6350
	1    0    0    -1  
$EndComp
Text Label 4050 6000 0    60   ~ 0
USB+
Text Label 4050 6150 0    60   ~ 0
USB-
$Comp
L CONN_6 P?
U 1 1 512AAB7C
P 7200 4100
F 0 "P?" V 7150 4100 60  0000 C CNN
F 1 "CONN_6" V 7250 4100 60  0000 C CNN
F 2 "" H 7200 4100 60  0001 C CNN
F 3 "" H 7200 4100 60  0001 C CNN
	1    7200 4100
	1    0    0    -1  
$EndComp
Text Label 6350 4050 0    60   ~ 0
USB+
Text Label 6350 4150 0    60   ~ 0
USB-
Text Label 6350 4250 0    60   ~ 0
SDA
Text Label 6350 4350 0    60   ~ 0
SCL
Text Label 2650 6000 0    60   ~ 0
USB_VCC
Wire Wire Line
	5650 1950 5650 1800
Wire Wire Line
	5650 1250 5650 1600
Wire Wire Line
	2900 3850 2300 3850
Wire Wire Line
	2900 3950 2300 3950
Wire Wire Line
	2900 4050 2300 4050
Wire Wire Line
	2900 4150 2300 4150
Wire Wire Line
	2900 4250 2300 4250
Wire Wire Line
	2900 4350 2300 4350
Wire Wire Line
	2900 4450 2300 4450
Wire Wire Line
	2900 4550 2300 4550
Wire Wire Line
	2750 4750 2750 4650
Wire Wire Line
	2750 4650 2900 4650
Wire Wire Line
	4450 2050 4450 2450
Wire Wire Line
	5650 1700 6100 1700
Wire Wire Line
	3550 2050 3550 2450
Wire Wire Line
	3650 2050 3650 2450
Wire Wire Line
	3750 2050 3750 2450
Wire Wire Line
	3850 2050 3850 2450
Wire Wire Line
	3950 2050 3950 2450
Wire Wire Line
	4050 2050 4050 2450
Wire Wire Line
	4150 2050 4150 2450
Wire Wire Line
	4250 2050 4250 2450
Wire Wire Line
	4350 2050 4350 2450
Wire Wire Line
	3450 2050 3450 2450
Wire Wire Line
	3350 2050 3350 2450
Wire Wire Line
	3250 2050 3250 2450
Wire Wire Line
	3150 2050 3150 2450
Wire Wire Line
	2850 2050 2850 2450
Wire Wire Line
	2750 2050 2750 2450
Wire Wire Line
	4150 4650 4600 4650
Wire Wire Line
	4150 4550 4600 4550
Wire Wire Line
	4150 4450 4600 4450
Wire Wire Line
	4150 4350 4600 4350
Wire Wire Line
	4150 4250 4600 4250
Wire Wire Line
	4150 4150 4600 4150
Wire Wire Line
	3050 2050 3050 2150
Wire Wire Line
	2950 2050 2950 2150
Wire Wire Line
	4650 2150 4650 2050
Wire Wire Line
	4550 2150 4550 2050
Wire Wire Line
	4200 3500 4200 3550
Wire Wire Line
	4200 3550 4150 3550
Wire Wire Line
	4150 3650 5250 3650
Wire Wire Line
	4150 3750 5250 3750
Wire Wire Line
	3150 6250 3050 6250
Wire Wire Line
	3050 6150 3050 6350
Wire Wire Line
	3150 6150 3050 6150
Connection ~ 3050 6250
Wire Wire Line
	3900 6250 4000 6250
Wire Wire Line
	4000 6250 4000 6350
Wire Wire Line
	3900 6000 4350 6000
Wire Wire Line
	3900 6150 4350 6150
Wire Wire Line
	6700 3850 6850 3850
Wire Wire Line
	6850 3950 6700 3950
Wire Wire Line
	6200 4050 6850 4050
Wire Wire Line
	6200 4150 6850 4150
Wire Wire Line
	6850 4250 6200 4250
Wire Wire Line
	6850 4350 6200 4350
Wire Wire Line
	2600 6000 3150 6000
$EndSCHEMATC
