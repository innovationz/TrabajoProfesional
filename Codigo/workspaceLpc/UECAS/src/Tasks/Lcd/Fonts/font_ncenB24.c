#include "fonts.h"			// for FAST_FONT_INDEX

// ncenB24 = "New Century Schoolbook Bold"

const unsigned char font_ncenB24[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xDE,0x00,
0xF6,0x00,
0x38,0x01,
0x7E,0x01,
0xCE,0x01,
0x30,0x02,
0x3A,0x02,
0x60,0x02,
0x86,0x02,
0xA0,0x02,
0xC3,0x02,
0xD2,0x02,
0xDD,0x02,
0xE6,0x02,
0x10,0x03,
0x42,0x03,
0x6B,0x03,
0xA0,0x03,
0xD2,0x03,
0x07,0x04,
0x39,0x04,
0x6E,0x04,
0xA0,0x04,
0xD5,0x04,
0x0A,0x05,
0x19,0x05,
0x2E,0x05,
0x60,0x05,
0x83,0x05,
0xB5,0x05,
0xEF,0x05,
0x4D,0x06,
0xB3,0x06,
0x11,0x07,
0x6B,0x07,
0xCD,0x07,
0x23,0x08,
0x79,0x08,
0xDF,0x08,
0x49,0x09,
0x7B,0x09,
0xCD,0x09,
0x33,0x0A,
0x89,0x0A,
0x07,0x0B,
0x75,0x0B,
0xD7,0x0B,
0x31,0x0C,
0x97,0x0C,
0xFD,0x0C,
0x4B,0x0D,
0xA1,0x0D,
0x0B,0x0E,
0x71,0x0E,
0xF3,0x0E,
0x55,0x0F,
0xB7,0x0F,
0x05,0x10,
0x27,0x10,
0x69,0x10,
0x8C,0x10,
0xAE,0x10,
0xC1,0x10,
0xCA,0x10,
0xF1,0x10,
0x3F,0x11,
0x60,0x11,
0xB2,0x11,
0xD5,0x11,
0x13,0x12,
0x65,0x12,
0xB7,0x12,
0xDD,0x12,
0x10,0x13,
0x62,0x13,
0x8C,0x13,
0xC9,0x13,
0xF4,0x13,
0x19,0x14,
0x55,0x14,
0x94,0x14,
0xB5,0x14,
0xD4,0x14,
0xFA,0x14,
0x25,0x15,
0x4E,0x15,
0x87,0x15,
0xB0,0x15,
0xEC,0x15,
0x0B,0x16,
0x2D,0x16,
0x40,0x16,
0x63,0x16,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x18,0x5C,
0x00,

// exclam (33): w=6, h=25
0x65,0x16,
0x7E,0xFF,0xFF,0xFF,0xFF,0x7E,
0x00,0x07,0xFF,0xFF,0x07,0x00,
0xF0,0xF8,0xF9,0xF9,0xF8,0xF0,
0x00,0x01,0x01,0x01,0x01,0x00,

// quotedbl (34): w=11, h=11
0x2A,0x08,
0x7E,0xFF,0xFF,0x7E,0x00,0x00,0x00,0x7E,0xFF,0xFF,
0x7E,
0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x00,

// numbersign (35): w=16, h=25
0x6F,0x30,
0x00,0x80,0x80,0x80,0xF0,0xFF,0xFF,0x8F,0x80,0x80,
0xF0,0xFF,0xFF,0x8F,0x80,0x80,
0xC0,0xC3,0xC3,0xF3,0xFF,0xFF,0xC7,0xC3,0xC3,0xF3,
0xFF,0xFF,0xC7,0xC3,0xC3,0x03,
0x01,0x01,0xF9,0xFF,0xFF,0x07,0x01,0x01,0xF9,0xFF,
0xFF,0x07,0x01,0x01,0x01,0x00,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=17, h=29
0x70,0x0F,
0x80,0xE0,0xF0,0xF8,0x18,0x0C,0x0C,0xFF,0xFF,0x0C,
0x0C,0xDC,0xF8,0xF8,0xF0,0xE0,0x00,
0x07,0x1F,0x3F,0x3F,0x7E,0x7E,0x7C,0xFF,0xFF,0xF8,
0xF8,0xF8,0xF1,0xF1,0xE1,0xC0,0x80,
0x3C,0x7E,0xFE,0xFE,0xDC,0x80,0x80,0xFF,0xFF,0x80,
0x81,0xC1,0xE3,0xFF,0x7F,0x3F,0x0F,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x3F,0x3F,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// percent (37): w=26, h=24
0x59,0x29,
0x00,0xC0,0xF0,0xF8,0xFC,0x3E,0x0E,0x06,0x02,0x06,
0x0C,0xF8,0x18,0x10,0x10,0x98,0xE8,0x3C,0x1E,0x07,
0x01,0x00,0x00,0x00,0x00,0x00,
0x0F,0x1F,0x3F,0x3F,0x30,0x20,0x30,0x30,0x18,0x0C,
0x07,0xC1,0x70,0x38,0x0E,0x83,0xC0,0xE0,0xF0,0xF8,
0x38,0x18,0x08,0x18,0x30,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x78,0x1C,
0x07,0x01,0x00,0x00,0x3C,0x7F,0xFF,0xFF,0xC7,0x80,
0x80,0xC0,0x60,0x38,0x1E,0x07,

// ampersand (38): w=24, h=25
0x77,0x16,
0x00,0x00,0x00,0x00,0x00,0xF8,0xFC,0xFE,0xFE,0xC7,
0x03,0x03,0x03,0xCF,0xFE,0xFE,0x78,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0xC0,0xE0,0xE0,0xF0,0x3B,0x1F,0x3F,0xFF,0xFF,
0xFF,0xFE,0xF7,0xC3,0x81,0x19,0x18,0xB8,0xF8,0xF8,
0x78,0x38,0x18,0x18,
0x3F,0x7F,0xFF,0xFF,0xFF,0xFC,0xF0,0xE0,0xC0,0xC1,
0xC7,0xCF,0x7F,0x7F,0xFF,0xFE,0xFE,0xFF,0xF3,0xE0,
0xC0,0xC0,0xF0,0x38,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,

// quotesingle (39): w=4, h=11
0x23,0x16,
0x7E,0xFF,0xFF,0x7E,
0x00,0x07,0x07,0x00,

// parenleft (40): w=9, h=27
0x68,0x36,
0x00,0x80,0xE0,0xF8,0xFC,0x1E,0x07,0x03,0x01,
0xFE,0xFF,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,
0x03,0x0F,0x3F,0xFF,0xF8,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x04,

// parenright (41): w=9, h=27
0x68,0x31,
0x01,0x01,0x07,0x1E,0xFC,0xF8,0xE0,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFE,
0x00,0x00,0x00,0xC0,0xFC,0xFF,0x3F,0x0F,0x03,
0x04,0x06,0x03,0x03,0x01,0x00,0x00,0x00,0x00,

// asterisk (42): w=12, h=15
0x2B,0x17,
0x38,0x38,0x78,0x60,0xC6,0xFF,0xFF,0xC0,0x60,0x78,
0x38,0x38,
0x0E,0x0F,0x0F,0x03,0x01,0x7F,0x7F,0x31,0x03,0x0F,
0x0F,0x0E,

// plus (43): w=16, h=16
0xAF,0x08,0x67,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
0x03,0x03,0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,

// comma (44): w=6, h=11
0xA5,0x13,0x66,
0x1E,0x3F,0x3F,0xFF,0xFF,0x7C,
0x04,0x06,0x07,0x03,0x00,0x00,

// hyphen (45): w=8, h=4
0x87,0x0F,0x57,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,

// period (46): w=6, h=6
0x85,0x13,0x57,
0x1E,0x3F,0x3F,0x3F,0x3F,0x1E,

// slash (47): w=10, h=25
0x69,0x02,
0x00,0x00,0x00,0x00,0x00,0x80,0xF0,0xFE,0x3F,0x07,
0x00,0x00,0x00,0xE0,0xFC,0x7F,0x0F,0x01,0x00,0x00,
0xC0,0xF8,0xFF,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=16, h=24
0x4F,0x30,
0xC0,0xF0,0xF8,0xFC,0xFE,0x1E,0x07,0x03,0x03,0x07,
0x1E,0xFE,0xFC,0xF8,0xF0,0xC0,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0x01,0x0F,0x1F,0x3F,0x7F,0x78,0xE0,0xC0,0xC0,0xE0,
0x78,0x7F,0x3F,0x1F,0x0F,0x01,

// one (49): w=13, h=24
0x4C,0x3D,
0x0C,0x0C,0x0C,0x0C,0xFC,0xFE,0xFE,0xFF,0xFF,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,
0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,
0xC0,0xC0,0xC0,

// two (50): w=17, h=24
0x50,0x2F,
0xF8,0xFC,0xFE,0xFE,0xF7,0xE3,0x03,0x03,0x03,0x07,
0x0F,0xFF,0xFE,0xFE,0xFC,0xF8,0x00,
0x00,0x01,0x03,0x03,0x03,0x01,0xC0,0xE0,0xF8,0x7C,
0x3F,0x1F,0x0F,0x07,0x03,0x81,0x80,
0xC0,0xF0,0xF8,0xFC,0xFE,0xFF,0xFB,0xF9,0xF8,0xF8,
0xF8,0xF8,0xF8,0xF8,0xFC,0xFF,0x0F,

// three (51): w=16, h=24
0x4F,0x30,
0x78,0xFC,0xFE,0xFE,0xFF,0x73,0x03,0x03,0x03,0x07,
0xFF,0xFE,0xFE,0xFC,0xF8,0x00,
0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x1C,0x3F,
0xF7,0xF3,0xF1,0xE1,0xE0,0x80,
0x1E,0x3F,0x7F,0x7F,0x7F,0xCE,0xC0,0xC0,0xC0,0xE0,
0xF8,0x7F,0x7F,0x3F,0x3F,0x0F,

// four (52): w=17, h=24
0x50,0x2A,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xF0,
0xF8,0xFC,0xFE,0xFF,0x00,0x00,0x00,
0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x03,0x01,0x00,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0xC3,0xC3,0xC3,0xFF,
0xFF,0xFF,0xFF,0xFF,0xC3,0xC3,0xC3,

// five (53): w=16, h=24
0x4F,0x30,
0x00,0x00,0xFE,0xFF,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
0x1F,0x1F,0x0F,0x0F,0x07,0x01,
0x00,0x00,0x3F,0x1F,0x0C,0x06,0x06,0x06,0x06,0x0E,
0x3E,0xFC,0xFC,0xF8,0xF0,0xC0,
0x0C,0x3E,0x7F,0x7F,0xDF,0xCE,0xC0,0xC0,0xE0,0xE0,
0x78,0x7F,0x3F,0x3F,0x1F,0x07,

// six (54): w=17, h=24
0x50,0x2F,
0x80,0xE0,0xF8,0xFC,0xFE,0x3E,0x0F,0x07,0x03,0x03,
0x3B,0x7F,0x7E,0x7E,0x3C,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x38,0x18,0x1C,0x0C,0x1C,
0x1C,0x7C,0xFC,0xF8,0xF8,0xF0,0xC0,
0x07,0x1F,0x3F,0x7F,0x7F,0xF8,0xE0,0xC0,0xC0,0xC0,
0xE0,0xF8,0x7F,0x7F,0x3F,0x1F,0x07,

// seven (55): w=16, h=24
0x4F,0x35,
0xFF,0xFF,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
0x9F,0xFF,0xFF,0x1F,0x07,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0xFC,0xFF,
0x7F,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7C,0xFF,0xFF,0xFF,0xFF,0x7F,
0x00,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=17, h=24
0x50,0x2F,
0x00,0xF0,0xFC,0xFC,0xFE,0x87,0x03,0x03,0x03,0x03,
0x07,0x0F,0xFE,0xFE,0xFC,0xF8,0x00,
0x80,0xC3,0xE7,0xEF,0xFF,0x3F,0x3F,0x3E,0x3E,0x7E,
0x7E,0xFF,0xFB,0xFB,0xF1,0xE0,0x80,
0x1F,0x3F,0x7F,0x7F,0x70,0xE0,0xC0,0xC0,0xC0,0xC0,
0x60,0x70,0x3F,0x3F,0x1F,0x0F,0x03,

// nine (57): w=17, h=24
0x50,0x2F,
0xF0,0xF8,0xFC,0xFE,0xFE,0x1E,0x07,0x03,0x03,0x07,
0x0E,0x3E,0xFE,0xFC,0xF8,0xF0,0xC0,
0x07,0x0F,0x1F,0x3F,0x3F,0x3E,0x38,0x38,0x30,0x18,
0x0C,0x06,0xFF,0xFF,0xFF,0xFF,0xFF,
0x1E,0x3F,0x7F,0x7F,0xDE,0xC4,0xC0,0xC0,0xE0,0xE0,
0x70,0x7E,0x3F,0x3F,0x1F,0x07,0x00,

// colon (58): w=6, h=16
0xA5,0x09,0x66,
0x1E,0x3F,0x3F,0x3F,0x3F,0x1E,
0x78,0xFC,0xFC,0xFC,0xFC,0x78,

// semicolon (59): w=6, h=21
0xC5,0x09,0x66,
0x1E,0x3F,0x3F,0x3F,0x3F,0x1E,
0x78,0xFC,0xFC,0xFC,0xFC,0xF0,
0x10,0x18,0x1C,0x0F,0x03,0x01,

// less (60): w=16, h=18
0x4F,0xF6,
0x80,0xC0,0xC0,0xE0,0xE0,0xF0,0xF0,0x78,0x78,0x3C,
0x3C,0x3C,0x1E,0x1E,0x0F,0x0F,
0x07,0x07,0x0F,0x0F,0x1F,0x1E,0x3C,0x3C,0x3C,0x78,
0x78,0xF0,0xF0,0xE0,0xE0,0xC0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x03,

// equal (61): w=16, h=10
0xAF,0x0C,0x67,
0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,
0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,

// greater (62): w=16, h=18
0x4F,0xF6,
0x0F,0x0F,0x1E,0x1E,0x3C,0x3C,0x3C,0x78,0x78,0xF0,
0xF0,0xE0,0xE0,0xC0,0xC0,0x80,
0xC0,0xE0,0xE0,0xF0,0xF0,0x78,0x78,0x3C,0x3C,0x3C,
0x1E,0x1F,0x0F,0x0F,0x07,0x07,
0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=14, h=25
0x6D,0x0F,
0x78,0xFC,0xFE,0xFE,0x73,0x03,0x03,0x07,0xFF,0xFF,
0xFE,0xFE,0xFC,0xF0,
0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0x7E,0x1F,0x0F,
0x0F,0x07,0x03,0x00,
0x00,0x00,0x00,0xF0,0xF8,0xF9,0xF9,0xF8,0xF0,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,

// at (64): w=23, h=25
0x76,0x0A,
0x00,0x00,0xC0,0xF0,0x78,0x3C,0x1C,0x0E,0x86,0x87,
0xC7,0xC3,0xC3,0xC3,0x87,0x87,0x86,0x8E,0x8C,0x1C,
0x38,0xF0,0xC0,
0xF8,0xFF,0xFF,0x03,0x00,0xF0,0xFC,0xFF,0x3F,0x07,
0x03,0x00,0x80,0xF0,0xFF,0xFF,0x7F,0x0F,0x01,0x80,
0xE0,0xFF,0x1F,
0x03,0x07,0x1F,0x3C,0x70,0xE1,0xC7,0xC7,0x8C,0x8C,
0x8C,0x86,0x83,0x87,0x8F,0xCF,0xCC,0xEE,0xE6,0x73,
0x39,0x18,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// A (65): w=25, h=25
0x78,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,
0xF8,0xFF,0xFF,0xFF,0xFC,0xF0,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xFC,0x3F,0x07,
0x01,0x01,0x0F,0x7F,0xFF,0xFF,0xFF,0xFE,0xF0,0xC0,
0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0xC0,0xF0,0xFC,0xFF,0xC7,0x83,0x83,0x03,
0x03,0x03,0x03,0x03,0x83,0x8F,0xFF,0xFF,0xFF,0xFF,
0xFE,0xF8,0xE0,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// B (66): w=23, h=25
0x76,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x03,0x03,0x07,0x1F,0xFF,0xFE,0xFE,0xFC,
0xF8,0xE0,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,
0x30,0x30,0x30,0x38,0x78,0x7E,0xEF,0xEF,0xCF,0xC7,
0x83,0x80,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x80,0xC0,0xC0,0xFB,0xFF,0xFF,0xFF,
0x7F,0x3F,0x0E,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,

// C (67): w=22, h=25
0x75,0x0F,
0x00,0xC0,0xE0,0xF8,0xF8,0xFC,0xFE,0x1E,0x0E,0x07,
0x03,0x03,0x03,0x03,0x03,0x06,0x0E,0x1C,0x7E,0xFF,
0xFF,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x81,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x03,0x00,
0x03,0x0F,0x1F,0x3F,0x7F,0xFF,0xFF,0xF0,0xE0,0xC0,
0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,0xE0,0x78,0x3E,
0x0F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,

// D (68): w=24, h=25
0x77,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x03,0x03,0x07,0x0F,0x1E,0xFE,0xFE,0xFC,
0xF8,0xF0,0xE0,0x80,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x80,0xC0,0xE0,0xF0,0xFF,0xFF,0x7F,
0x3F,0x1F,0x0F,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// E (69): w=21, h=25
0x74,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x03,0x83,0x83,0x07,0x0F,0x1F,0x7F,0xFF,
0xFF,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,
0x30,0x78,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x00,0x01,
0x01,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x87,0x87,0xC0,0xC0,0xE0,0xF8,0xFF,
0xFF,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,

// F (70): w=21, h=25
0x74,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,
0x03,0x03,0x03,0x03,0x83,0x87,0x0F,0x1F,0x3F,0xFF,
0xFF,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,
0x30,0x38,0x78,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x01,
0x03,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x00,0x07,0x07,0x00,0x00,0x00,0x00,
0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// G (71): w=25, h=25
0x78,0x0E,
0x00,0xC0,0xE0,0xF0,0xF8,0xFC,0xFE,0x3E,0x0E,0x07,
0x03,0x03,0x03,0x03,0x03,0x06,0x06,0x0E,0x1C,0x7E,
0xFF,0xFF,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
0xC1,0xC3,0xC0,0xC0,0xC0,
0x03,0x0F,0x1F,0x3F,0x7F,0xFF,0xFE,0xF0,0xC0,0x80,
0x80,0x80,0x80,0x80,0x80,0xC0,0x70,0x7F,0x3F,0xFF,
0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,

// H (72): w=26, h=25
0x79,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x00,0x00,0x03,0x03,0x03,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x00,0x00,0x80,0x80,0x80,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,

// I (73): w=12, h=25
0x6B,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,

// J (74): w=20, h=25
0x73,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,
0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x00,0xC0,0xC0,0xE0,0xE0,0xC0,0xC0,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x0F,0x3F,0xFF,0xCF,0xCF,0x8F,0x87,0x80,0xC0,0xC0,
0xF0,0xFF,0xFF,0x7F,0x7F,0x1F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// K (75): w=25, h=25
0x78,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x00,0x00,0x83,0xE3,0xF3,0x7F,0x3F,0x1F,
0x0F,0x07,0x07,0x03,0x03,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0x78,0x1C,0x7E,0xFF,0xFF,0xFF,0xF8,0xF0,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x00,0x01,0x83,0x8F,0xFF,0xFF,0xFF,0xFF,
0xFE,0xF8,0xE0,0xC0,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// L (76): w=21, h=25
0x74,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,0xE0,0xF8,0xFF,
0xFF,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,

// M (77): w=31, h=25
0x7E,0x09,
0x00,0x03,0x03,0x03,0xFF,0xFF,0x0F,0x7F,0xFF,0xFF,
0xFF,0xFE,0xF0,0x80,0x00,0x00,0x00,0x00,0x80,0xF0,
0xFE,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x03,0x1F,
0xFF,0xFF,0xFF,0xFF,0xF8,0xC0,0xE0,0xFC,0x3F,0x07,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x80,0x80,0x80,0xC0,0xFF,0xFF,0xC0,0x80,0x80,0x80,
0x00,0x07,0x7F,0xFF,0xFF,0x7F,0x0F,0x01,0x00,0x80,
0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// N (78): w=27, h=25
0x7A,0x08,
0x03,0x03,0x07,0x07,0xFF,0xFF,0x7F,0xFF,0xFF,0xFE,
0xFC,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x03,0x03,0x03,
0x07,0xFF,0xFF,0x07,0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x03,0x07,
0x0F,0x1F,0x7F,0xFF,0xFF,0xFE,0xFC,0xF8,0xF0,0xC0,
0x80,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x80,0x80,0x80,0xC0,0xFF,0xFF,0xC0,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x1F,0x3F,0x7F,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x00,0x00,0x00,0x00,

// O (79): w=24, h=25
0x77,0x0F,
0x00,0xC0,0xF0,0xF8,0xFC,0xFC,0xFE,0x1E,0x0E,0x07,
0x03,0x03,0x03,0x03,0x03,0x06,0x1E,0xFE,0xFC,0xFC,
0xF8,0xF0,0xC0,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,
0x01,0x07,0x1F,0x3F,0x7F,0x7F,0xFE,0xF0,0xE0,0xC0,
0x80,0x80,0x80,0x80,0x80,0xC0,0xF0,0xFE,0x7F,0x7F,
0x3F,0x1F,0x07,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// P (80): w=22, h=25
0x75,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x03,0x03,0x07,0x0F,0xFF,0xFE,0xFE,0xFC,
0xF8,0xF0,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,
0x30,0x30,0x30,0x30,0x38,0x3C,0x1F,0x1F,0x1F,0x0F,
0x07,0x03,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// Q (81): w=25, h=31
0x78,0x0E,
0x00,0xC0,0xF0,0xF8,0xFC,0xFC,0xFE,0x1E,0x0E,0x07,
0x03,0x03,0x03,0x03,0x03,0x06,0x1E,0xFE,0xFC,0xFC,
0xF8,0xF0,0xC0,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,
0x01,0x07,0x1F,0x3F,0x7F,0x7F,0xFE,0xFE,0xE7,0xC1,
0x81,0x81,0x81,0x83,0xFF,0xFE,0xFC,0xFE,0xFF,0x7F,
0x3F,0x1F,0x07,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,0x01,0x01,0x07,0x1F,0x3F,0x3F,0x7F,0x78,
0x70,0x70,0x38,0x1E,0x0E,

// R (82): w=25, h=25
0x78,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x03,0x03,0x07,0x0F,0xFF,0xFE,0xFE,0xFE,
0xFC,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,
0x30,0x30,0x30,0x78,0xF8,0xFE,0xEF,0xEF,0xC7,0x07,
0x03,0x01,0x00,0x00,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0x80,0x00,0x00,0x0F,0x7F,0xFF,0xFF,0xFF,0xFF,
0xF8,0xC0,0xE0,0x78,0x18,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,

// S (83): w=19, h=25
0x72,0x0F,
0xE0,0xF8,0xFC,0xFE,0x8E,0x06,0x03,0x03,0x03,0x03,
0x03,0x07,0x06,0x0E,0x1C,0x3E,0xFF,0xFF,0x00,
0x03,0x8F,0x1F,0x1F,0x3F,0x7F,0x7F,0x7F,0x7E,0xFE,
0xFE,0xFE,0xFC,0xFC,0xFC,0xF8,0xF1,0xE1,0xC0,
0x00,0xFF,0xFF,0x7C,0x78,0xE0,0xE0,0xC0,0x80,0x80,
0x80,0x80,0x80,0xC1,0xE3,0xFF,0x7F,0x3F,0x0F,
0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// T (84): w=21, h=25
0x74,0x0F,
0xFF,0xFF,0x1F,0x07,0x03,0x03,0x03,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x07,0x1F,0xFF,
0xFF,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x80,0x80,0x80,0x80,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,

// U (85): w=26, h=25
0x79,0x0F,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x07,
0xFF,0xFF,0x07,0x03,0x03,0x03,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0F,0x3F,0x7F,0xFF,0xFF,0xFF,0xF0,
0xE0,0xC0,0xC0,0x80,0x80,0x80,0xC0,0xC0,0xE0,0x78,
0x3F,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// V (86): w=25, h=25
0x78,0x08,
0x03,0x03,0x07,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,
0x03,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0xC7,0xFF,
0x7F,0x1F,0x07,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0xFF,0xFF,0xFF,
0xFF,0xFC,0xE0,0x00,0x00,0xC0,0xF8,0x7F,0x0F,0x03,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,
0xFF,0xFF,0xFF,0xFF,0x7F,0x0F,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// W (87): w=32, h=25
0x7F,0x08,
0x03,0x03,0x0F,0x7F,0xFF,0xFF,0xFF,0xFF,0xF3,0x83,
0x00,0x03,0x03,0x0F,0x7F,0xFF,0xFF,0xFF,0xFF,0xE3,
0x03,0x00,0x00,0x03,0x03,0xE7,0xFF,0x7F,0x0F,0x07,0x03,0x03,
0x00,0x00,0x00,0x00,0x03,0x3F,0xFF,0xFF,0xFF,0xFF,
0xF8,0xC0,0xC0,0xF8,0x7F,0x0F,0x3F,0xFF,0xFF,0xFF,
0xFF,0xF0,0x80,0xE0,0xFE,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0F,0x7F,0xFF,
0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,0x01,0x1F,0xFF,
0xFF,0xFF,0x7F,0x0F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// X (88): w=24, h=25
0x77,0x08,
0x03,0x03,0x07,0x1F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFB,
0xE3,0x80,0x00,0x00,0x03,0x83,0xE7,0xFF,0x3F,0x1F,
0x0F,0x07,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x9F,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xC1,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x80,0x80,0xC0,0xE0,0xF0,0xF8,0xFE,0xCF,0x87,0x81,
0x80,0x01,0x87,0x8F,0xFF,0xFF,0xFF,0xFF,0xFE,0xF8,
0xE0,0xC0,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,

// Y (89): w=24, h=25
0x77,0x08,
0x03,0x03,0x07,0x1F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFB,
0xE3,0x83,0x00,0x00,0x00,0x03,0xC3,0xF7,0x7F,0x3F,
0x0F,0x07,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x1F,0xFF,
0xFF,0xFF,0xFE,0xF8,0xFC,0x1F,0x07,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,

// Z (90): w=19, h=25
0x72,0x0F,
0x00,0xFF,0xFF,0x3F,0x0F,0x07,0x07,0x03,0x03,0x83,
0xC3,0xF3,0xFF,0xFF,0xFF,0xFF,0x7F,0x1F,0x0F,
0x00,0x01,0x00,0x00,0x80,0xC0,0xF0,0xFC,0xFE,0xFF,
0xFF,0x7F,0x1F,0x0F,0x03,0x00,0x00,0x00,0x80,
0xC0,0xF0,0xF8,0xFE,0xFF,0xFF,0xFF,0xBF,0x8F,0x83,
0x81,0x80,0x80,0xC0,0xC0,0xE0,0xF8,0xFF,0xFF,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// bracketleft (91): w=8, h=29
0x67,0x1C,
0xFF,0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x1F,0x1F,0x1F,0x1F,0x18,0x18,0x18,0x18,

// backslash (92): w=16, h=25
0x6F,0x16,
0x03,0x0F,0x3F,0xFF,0xFE,0xF8,0xE0,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x0F,0x3F,0xFF,0xFE,0xF8,
0xE0,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,
0x3F,0xFF,0xFE,0xF8,0xE0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,

// bracketright (93): w=8, h=29
0xE7,0x00,0x59,
0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0x18,0x18,0x18,0x18,0x1F,0x1F,0x1F,0x1F,

// asciicircum (94): w=16, h=14
0x2F,0x16,
0x00,0x00,0x00,0xC0,0xF8,0xFE,0xFF,0x3F,0x3F,0xFF,
0xFE,0xF8,0xC0,0x00,0x00,0x00,
0x30,0x3C,0x3F,0x3F,0x1F,0x07,0x00,0x00,0x00,0x00,
0x07,0x1F,0x3F,0x3F,0x3C,0x30,

// underscore (95): w=16, h=3
0x8F,0x1B,0x45,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x07,

// grave (96): w=7, h=6
0x06,0x56,
0x06,0x0F,0x0F,0x1E,0x1C,0x38,0x30,

// a (97): w=18, h=16
0xB1,0x09,0x56,
0x00,0x1C,0x3E,0x3E,0x3F,0x1B,0x83,0x83,0x83,0x87,
0xFF,0xFF,0xFE,0xFE,0xFC,0x00,0x00,0x00,
0x38,0x7E,0xFE,0xFF,0xFF,0xFF,0xC3,0xC1,0xC1,0x60,
0x7F,0x7F,0xFF,0xFF,0xFF,0xE0,0xC0,0x60,

// b (98): w=19, h=25
0x72,0x0A,
0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x0C,
0x06,0x06,0x0E,0x1E,0xFE,0xFE,0xFC,0xF8,0xE0,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x7F,0xFF,0xC0,0x80,
0x80,0x80,0xC0,0xE0,0xFF,0xFF,0x7F,0x3F,0x0F,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// c (99): w=15, h=16
0xAE,0x09,0x56,
0xE0,0xF8,0xFC,0xFC,0xFE,0x1E,0x07,0x03,0x03,0x03,
0x1F,0x3F,0x3E,0x3E,0x1C,
0x0F,0x1F,0x3F,0x7F,0x7F,0xFC,0xF0,0xE0,0xC0,0xC0,
0xC0,0x60,0x60,0x38,0x1C,

// d (100): w=20, h=25
0x73,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x03,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0xC0,0xF0,0xF8,0xFC,0xFE,0x1E,0x0E,0x06,0x06,0x06,
0x0C,0x38,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x1F,0x7F,0xFF,0xFF,0xFF,0xE0,0x80,0x80,0x80,0xC0,
0xC0,0x70,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// e (101): w=16, h=16
0xAF,0x09,0x56,
0xE0,0xF8,0xFC,0xFC,0xFE,0x86,0x83,0x83,0x83,0x83,
0x87,0xFE,0xFE,0xFC,0xF8,0xE0,
0x0F,0x1F,0x3F,0x7F,0x7F,0xF9,0xE1,0xE1,0xC1,0xC1,
0xC1,0xC1,0x61,0x71,0x39,0x09,

// f (102): w=15, h=25
0x6E,0x06,
0x00,0x00,0x00,0xE0,0xF8,0xFC,0xFE,0xFE,0x07,0x03,
0x1B,0x3F,0x3E,0x3E,0x1C,
0x06,0x06,0x06,0xFF,0xFF,0xFF,0xFF,0xFF,0x06,0x06,
0x06,0x06,0x00,0x00,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,
0x80,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,

// g (103): w=20, h=25
0x73,0xED,
0x00,0xE0,0xF0,0xF8,0xF8,0xFC,0x1C,0x0C,0x04,0x0C,
0x1C,0xFC,0xFC,0xFC,0xF6,0xE7,0x0F,0x0F,0x0F,0x06,
0xC0,0xE3,0xE7,0xFF,0xFF,0xBF,0x9C,0x98,0x90,0x98,
0x9C,0x9F,0x9F,0x8F,0x0F,0x03,0x00,0x00,0x00,0x00,
0x71,0xF9,0xFB,0xFF,0xCF,0x8F,0x8F,0x8F,0x8F,0x8F,
0x8F,0x8F,0xCF,0xFF,0xFF,0x7F,0x3C,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// h (104): w=20, h=25
0x73,0x0F,
0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x78,0x1C,0x0C,
0x0E,0x0E,0x1E,0xFE,0xFE,0xFC,0xFC,0xF0,0x00,0x00,
0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x00,
0x00,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// i (105): w=9, h=25
0x68,0x15,
0x00,0x00,0x0E,0x1F,0x1F,0x1F,0x0E,0x00,0x00,
0x06,0x06,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,0x00,
0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// j (106): w=12, h=32
0xEB,0x00,0x18,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x1F,0x1F,
0x1F,0x0E,
0x00,0x00,0x00,0x00,0x00,0x06,0x06,0xFE,0xFE,0xFE,
0xFE,0xFE,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,
0x38,0x7C,0x7C,0xFC,0xF8,0xC0,0xE0,0x7F,0x7F,0x3F,
0x1F,0x07,

// k (107): w=20, h=25
0x73,0x0F,
0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x80,0xC0,
0xE6,0xE6,0xBE,0x3E,0x1E,0x0E,0x06,0x06,0x06,0x00,
0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0x83,0x07,
0x8F,0xBF,0xFF,0xFF,0xFE,0xF8,0xF0,0xE0,0xC0,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// l (108): w=10, h=25
0x69,0x0F,
0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// m (109): w=29, h=16
0xBC,0x09,0x56,
0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x0E,0x07,
0x07,0x0F,0xFF,0xFF,0xFF,0xFE,0xFC,0x1C,0x0E,0x07,
0x07,0x0F,0xFF,0xFF,0xFE,0xFE,0xF8,0x00,0x00,
0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0x00,
0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0x00,
0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,

// n (110): w=20, h=16
0xB3,0x09,0x56,
0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x0E,0x06,
0x07,0x07,0x0F,0xFF,0xFF,0xFE,0xFE,0xF8,0x00,0x00,
0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0x00,
0x00,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,

// o (111): w=17, h=16
0xB0,0x09,0x56,
0xE0,0xF8,0xFC,0xFC,0xFE,0x1E,0x07,0x03,0x03,0x03,
0x07,0x1E,0xFE,0xFC,0xFC,0xF8,0xE0,
0x07,0x1F,0x3F,0x3F,0x7F,0x78,0xE0,0xC0,0xC0,0xC0,
0xE0,0x78,0x7F,0x3F,0x3F,0x1F,0x07,

// p (112): w=19, h=23
0xD2,0x09,0x56,
0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x06,0x03,
0x03,0x03,0x07,0x1F,0xFF,0xFE,0xFE,0xFC,0xF0,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x78,0x60,0xC0,
0xC0,0xC0,0xE0,0xF8,0xFF,0x7F,0x3F,0x1F,0x07,
0x60,0x60,0x7F,0x7F,0x7F,0x7F,0x7F,0x60,0x60,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=20, h=23
0xD3,0x09,0x54,
0xE0,0xF8,0xFC,0xFE,0xFE,0x1F,0x07,0x03,0x03,0x03,
0x03,0x0E,0xFE,0xFC,0xFC,0xFF,0xFF,0x00,0x00,0x00,
0x07,0x1F,0x3F,0x7F,0x7F,0xF8,0xE0,0xC0,0xC0,0xC0,
0x60,0x38,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,
0x60,0x60,0x7F,0x7F,0x7F,0x7F,0x7F,0x60,0x60,0x60,

// r (114): w=15, h=16
0xAE,0x09,0x55,
0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xF0,0x1C,0x0E,0x07,
0x1F,0x3F,0x3F,0x3F,0x1E,
0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0xC0,
0x00,0x00,0x00,0x00,0x00,

// s (115): w=14, h=16
0xAD,0x09,0x56,
0x78,0xFC,0xFE,0xFE,0xF3,0xF3,0xF1,0xE1,0xE3,0xE3,
0xC6,0xCF,0x9F,0x00,
0xFC,0xFC,0x71,0x61,0xE3,0xC3,0xC3,0xC3,0xC7,0xE7,
0x7F,0x7F,0x3F,0x0E,

// t (116): w=12, h=23
0x4B,0x4F,
0x80,0x80,0xC0,0xE0,0xFC,0xFF,0xFF,0x80,0x80,0x80,
0x80,0x00,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,
0x01,0x00,
0x00,0x00,0x1F,0x3F,0x7F,0x7F,0x7F,0x70,0x70,0x38,
0x1F,0x07,

// u (117): w=20, h=16
0xB3,0x09,0x56,
0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x1F,0x7F,0x7F,0xFF,0xFF,0xF0,0xE0,0xE0,
0x60,0x70,0x3C,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,

// v (118): w=19, h=16
0xB2,0x09,0x45,
0x03,0x03,0x0F,0x3F,0xFF,0xFF,0xFF,0xFF,0xE3,0x80,
0x00,0x00,0x03,0xE3,0xFF,0x3F,0x0F,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x3F,0xFF,0xFF,
0xFE,0x7C,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,

// w (119): w=27, h=16
0xBA,0x09,0x56,
0x03,0x07,0x1F,0x7F,0xFF,0xFF,0xFF,0xF3,0xC3,0x00,
0x03,0x87,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0x83,0x00,
0x03,0xC3,0xFF,0x3F,0x0F,0x07,0x03,
0x00,0x00,0x00,0x00,0x03,0x0F,0x3F,0xFF,0xFF,0xFE,
0x3E,0x0F,0x03,0x00,0x03,0x1F,0x7F,0xFF,0xFF,0x7C,
0x1E,0x07,0x01,0x00,0x00,0x00,0x00,

// x (120): w=19, h=16
0xB2,0x09,0x45,
0x03,0x03,0x07,0x1F,0x3F,0x7F,0xFF,0xFF,0xFB,0xF3,
0xE0,0xF3,0x3B,0x1F,0x0F,0x07,0x03,0x03,0x03,
0xC0,0xC0,0xE0,0xF0,0xF8,0xFC,0xCE,0xC7,0x07,0xCF,
0xFF,0xFF,0xFF,0xFE,0xFC,0xF0,0xE0,0xC0,0xC0,

// y (121): w=19, h=23
0xD2,0x09,0x45,
0x03,0x03,0x0F,0x3F,0xFF,0xFF,0xFF,0xFF,0xE3,0x80,
0x00,0x00,0x03,0xE3,0xFF,0x3F,0x0F,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x3F,0xFF,0xFF,
0xFE,0x7C,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,
0x1C,0x3E,0x7E,0x7E,0x7C,0x70,0x30,0x38,0x0E,0x07,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=14, h=16
0xAD,0x09,0x56,
0x00,0x3F,0x1F,0x07,0x03,0xC3,0xE3,0xFB,0xFF,0xFF,
0xFF,0x3F,0x1F,0x07,
0xC0,0xF0,0xF8,0xFE,0xFF,0xFF,0xDF,0xCF,0xC3,0xC1,
0xC0,0xF0,0xFC,0xFC,

// braceleft (123): w=8, h=29
0x67,0x1C,
0x00,0x00,0xFC,0xFE,0xFF,0xFF,0x01,0x00,
0x60,0x60,0xFF,0xFF,0xDF,0x8F,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x03,0x07,0x0F,0x0F,0x38,0x30,

// bar (124): w=4, h=25
0xE3,0x00,0xCD,
0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,
0x01,0x01,0x01,0x01,

// braceright (125): w=8, h=28
0xE7,0x00,0x59,
0x01,0x03,0xFF,0xFE,0xFE,0xFC,0x00,0x00,
0x00,0x00,0x8F,0xDF,0xFF,0xFF,0x60,0x60,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x08,0x0C,0x0F,0x07,0x07,0x03,0x00,0x00,

// asciitilde (126): w=16, h=6
0x8F,0x0D,0x67,
0x08,0x1C,0x3E,0x1E,0x0F,0x0F,0x0F,0x1E,0x1E,0x3C,
0x3C,0x3C,0x1E,0x1F,0x0E,0x04

};
// 5560 bytes
// 5750 bytes with FAST_FONT_INDEX
