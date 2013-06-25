#include "fonts.h"			// for FAST_FONT_INDEX

// helvO14 = "Helvetica Oblique"

const unsigned char font_helvO14[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xD0,0x00,
0xD8,0x00,
0xF0,0x00,
0x06,0x01,
0x20,0x01,
0x36,0x01,
0x3B,0x01,
0x56,0x01,
0x70,0x01,
0x78,0x01,
0x8A,0x01,
0x90,0x01,
0x98,0x01,
0x9D,0x01,
0xB0,0x01,
0xC4,0x01,
0xD1,0x01,
0xE7,0x01,
0xFD,0x01,
0x11,0x02,
0x27,0x02,
0x3D,0x02,
0x53,0x02,
0x67,0x02,
0x7D,0x02,
0x87,0x02,
0x93,0x02,
0x9D,0x02,
0xA7,0x02,
0xB1,0x02,
0xC3,0x02,
0xF8,0x02,
0x10,0x03,
0x28,0x03,
0x42,0x03,
0x5E,0x03,
0x78,0x03,
0x92,0x03,
0xAC,0x03,
0xC8,0x03,
0xD4,0x03,
0xEA,0x03,
0x06,0x04,
0x16,0x04,
0x38,0x04,
0x54,0x04,
0x72,0x04,
0x8A,0x04,
0xA8,0x04,
0xC2,0x04,
0xDA,0x04,
0xF0,0x04,
0x0A,0x05,
0x21,0x05,
0x43,0x05,
0x5D,0x05,
0x74,0x05,
0x90,0x05,
0xAB,0x05,
0xB5,0x05,
0xCF,0x05,
0xD9,0x05,
0xE7,0x05,
0xEE,0x05,
0x02,0x06,
0x18,0x06,
0x2C,0x06,
0x44,0x06,
0x58,0x06,
0x69,0x06,
0x81,0x06,
0x97,0x06,
0xA3,0x06,
0xBE,0x06,
0xD2,0x06,
0xDE,0x06,
0xFC,0x06,
0x12,0x07,
0x26,0x07,
0x3E,0x07,
0x54,0x07,
0x66,0x07,
0x7A,0x07,
0x88,0x07,
0x9E,0x07,
0xB0,0x07,
0xCA,0x07,
0xE4,0x07,
0xFA,0x07,
0x0E,0x08,
0x29,0x08,
0x3D,0x08,
0x57,0x08,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0D,0x49,
0x00,

// exclam (33): w=5, h=14
0x24,0x12,
0x00,0x80,0xF8,0x7F,0x07,
0x30,0x33,0x03,0x00,0x00,

// quotedbl (34): w=6, h=4
0x05,0x18,
0x0C,0x07,0x03,0x0C,0x07,0x03,

// numbersign (35): w=11, h=13
0x2A,0x2D,
0x00,0x00,0x18,0xD8,0x78,0x1E,0xDB,0x78,0x1E,0x1B,
0x18,
0x03,0x1B,0x0F,0x03,0x1B,0x0F,0x03,0x03,0x03,0x00,
0x00,

// dollar (36): w=10, h=16
0x29,0x0D,
0x00,0x00,0x38,0x7C,0xC6,0xFE,0x86,0x87,0x1C,0x18,
0x1C,0x3C,0xF0,0x30,0x3F,0x30,0x39,0x1F,0x0F,0x00,

// percent (37): w=12, h=13
0x2B,0x3B,
0x1C,0x36,0x23,0x31,0x9B,0xCE,0x60,0x30,0x9C,0x86,
0x83,0x01,
0x10,0x18,0x0C,0x06,0x03,0x00,0x0E,0x1B,0x11,0x18,
0x0D,0x07,

// ampersand (38): w=10, h=13
0x29,0x34,
0x00,0x80,0xCC,0x7E,0x73,0xE1,0xB3,0x1F,0xCE,0xC0,
0x0F,0x1F,0x18,0x18,0x18,0x0C,0x07,0x07,0x1D,0x18,

// quotesingle (39): w=3, h=4
0x02,0x18,
0x0C,0x07,0x03,

// parenleft (40): w=8, h=18
0xC7,0x00,0x52,
0x00,0xC0,0xF0,0x38,0x0C,0x06,0x03,0x01,
0x7F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0x02,0x00,0x00,0x00,0x00,

// parenright (41): w=8, h=18
0x47,0x01,
0x00,0x00,0x00,0x00,0x01,0x07,0xFE,0xF8,
0x00,0x00,0x80,0xC0,0x70,0x3C,0x0F,0x03,
0x02,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// asterisk (42): w=5, h=6
0x84,0x00,0x84,
0x32,0x1C,0x0F,0x3C,0x02,

// plus (43): w=8, h=10
0x27,0x94,
0x30,0x30,0xB0,0xF8,0x7F,0x37,0x30,0x30,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,

// comma (44): w=3, h=5
0x82,0x0C,0x56,
0x10,0x0B,0x07,

// hyphen (45): w=5, h=2
0x84,0x08,0x55,
0x03,0x03,0x03,0x03,0x03,

// period (46): w=2, h=2
0x81,0x0C,0x66,
0x03,0x03,

// slash (47): w=8, h=14
0xA7,0x00,0x42,
0x00,0x00,0x00,0xC0,0xF0,0x3C,0x0F,0x03,
0x30,0x3C,0x0F,0x03,0x00,0x00,0x00,0x00,

// zero (48): w=9, h=13
0x28,0x33,
0xC0,0xF8,0x3E,0x06,0x03,0x03,0x83,0xFF,0x7E,
0x0F,0x1F,0x18,0x18,0x18,0x0C,0x0F,0x03,0x00,

// one (49): w=5, h=13
0xA4,0x01,0x95,
0x06,0xC6,0xFE,0x3F,0x03,
0x1C,0x1F,0x03,0x00,0x00,

// two (50): w=10, h=13
0x29,0x2D,
0x00,0x00,0x0C,0x8E,0xC7,0xC3,0x63,0x73,0x3F,0x1E,
0x1C,0x1E,0x1B,0x19,0x19,0x18,0x18,0x18,0x00,0x00,

// three (51): w=10, h=13
0x29,0x2D,
0x00,0x00,0x0C,0x0E,0x03,0x63,0x63,0xF3,0xBF,0x1E,
0x06,0x0E,0x1C,0x18,0x18,0x18,0x1C,0x0F,0x07,0x00,

// four (52): w=9, h=13
0x28,0x33,
0x80,0xC0,0x60,0x30,0x18,0xCC,0xFE,0x3F,0x03,
0x03,0x03,0x03,0x03,0x1F,0x1F,0x03,0x03,0x00,

// five (53): w=10, h=13
0x29,0x2D,
0x00,0x60,0x78,0x3E,0x37,0x33,0x73,0xE3,0xC3,0x03,
0x0C,0x1C,0x18,0x18,0x18,0x18,0x0C,0x0F,0x03,0x00,

// six (54): w=10, h=13
0x29,0x32,
0xE0,0xF8,0x7C,0x26,0x36,0x33,0x33,0xE3,0xC7,0x06,
0x07,0x0F,0x18,0x18,0x18,0x18,0x0C,0x0F,0x03,0x00,

// seven (55): w=10, h=13
0x29,0x32,
0x00,0x00,0x83,0xC3,0x63,0x33,0x1B,0x0F,0x07,0x03,
0x18,0x1E,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=9, h=13
0x28,0x33,
0x00,0xC0,0xDC,0x7E,0x23,0x63,0xF3,0x9F,0x0E,
0x0F,0x1F,0x18,0x18,0x18,0x1C,0x0F,0x07,0x00,

// nine (57): w=10, h=13
0x29,0x2D,
0x00,0x78,0xFE,0x86,0x83,0x83,0x83,0xC3,0xFE,0xFC,
0x0C,0x1C,0x18,0x19,0x19,0x0D,0x0C,0x07,0x03,0x00,

// colon (58): w=4, h=10
0x23,0x8E,
0x00,0x00,0x03,0x03,
0x03,0x03,0x00,0x00,

// semicolon (59): w=5, h=13
0x24,0x88,
0x00,0x00,0x00,0x03,0x03,
0x10,0x0B,0x07,0x00,0x00,

// less (60): w=8, h=7
0x07,0xD5,
0x08,0x1C,0x1C,0x36,0x36,0x63,0x63,0x01,

// equal (61): w=8, h=5
0x07,0xF5,
0x18,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x03,

// greater (62): w=8, h=7
0x07,0xD5,
0x40,0x63,0x63,0x36,0x36,0x1C,0x1C,0x08,

// question (63): w=8, h=14
0x27,0x19,
0x0C,0x8E,0xC7,0xE3,0x73,0x3B,0x1F,0x0E,
0x30,0x33,0x03,0x00,0x00,0x00,0x00,0x00,

// at (64): w=17, h=17
0x50,0x13,
0x80,0xE0,0x70,0x18,0x0C,0xC6,0xE6,0x63,0x33,0x13,
0xF3,0xE3,0x33,0x06,0x0E,0xFC,0xF0,
0x1F,0x7F,0xE0,0xC0,0x8F,0x9F,0x90,0x98,0x8C,0x9E,
0x9F,0x11,0x18,0x0C,0x07,0x03,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=11, h=14
0x2A,0x09,
0x00,0x00,0x00,0x80,0xC0,0xF0,0x3C,0x0E,0x07,0xFF,
0xF8,
0x30,0x3C,0x0E,0x07,0x07,0x06,0x06,0x06,0x06,0x3F,
0x3F,

// B (66): w=11, h=14
0x2A,0x14,
0x00,0x80,0xF8,0xFF,0xC7,0xC3,0xC3,0xC3,0xE3,0xBF,
0x1E,
0x38,0x3F,0x37,0x30,0x30,0x30,0x30,0x30,0x19,0x1F,
0x0F,

// C (67): w=12, h=14
0x2B,0x13,
0xE0,0xF0,0x3C,0x0C,0x06,0x06,0x03,0x03,0x03,0x07,
0x0E,0x0C,
0x07,0x1F,0x1C,0x30,0x30,0x30,0x30,0x18,0x1C,0x0E,
0x06,0x00,

// D (68): w=13, h=14
0x2C,0x0D,
0x00,0x80,0xF8,0x7F,0x07,0x03,0x03,0x03,0x03,0x03,
0x8E,0xFE,0xF8,
0x38,0x3F,0x37,0x30,0x30,0x30,0x38,0x18,0x1C,0x0E,
0x07,0x03,0x00,

// E (69): w=12, h=14
0x2B,0x12,
0x00,0x80,0xF8,0xFF,0xC7,0xC3,0xC3,0xC3,0xC3,0xC3,
0x03,0x03,
0x38,0x3F,0x37,0x30,0x30,0x30,0x30,0x30,0x30,0x00,
0x00,0x00,

// F (70): w=12, h=14
0x2B,0x0C,
0x00,0x80,0xF8,0xFF,0xC7,0xC3,0xC3,0xC3,0xC3,0x03,
0x03,0x03,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// G (71): w=12, h=14
0x2B,0x14,
0x80,0xF0,0x78,0x1C,0x06,0x06,0x83,0x83,0x83,0x83,
0x8F,0x8E,
0x07,0x1F,0x1C,0x30,0x30,0x30,0x31,0x11,0x39,0x3F,
0x07,0x01,

// H (72): w=13, h=14
0x2C,0x13,
0x00,0x80,0xF8,0xFF,0xC7,0xC0,0xC0,0xC0,0xC0,0xC0,
0xF8,0x7F,0x07,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x38,0x3F,
0x07,0x00,0x00,

// I (73): w=5, h=14
0x24,0x13,
0x00,0x80,0xF8,0x7F,0x07,
0x38,0x3F,0x07,0x00,0x00,

// J (74): w=10, h=14
0x29,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF8,0x7F,0x07,
0x1C,0x3C,0x30,0x30,0x30,0x38,0x1F,0x07,0x00,0x00,

// K (75): w=13, h=14
0x2C,0x0D,
0x00,0x80,0xF8,0xFF,0xC7,0xE0,0xB0,0x18,0x18,0x0C,
0x06,0x03,0x01,
0x38,0x3F,0x07,0x01,0x00,0x00,0x01,0x07,0x0E,0x38,
0x30,0x00,0x00,

// L (76): w=7, h=14
0x26,0x15,
0x00,0x80,0xF8,0x7F,0x07,0x00,0x00,
0x38,0x3F,0x37,0x30,0x30,0x30,0x30,

// M (77): w=16, h=14
0x2F,0x0C,
0x00,0x80,0xF8,0x7F,0x0F,0xFC,0xF0,0x00,0x00,0x80,
0xE0,0x70,0x9C,0xFE,0x7F,0x07,
0x38,0x3F,0x07,0x00,0x00,0x03,0x3F,0x3C,0x0F,0x03,
0x01,0x38,0x3F,0x07,0x00,0x00,

// N (78): w=13, h=14
0x2C,0x13,
0x00,0x80,0xF8,0x7F,0x0F,0xFC,0xF0,0x00,0x00,0x80,
0xF8,0x7F,0x07,
0x38,0x3F,0x07,0x00,0x00,0x00,0x07,0x1F,0x38,0x3F,
0x07,0x00,0x00,

// O (79): w=14, h=14
0x2D,0x13,
0x80,0xF0,0x78,0x1C,0x06,0x06,0x03,0x03,0x03,0x03,
0x03,0x8E,0xFE,0x78,
0x07,0x1F,0x1C,0x30,0x30,0x30,0x30,0x30,0x18,0x18,
0x0E,0x07,0x03,0x00,

// P (80): w=11, h=14
0x2A,0x13,
0x00,0xC0,0xFC,0xFF,0xC7,0xC3,0xC3,0xC3,0x63,0x7F,
0x3E,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// Q (81): w=14, h=15
0x2D,0x13,
0x80,0xF0,0x78,0x1C,0x06,0x06,0x03,0x03,0x03,0x03,
0x03,0x8E,0xFE,0x78,
0x07,0x1F,0x1C,0x30,0x30,0x30,0x30,0x36,0x1E,0x3C,
0x7E,0x67,0x03,0x00,

// R (82): w=12, h=14
0x2B,0x14,
0x00,0x80,0xF8,0xFF,0xC7,0xC3,0xC3,0xC3,0xC3,0xE3,
0x7F,0x3E,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x39,0x3F,
0x07,0x00,

// S (83): w=11, h=14
0x2A,0x13,
0x00,0x3C,0x7E,0x66,0x63,0xE3,0xC3,0xC3,0x83,0x0F,
0x0E,
0x1C,0x3C,0x30,0x30,0x30,0x30,0x30,0x19,0x1F,0x07,
0x00,

// T (84): w=10, h=14
0x29,0x18,
0x03,0x03,0x83,0xFB,0x7F,0x07,0x03,0x03,0x03,0x03,
0x00,0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=12, h=14
0x2B,0x19,
0x80,0xF8,0x7F,0x07,0x00,0x00,0x00,0x00,0x80,0xF8,
0x7F,0x07,
0x0F,0x1F,0x38,0x30,0x30,0x30,0x18,0x1C,0x0F,0x03,
0x00,0x00,

// V (86): w=10, h=14
0xA9,0x00,0x83,
0xFF,0xFF,0x00,0x00,0x00,0xC0,0xF0,0x3C,0x0F,0x03,
0x07,0x3F,0x38,0x1C,0x0F,0x03,0x00,0x00,0x00,0x00,

// W (87): w=16, h=14
0x2F,0x18,
0xFF,0xFF,0x00,0x00,0xC0,0xF0,0x3C,0x0F,0xFF,0xF0,
0x00,0x80,0xF0,0x7C,0x0F,0x03,
0x01,0x3F,0x3E,0x0F,0x03,0x00,0x00,0x00,0x01,0x3F,
0x3E,0x0F,0x03,0x00,0x00,0x00,

// X (88): w=12, h=14
0x2B,0x0D,
0x00,0x00,0x07,0x0F,0xBC,0xF0,0xE0,0x70,0x38,0x0E,
0x07,0x03,
0x30,0x38,0x1C,0x07,0x03,0x01,0x03,0x0F,0x3C,0x38,
0x00,0x00,

// Y (89): w=10, h=14
0xA9,0x00,0x83,
0x1F,0xFF,0xE0,0x00,0xC0,0xE0,0x78,0x1C,0x0F,0x03,
0x00,0x39,0x3F,0x07,0x03,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=13, h=14
0x2C,0x06,
0x00,0x00,0x00,0x00,0x03,0x83,0xC3,0x63,0x33,0x1B,
0x0F,0x07,0x03,
0x30,0x38,0x3C,0x36,0x33,0x31,0x30,0x30,0x30,0x30,
0x00,0x00,0x00,

// bracketleft (91): w=8, h=18
0xC7,0x00,0x42,
0x00,0x00,0xE0,0xFC,0x1F,0x03,0x03,0x03,
0xE0,0xFE,0x1F,0x01,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,

// backslash (92): w=4, h=14
0x23,0x13,
0x0F,0xFF,0xF0,0x00,
0x00,0x01,0x3F,0x3E,

// bracketright (93): w=8, h=18
0x47,0x00,
0x00,0x00,0x00,0x00,0x03,0xE3,0xFF,0x1F,
0x00,0x00,0x00,0xE0,0xFE,0x1F,0x01,0x00,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,

// asciicircum (94): w=8, h=8
0x07,0x34,
0xC0,0xF0,0x3C,0x0E,0x03,0x1F,0xFC,0xE0,

// underscore (95): w=11, h=2
0x8A,0x10,0x35,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,

// grave (96): w=4, h=3
0x83,0x00,0x72,
0x01,0x03,0x06,0x04,

// a (97): w=9, h=10
0x28,0x8E,
0xC0,0xE0,0x76,0x36,0x13,0x9B,0xFB,0x7F,0x0E,
0x01,0x03,0x03,0x03,0x01,0x03,0x03,0x00,0x00,

// b (98): w=10, h=14
0x29,0x0E,
0x00,0x80,0xF8,0xFF,0x67,0x30,0x30,0x30,0xF0,0xE0,
0x38,0x3F,0x1F,0x30,0x30,0x30,0x38,0x1C,0x0F,0x03,

// c (99): w=9, h=10
0x28,0x8D,
0xF0,0xFC,0x0E,0x06,0x03,0x83,0x83,0x07,0x06,
0x01,0x03,0x03,0x03,0x03,0x01,0x01,0x00,0x00,

// d (100): w=11, h=14
0x2A,0x0D,
0x00,0xC0,0xE0,0x70,0x30,0x30,0x30,0xE0,0xF8,0x7F,
0x07,
0x1F,0x3F,0x30,0x30,0x30,0x18,0x3C,0x3F,0x07,0x00,
0x00,

// e (101): w=9, h=10
0x28,0x8D,
0xF0,0xFC,0x1E,0x16,0x13,0x93,0x93,0x1F,0x0E,
0x01,0x03,0x03,0x03,0x03,0x01,0x01,0x00,0x00,

// f (102): w=7, h=14
0xA6,0x00,0x52,
0x30,0xB0,0xF8,0x7E,0x37,0x33,0x03,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,

// g (103): w=11, h=14
0x2A,0x87,
0x00,0xF0,0xFC,0x0E,0x06,0x03,0x83,0xC3,0xFA,0x7F,
0x07,
0x18,0x19,0x33,0x33,0x33,0x1B,0x1D,0x0F,0x03,0x00,
0x00,

// h (104): w=10, h=14
0x29,0x0E,
0x00,0x80,0xF8,0xFF,0x67,0x20,0x30,0x30,0xF0,0xE0,
0x38,0x3F,0x07,0x00,0x00,0x00,0x38,0x3F,0x07,0x00,

// i (105): w=5, h=14
0x24,0x0C,
0x00,0x80,0xF0,0x73,0x03,
0x38,0x3F,0x07,0x00,0x00,

// j (106): w=8, h=18
0xC7,0x00,0x23,
0x00,0x00,0x00,0x00,0x80,0xF0,0x73,0x03,
0x00,0x00,0x80,0xF8,0x7F,0x07,0x00,0x00,
0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,

// k (107): w=9, h=14
0x28,0x0D,
0x00,0x00,0xF8,0xFF,0x87,0xC0,0x60,0x30,0x10,
0x38,0x3F,0x07,0x01,0x01,0x0F,0x3E,0x30,0x00,

// l (108): w=5, h=14
0x24,0x0C,
0x00,0x80,0xF8,0x7F,0x07,
0x38,0x3F,0x07,0x00,0x00,

// m (109): w=14, h=10
0x2D,0x8D,
0x80,0xF8,0x7F,0x07,0x04,0x82,0xFB,0x7F,0x06,0x04,
0x82,0xFB,0x7F,0x06,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,
0x03,0x03,0x00,0x00,

// n (110): w=10, h=10
0x29,0x8E,
0x80,0xF8,0x7F,0x0F,0x06,0x03,0x83,0xF3,0x7F,0x0E,
0x03,0x03,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,

// o (111): w=9, h=10
0x28,0x8E,
0xF0,0xFC,0x0E,0x06,0x03,0x83,0xC3,0xFF,0x3E,
0x01,0x03,0x03,0x03,0x03,0x01,0x01,0x00,0x00,

// p (112): w=11, h=14
0x2A,0x88,
0x00,0x80,0xF8,0xFF,0x0F,0x06,0x03,0x83,0xC3,0xFF,
0x3E,
0x38,0x3F,0x07,0x01,0x03,0x03,0x03,0x03,0x01,0x00,
0x00,

// q (113): w=10, h=14
0x29,0x8D,
0xF0,0xFC,0x0E,0x07,0x03,0x83,0xC3,0xFE,0x7F,0x07,
0x01,0x03,0x03,0x03,0x03,0x39,0x3F,0x07,0x00,0x00,

// r (114): w=8, h=10
0x27,0x8C,
0x80,0xF8,0x7F,0x07,0x06,0x03,0x03,0x03,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// s (115): w=9, h=10
0x28,0x8D,
0x80,0x8C,0x1E,0x36,0x33,0x33,0xE3,0xE7,0x06,
0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,

// t (116): w=6, h=13
0x25,0x2C,
0x18,0xD8,0xFC,0x3F,0x1B,0x18,
0x0E,0x1F,0x19,0x00,0x00,0x00,

// u (117): w=10, h=10
0x29,0x8D,
0xC0,0xF8,0x3F,0x07,0x00,0x80,0xC0,0xF8,0x7F,0x07,
0x01,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x00,0x00,

// v (118): w=8, h=10
0x27,0x93,
0xFF,0xFF,0x80,0xC0,0xF0,0x3C,0x1F,0x07,
0x00,0x03,0x03,0x01,0x00,0x00,0x00,0x00,

// w (119): w=12, h=10
0x2B,0x93,
0x7F,0xFF,0x80,0xE0,0x38,0x7F,0xFF,0x80,0xE0,0x7C,
0x1F,0x03,
0x00,0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x00,0x00,
0x00,0x00,

// x (120): w=12, h=10
0x2B,0x86,
0x00,0x00,0x81,0xC7,0xEF,0x7C,0xF8,0xDC,0x8E,0x07,
0x03,0x01,
0x02,0x03,0x03,0x01,0x00,0x00,0x00,0x03,0x03,0x02,
0x00,0x00,

// y (121): w=10, h=14
0x29,0x8D,
0x00,0x00,0x7F,0xFF,0x80,0xC0,0x70,0x3C,0x0F,0x03,
0x30,0x30,0x1C,0x0F,0x03,0x01,0x00,0x00,0x00,0x00,

// z (122): w=9, h=10
0x28,0x8D,
0x00,0x80,0xC3,0x63,0x33,0x1B,0x0F,0x07,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,

// braceleft (123): w=8, h=18
0xC7,0x00,0x52,
0x00,0x80,0xC0,0x7C,0x3E,0x03,0x01,0x01,
0xF1,0xFF,0x0E,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x02,0x02,0x00,0x00,0x00,0x00,

// bar (124): w=6, h=18
0x45,0x07,
0x00,0x00,0x80,0xF8,0x7F,0x07,
0x80,0xF8,0x7F,0x07,0x00,0x00,
0x03,0x03,0x00,0x00,0x00,0x00,

// braceright (125): w=8, h=18
0x47,0x07,
0x00,0x00,0x00,0x01,0x61,0xFF,0x9E,0x00,
0x00,0x00,0x00,0xF8,0xFC,0x06,0x03,0x01,
0x02,0x02,0x03,0x01,0x00,0x00,0x00,0x00,

// asciitilde (126): w=8, h=3
0x07,0xF4,
0x06,0x07,0x03,0x03,0x06,0x06,0x07,0x03

};
// 1955 bytes
// 2145 bytes with FAST_FONT_INDEX