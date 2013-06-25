#include "fonts.h"			// for FAST_FONT_INDEX

// courBO14 = "Courier Bold Oblique"

const unsigned char font_courBO14[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xD1,0x00,
0xDA,0x00,
0xF2,0x00,
0x08,0x01,
0x1C,0x01,
0x30,0x01,
0x37,0x01,
0x48,0x01,
0x58,0x01,
0x63,0x01,
0x79,0x01,
0x80,0x01,
0x8B,0x01,
0x90,0x01,
0xAE,0x01,
0xC2,0x01,
0xD4,0x01,
0xEA,0x01,
0x00,0x02,
0x14,0x02,
0x2A,0x02,
0x40,0x02,
0x54,0x02,
0x6A,0x02,
0x80,0x02,
0x86,0x02,
0x93,0x02,
0xAB,0x02,
0xB8,0x02,
0xD0,0x02,
0xE1,0x02,
0xF7,0x02,
0x11,0x03,
0x29,0x03,
0x41,0x03,
0x59,0x03,
0x73,0x03,
0x8D,0x03,
0xA5,0x03,
0xBF,0x03,
0xD5,0x03,
0xEF,0x03,
0x09,0x04,
0x21,0x04,
0x3D,0x04,
0x57,0x04,
0x6D,0x04,
0x85,0x04,
0x9B,0x04,
0xB5,0x04,
0xCB,0x04,
0xE3,0x04,
0xFB,0x04,
0x15,0x05,
0x2F,0x05,
0x49,0x05,
0x5F,0x05,
0x75,0x05,
0x87,0x05,
0x94,0x05,
0xA6,0x05,
0xB0,0x05,
0xBE,0x05,
0xC5,0x05,
0xDB,0x05,
0xF3,0x05,
0x09,0x06,
0x21,0x06,
0x37,0x06,
0x4F,0x06,
0x69,0x06,
0x7F,0x06,
0x91,0x06,
0xA7,0x06,
0xBF,0x06,
0xD1,0x06,
0xEB,0x06,
0x01,0x07,
0x19,0x07,
0x33,0x07,
0x4D,0x07,
0x65,0x07,
0x7D,0x07,
0x91,0x07,
0xA5,0x07,
0xBD,0x07,
0xD7,0x07,
0xF3,0x07,
0x0D,0x08,
0x21,0x08,
0x31,0x08,
0x41,0x08,
0x51,0x08,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0B,0x4F,
0x00,

// exclam (33): w=5, h=12
0xA4,0x00,0x87,
0x80,0xF8,0x7F,0x1F,0x07,
0x0D,0x0D,0x00,0x00,0x00,

// quotedbl (34): w=7, h=6
0x06,0x1B,
0x38,0x3F,0x07,0x00,0x38,0x3F,0x07,

// numbersign (35): w=11, h=13
0x2A,0x0D,
0x00,0x90,0x98,0xF8,0xF8,0x9E,0xFF,0xF9,0x9E,0x9F,
0x09,
0x01,0x39,0x3F,0x07,0x39,0x3F,0x07,0x01,0x01,0x00,
0x00,

// dollar (36): w=10, h=14
0x29,0x0E,
0x00,0x00,0x38,0x7C,0x6C,0xE6,0xC6,0xC7,0x8F,0x0E,
0x0E,0x0E,0x7C,0x7C,0x0C,0x0C,0x0E,0x07,0x03,0x00,

// percent (37): w=9, h=12
0x28,0x14,
0x8C,0x9E,0xD3,0x59,0xAF,0xA6,0x90,0x10,0x10,
0x00,0x00,0x06,0x0F,0x09,0x0C,0x07,0x03,0x00,

// ampersand (38): w=9, h=10
0x28,0x4F,
0xC0,0xE0,0x3C,0x3E,0xE3,0xC3,0xE3,0x67,0x26,
0x01,0x03,0x03,0x03,0x01,0x01,0x03,0x03,0x02,

// quotesingle (39): w=4, h=6
0x83,0x00,0x97,
0x30,0x3C,0x0F,0x03,

// parenleft (40): w=7, h=15
0xA6,0x00,0x85,
0xC0,0xF0,0x38,0x0C,0x06,0x03,0x01,
0x1F,0x7F,0x60,0x00,0x00,0x00,0x00,

// parenright (41): w=7, h=15
0x26,0x11,
0x00,0x00,0x00,0x00,0x03,0xFF,0xFC,
0x40,0x60,0x30,0x18,0x0E,0x07,0x01,

// asterisk (42): w=9, h=8
0x08,0x14,
0xC0,0xEC,0x6C,0x3C,0x1F,0x7F,0xEC,0xCC,0x0C,

// plus (43): w=10, h=10
0x29,0x4E,
0x30,0x30,0x30,0xF0,0xFC,0x3F,0x33,0x30,0x30,0x30,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// comma (44): w=4, h=6
0x83,0x0A,0x6A,
0x30,0x1C,0x0F,0x07,

// hyphen (45): w=9, h=2
0x08,0xCF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=2, h=2
0x81,0x0A,0x8A,
0x03,0x03,

// slash (47): w=14, h=15
0x2D,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0x30,0x1C,
0x0E,0x03,0x01,0x00,
0xC0,0xE0,0x30,0x1C,0x0E,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// zero (48): w=9, h=12
0x28,0x14,
0xC0,0xF0,0x7C,0x0E,0x07,0x03,0xE3,0xFF,0x3E,
0x07,0x0F,0x0C,0x0C,0x0E,0x07,0x03,0x01,0x00,

// one (49): w=8, h=12
0x27,0x10,
0x00,0x00,0x06,0x06,0xE6,0xFE,0x1F,0x03,
0x0C,0x0C,0x0C,0x0F,0x0F,0x0C,0x0C,0x0C,

// two (50): w=10, h=12
0x29,0x0E,
0x00,0x00,0x0C,0x8E,0x86,0xC3,0x63,0x73,0x3F,0x1E,
0x0C,0x0E,0x0F,0x0F,0x0D,0x0C,0x0C,0x0C,0x00,0x00,

// three (51): w=10, h=12
0x29,0x0E,
0x00,0x00,0x00,0x66,0x66,0x63,0xF3,0xDB,0x1F,0x0E,
0x06,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x03,0x00,0x00,

// four (52): w=9, h=12
0x28,0x0F,
0x80,0xC0,0xE0,0xB0,0x98,0x8C,0xF6,0xFF,0x8F,
0x01,0x01,0x01,0x0D,0x0D,0x0F,0x0F,0x0D,0x01,

// five (53): w=10, h=12
0x29,0x0E,
0x00,0x00,0x70,0x7C,0x3F,0x33,0x33,0xF3,0xE3,0x03,
0x06,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x03,0x01,0x00,

// six (54): w=10, h=12
0x29,0x0E,
0xC0,0xF0,0x78,0x2C,0x36,0x36,0x73,0xE3,0xC3,0x03,
0x03,0x07,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x03,0x00,

// seven (55): w=9, h=12
0x28,0x19,
0x06,0x07,0x03,0xC3,0xE3,0x3B,0x1F,0x07,0x03,
0x00,0x0C,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=10, h=12
0x29,0x0E,
0x00,0x80,0xDC,0x7E,0x62,0x63,0x63,0xF3,0x9F,0x0E,
0x03,0x07,0x0C,0x0C,0x0C,0x0C,0x06,0x07,0x01,0x00,

// nine (57): w=10, h=12
0x29,0x0E,
0x00,0x70,0xFC,0xCE,0xC6,0xC3,0x43,0xE3,0xFF,0x1E,
0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0x07,0x03,0x00,0x00,

// colon (58): w=3, h=8
0x82,0x04,0x89,
0xC0,0xC3,0x03,

// semicolon (59): w=5, h=11
0xA4,0x04,0x69,
0x00,0x80,0xC0,0xC3,0x03,
0x06,0x03,0x01,0x00,0x00,

// less (60): w=11, h=9
0x2A,0x4D,
0x10,0x38,0x38,0x6C,0x6C,0xC6,0xC6,0x83,0x83,0x01,
0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x00,

// equal (61): w=11, h=6
0x0A,0x88,
0x30,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x03,

// greater (62): w=11, h=9
0x2A,0x48,
0x00,0x01,0x83,0x83,0xC6,0xC6,0x6C,0x6C,0x38,0x38,
0x10,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// question (63): w=7, h=11
0xA6,0x01,0x85,
0xC6,0xE7,0x73,0x33,0x1B,0x1F,0x0E,
0x06,0x06,0x00,0x00,0x00,0x00,0x00,

// at (64): w=10, h=13
0x29,0x0E,
0xC0,0xF8,0x3C,0xC6,0xF2,0x39,0x89,0xF9,0x7F,0x0E,
0x07,0x0F,0x18,0x11,0x13,0x13,0x0B,0x0B,0x02,0x01,

// A (65): w=12, h=11
0x2B,0x22,
0x00,0x00,0x80,0xC0,0xF3,0xFB,0xCF,0xC3,0xFF,0xFF,
0x00,0x00,
0x06,0x06,0x07,0x07,0x06,0x00,0x00,0x06,0x07,0x07,
0x06,0x06,

// B (66): w=11, h=11
0x2A,0x28,
0x00,0x00,0xC3,0xF3,0x3F,0x3F,0x33,0x33,0x33,0xFF,
0xDE,
0x06,0x06,0x07,0x07,0x06,0x06,0x06,0x06,0x07,0x03,
0x01,

// C (67): w=11, h=11
0x2A,0x2D,
0xF0,0xFC,0x0E,0x06,0x03,0x03,0x03,0x03,0x0E,0x0F,
0x03,
0x01,0x03,0x07,0x06,0x06,0x06,0x06,0x03,0x03,0x00,
0x00,

// D (68): w=11, h=11
0x2A,0x28,
0x00,0x80,0xF3,0x7F,0x0F,0x03,0x03,0x03,0x83,0xFE,
0x7C,
0x06,0x07,0x07,0x06,0x06,0x06,0x06,0x03,0x03,0x01,
0x00,

// E (69): w=12, h=11
0x2B,0x27,
0x00,0x00,0xC3,0xFB,0x3F,0x37,0x7B,0x7B,0x83,0x8F,
0x0F,0x03,
0x06,0x06,0x07,0x07,0x06,0x06,0x06,0x06,0x07,0x07,
0x00,0x00,

// F (70): w=12, h=11
0x2B,0x27,
0x00,0x00,0xC3,0xFB,0x3F,0x37,0x7B,0x7B,0x03,0x0F,
0x0F,0x03,
0x06,0x06,0x07,0x07,0x06,0x06,0x06,0x00,0x00,0x00,
0x00,0x00,

// G (71): w=11, h=11
0x2A,0x2D,
0xF0,0xFC,0x0E,0x06,0x03,0xC3,0xC3,0xC3,0xCE,0xCF,
0x03,
0x01,0x03,0x07,0x06,0x06,0x06,0x06,0x03,0x03,0x00,
0x00,

// H (72): w=12, h=11
0x2B,0x27,
0x00,0x80,0xE3,0x7F,0x3F,0x33,0x30,0xB0,0xF3,0x7F,
0x0F,0x03,
0x06,0x07,0x07,0x06,0x00,0x00,0x06,0x07,0x07,0x06,
0x00,0x00,

// I (73): w=10, h=11
0x29,0x2E,
0x00,0x00,0x03,0x83,0xF3,0x7F,0x0F,0x03,0x03,0x03,
0x06,0x06,0x06,0x07,0x07,0x06,0x06,0x06,0x00,0x00,

// J (74): w=12, h=11
0x2B,0x27,
0x00,0xC0,0xC0,0x00,0x00,0x03,0x83,0xF3,0x7F,0x0F,
0x03,0x03,
0x03,0x07,0x06,0x06,0x06,0x06,0x03,0x01,0x00,0x00,
0x00,0x00,

// K (75): w=12, h=11
0x2B,0x27,
0x00,0x80,0xF3,0x7F,0x6F,0xE3,0xF0,0x9B,0x0F,0x07,
0x03,0x03,
0x06,0x07,0x07,0x06,0x06,0x00,0x01,0x07,0x07,0x06,
0x06,0x00,

// L (76): w=11, h=11
0x2A,0x28,
0x00,0x00,0x83,0xF3,0x7F,0x0F,0x03,0x03,0x00,0xC0,
0xC0,
0x06,0x06,0x07,0x07,0x06,0x06,0x06,0x06,0x07,0x03,
0x00,

// M (77): w=13, h=11
0x2C,0x26,
0x00,0x80,0xFB,0x7F,0x1F,0xF0,0xE0,0x70,0x98,0xFE,
0x7F,0x03,0x03,
0x06,0x07,0x07,0x06,0x06,0x00,0x06,0x06,0x07,0x07,
0x06,0x00,0x00,

// N (78): w=12, h=11
0x2B,0x27,
0x00,0x80,0xF3,0x7F,0x0F,0x7C,0xE0,0x83,0xF3,0x7F,
0x0F,0x03,
0x06,0x07,0x07,0x06,0x06,0x00,0x07,0x07,0x07,0x00,
0x00,0x00,

// O (79): w=10, h=11
0x29,0x2E,
0xF0,0xFC,0x0E,0x06,0x03,0x03,0x03,0x87,0xFE,0x7C,
0x01,0x03,0x07,0x06,0x06,0x06,0x03,0x03,0x01,0x00,

// P (80): w=11, h=11
0x2A,0x28,
0x00,0x80,0xF3,0x7F,0x6F,0x63,0x63,0x63,0x73,0x3F,
0x1E,
0x06,0x07,0x07,0x06,0x06,0x06,0x00,0x00,0x00,0x00,
0x00,

// Q (81): w=10, h=13
0x29,0x2E,
0xF0,0xFC,0x0E,0x06,0x03,0x03,0x03,0x87,0xFE,0x7C,
0x19,0x1B,0x0F,0x0E,0x1E,0x1E,0x1B,0x0B,0x05,0x00,

// R (82): w=12, h=11
0x2B,0x27,
0x00,0x80,0xF3,0x7F,0x6F,0x63,0xE3,0xE3,0xB3,0x3F,
0x1E,0x00,
0x06,0x07,0x07,0x06,0x06,0x06,0x00,0x01,0x07,0x07,
0x06,0x06,

// S (83): w=10, h=11
0x29,0x2E,
0x00,0x8C,0x9E,0x3E,0x33,0x73,0x63,0xEE,0xCF,0x03,
0x06,0x07,0x03,0x06,0x06,0x06,0x07,0x03,0x01,0x00,

// T (84): w=11, h=11
0x2A,0x2D,
0x18,0x1F,0x07,0x83,0xF3,0x7F,0x0F,0x03,0x1B,0x1F,
0x07,
0x06,0x06,0x06,0x07,0x07,0x06,0x06,0x06,0x00,0x00,
0x00,

// U (85): w=11, h=11
0x2A,0x2D,
0xC0,0xFB,0x3F,0x07,0x03,0x03,0x80,0xF3,0x7F,0x0F,
0x03,
0x01,0x03,0x07,0x06,0x06,0x07,0x03,0x01,0x00,0x00,
0x00,

// V (86): w=12, h=11
0x2B,0x2C,
0x03,0x0F,0xFF,0xF3,0x03,0x80,0xC0,0x73,0x3B,0x0F,
0x07,0x03,
0x00,0x00,0x00,0x07,0x07,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,

// W (87): w=12, h=11
0x2B,0x2C,
0xE3,0xFF,0x9F,0xC3,0x73,0xF8,0xF8,0x83,0xF3,0x7F,
0x0F,0x03,
0x07,0x07,0x01,0x00,0x00,0x01,0x07,0x07,0x01,0x00,
0x00,0x00,

// X (88): w=12, h=11
0x2B,0x27,
0x00,0x00,0x83,0xCF,0x7F,0x73,0xF0,0x98,0x0F,0x07,
0x03,0x03,
0x06,0x07,0x07,0x06,0x00,0x00,0x06,0x07,0x07,0x06,
0x00,0x00,

// Y (89): w=10, h=11
0x29,0x33,
0x03,0x0F,0xBF,0xF3,0x60,0x30,0x1B,0x0F,0x07,0x03,
0x06,0x06,0x07,0x07,0x06,0x06,0x00,0x00,0x00,0x00,

// Z (90): w=10, h=11
0x29,0x2E,
0x00,0x0C,0x8F,0xC3,0x63,0x33,0x1B,0x8F,0x87,0x03,
0x06,0x07,0x07,0x06,0x06,0x06,0x06,0x07,0x01,0x00,

// bracketleft (91): w=8, h=15
0x27,0x1A,
0x00,0x00,0xE0,0xFC,0x1F,0x03,0x03,0x03,
0x78,0x7F,0x67,0x60,0x00,0x00,0x00,0x00,

// backslash (92): w=5, h=15
0xA4,0x00,0x87,
0x07,0x7F,0xF8,0x80,0x00,
0x00,0x00,0x07,0xFF,0xF8,

// bracketright (93): w=8, h=15
0x27,0x10,
0x00,0x00,0x00,0x03,0x83,0xF3,0x7F,0x0F,
0x60,0x60,0x60,0x7C,0x1F,0x03,0x00,0x00,

// asciicircum (94): w=8, h=7
0x07,0x15,
0x60,0x70,0x18,0x0C,0x06,0x07,0x7F,0x78,

// underscore (95): w=11, h=2
0x8A,0x0E,0x36,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,

// grave (96): w=4, h=3
0x83,0x00,0x88,
0x01,0x03,0x06,0x04,

// a (97): w=10, h=9
0x29,0x69,
0xE0,0xE0,0xB6,0xB6,0xB3,0xB3,0xB3,0xF3,0xFF,0x9E,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// b (98): w=11, h=12
0x2A,0x08,
0x00,0x80,0xFB,0x7F,0x37,0x18,0x18,0x18,0x38,0xF0,
0xE0,
0x0C,0x0F,0x0F,0x06,0x0C,0x0C,0x0C,0x0C,0x06,0x07,
0x01,

// c (99): w=10, h=9
0x29,0x6E,
0x70,0xFC,0xCE,0x86,0x83,0x83,0x83,0xCE,0xCF,0x03,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// d (100): w=11, h=12
0x2A,0x08,
0x80,0xE0,0x70,0x30,0x18,0x18,0x18,0x38,0xF3,0xFF,
0x0F,
0x03,0x07,0x0E,0x0C,0x0C,0x0C,0x06,0x0F,0x0F,0x0C,
0x00,

// e (101): w=10, h=9
0x29,0x69,
0x70,0xFC,0xBE,0xB6,0xB3,0xB3,0xB3,0xB3,0xBE,0x3C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// f (102): w=11, h=12
0x2A,0x0D,
0x00,0x18,0x98,0xF8,0xFE,0x1E,0x1B,0x1B,0x1B,0x03,
0x03,
0x0C,0x0C,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x00,0x00,
0x00,

// g (103): w=12, h=13
0x2B,0x67,
0x70,0xFC,0xCE,0x86,0x83,0x83,0xC3,0xE7,0xFE,0x3F,
0x03,0x01,
0x00,0x18,0x19,0x19,0x19,0x1D,0x0E,0x07,0x01,0x00,
0x00,0x00,

// h (104): w=10, h=12
0x29,0x09,
0x00,0x80,0xFB,0x7F,0x37,0x18,0x18,0x18,0xF8,0xF0,
0x0C,0x0F,0x0F,0x0C,0x00,0x00,0x0C,0x0F,0x0F,0x0C,

// i (105): w=8, h=12
0x27,0x10,
0x00,0x00,0x18,0x18,0xF8,0xFB,0x03,0x00,
0x0C,0x0C,0x0C,0x0F,0x0F,0x0C,0x0C,0x0C,

// j (106): w=10, h=16
0x29,0x09,
0x00,0x00,0x18,0x18,0x18,0x18,0x18,0xFB,0xFB,0x18,
0xC0,0xC0,0xC0,0xC0,0xC0,0x70,0x3F,0x0F,0x00,0x00,

// k (107): w=11, h=12
0x2A,0x08,
0x00,0x00,0xF3,0xFF,0xCF,0xE0,0x70,0x38,0x18,0x18,
0x18,
0x0C,0x0F,0x0F,0x00,0x01,0x03,0x0F,0x0E,0x0C,0x0C,
0x00,

// l (108): w=8, h=12
0x27,0x10,
0x00,0x00,0x00,0x83,0xF3,0x7F,0x0F,0x00,
0x0C,0x0C,0x0C,0x0F,0x0F,0x0C,0x0C,0x0C,

// m (109): w=12, h=9
0x2B,0x62,
0x80,0xE3,0xFF,0x9F,0x07,0xE2,0xFF,0x9F,0x06,0xE3,
0xFF,0x9E,
0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x01,
0x01,0x01,

// n (110): w=10, h=9
0x29,0x69,
0x80,0xE3,0xFF,0x9F,0x07,0x02,0x83,0xE3,0xFF,0x9E,
0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,

// o (111): w=11, h=9
0x2A,0x68,
0x70,0xFC,0xCE,0x86,0x83,0x83,0x83,0xC3,0xE7,0x7E,
0x1C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,

// p (112): w=12, h=13
0x2B,0x62,
0x00,0x00,0xE3,0xFF,0xDF,0x87,0x82,0x83,0x83,0xC7,
0xFE,0x3C,
0x18,0x1E,0x1F,0x19,0x18,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,

// q (113): w=12, h=13
0x2B,0x67,
0x70,0xFC,0xCE,0x86,0x83,0x83,0xC3,0xE7,0xFE,0x1F,
0x03,0x03,
0x00,0x00,0x01,0x01,0x19,0x19,0x1E,0x1F,0x19,0x00,
0x00,0x00,

// r (114): w=11, h=9
0x2A,0x68,
0x80,0x83,0xE3,0xFF,0x9F,0x87,0x82,0x83,0x03,0x07,
0x06,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,

// s (115): w=11, h=9
0x2A,0x68,
0x80,0xE0,0xEC,0x9E,0x9B,0xBB,0xB3,0xF3,0xE6,0x07,
0x03,
0x01,0x01,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,

// t (116): w=9, h=12
0x28,0x0F,
0x18,0x98,0xF8,0x7F,0x1F,0x18,0x18,0x18,0x18,
0x00,0x07,0x0F,0x0C,0x0C,0x0C,0x0C,0x07,0x03,

// u (117): w=9, h=9
0x28,0x6F,
0xF3,0xFF,0x8F,0x80,0x80,0xC0,0xF3,0xFF,0x8F,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// v (118): w=11, h=9
0x2A,0x6D,
0x03,0x0F,0x7F,0xF3,0xC0,0xE0,0x70,0x1B,0x0F,0x07,
0x03,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,

// w (119): w=12, h=9
0x2B,0x67,
0x03,0x1F,0xFF,0xE3,0x73,0x1C,0x7C,0xC0,0xF3,0x7F,
0x0F,0x03,
0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,
0x00,0x00,

// x (120): w=13, h=9
0x2C,0x61,
0x80,0x83,0xC3,0xC7,0xEF,0x3B,0xB0,0xF8,0xCF,0x87,
0x87,0x03,0x03,
0x01,0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,

// y (121): w=12, h=13
0x2B,0x62,
0x00,0x03,0x07,0x0F,0x3B,0xF3,0xE0,0x70,0x3B,0x0F,
0x07,0x03,
0x18,0x18,0x1C,0x1E,0x1B,0x19,0x00,0x00,0x00,0x00,
0x00,0x00,

// z (122): w=9, h=9
0x28,0x6F,
0x80,0xC6,0xE7,0xF3,0xBB,0x9F,0x8F,0xC7,0xC3,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// braceleft (123): w=7, h=15
0x26,0x1B,
0x40,0xC0,0xB8,0x3E,0x07,0x01,0x01,
0x38,0x7F,0x47,0x40,0x00,0x00,0x00,

// bar (124): w=7, h=16
0x26,0x1B,
0x00,0x00,0x00,0xC0,0xF8,0x3F,0x07,
0x80,0xF0,0x7E,0x0F,0x01,0x00,0x00,

// braceright (125): w=7, h=15
0x26,0x11,
0x00,0x00,0x00,0x00,0xB1,0xFF,0x4E,
0x40,0x40,0x70,0x3F,0x0F,0x00,0x00,

// asciitilde (126): w=8, h=3
0x07,0xB5,
0x06,0x07,0x03,0x07,0x06,0x06,0x07,0x03

};
// 1949 bytes
// 2139 bytes with FAST_FONT_INDEX
