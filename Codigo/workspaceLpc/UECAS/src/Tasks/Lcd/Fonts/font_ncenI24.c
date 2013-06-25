#include "fonts.h"			// for FAST_FONT_INDEX

// ncenI24 = "New Century Schoolbook Italic"

const unsigned char font_ncenI24[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xEA,0x00,
0xF7,0x00,
0x29,0x01,
0x73,0x01,
0xC0,0x01,
0x26,0x02,
0x2E,0x02,
0x60,0x02,
0x93,0x02,
0xB1,0x02,
0xD4,0x02,
0xE3,0x02,
0xEE,0x02,
0xF5,0x02,
0x24,0x03,
0x56,0x03,
0x7F,0x03,
0xB7,0x03,
0xEC,0x03,
0x36,0x04,
0x84,0x04,
0xB9,0x04,
0xEE,0x04,
0x26,0x05,
0x5B,0x05,
0x6C,0x05,
0x8A,0x05,
0xC0,0x05,
0xE5,0x05,
0x1B,0x06,
0x49,0x06,
0xA7,0x06,
0x0E,0x07,
0x6C,0x07,
0xC6,0x07,
0x30,0x08,
0x92,0x08,
0xF4,0x08,
0x56,0x09,
0xD5,0x09,
0x13,0x0A,
0x71,0x0A,
0xE4,0x0A,
0x3E,0x0B,
0xC0,0x0B,
0x3B,0x0C,
0x9D,0x0C,
0xFB,0x0C,
0x5D,0x0D,
0xBF,0x0D,
0x15,0x0E,
0x73,0x0E,
0xDD,0x0E,
0x44,0x0F,
0xC3,0x0F,
0x3A,0x10,
0xA1,0x10,
0xFF,0x10,
0x39,0x11,
0x73,0x11,
0xAE,0x11,
0xD0,0x11,
0xE3,0x11,
0xEC,0x11,
0x11,0x12,
0x4F,0x12,
0x6C,0x12,
0xBA,0x12,
0xD7,0x12,
0x1E,0x13,
0x5D,0x13,
0xA7,0x13,
0xC1,0x13,
0x04,0x14,
0x46,0x14,
0x6C,0x14,
0xA3,0x14,
0xC8,0x14,
0xE9,0x14,
0x28,0x15,
0x5E,0x15,
0x7D,0x15,
0x9A,0x15,
0xBA,0x15,
0xDF,0x15,
0xFE,0x15,
0x2F,0x16,
0x54,0x16,
0x8D,0x16,
0xB0,0x16,
0xDA,0x16,
0xE5,0x16,
0x0F,0x17,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x18,0x5C,
0x00,

// exclam (33): w=9, h=25
0x68,0x0F,
0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0x7F,0x1F,
0x00,0x00,0x00,0xE0,0xFF,0x0F,0x03,0x00,0x00,
0xC0,0xE0,0xE0,0xC3,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// quotedbl (34): w=11, h=8
0x0A,0x19,
0xE0,0x7C,0x3F,0x0F,0x06,0x00,0xE0,0x7C,0x3F,0x0F,
0x06,

// numbersign (35): w=16, h=23
0x4F,0x55,
0x00,0x80,0x80,0x80,0x80,0xF0,0xFF,0x8F,0x80,0x80,
0x80,0xF0,0xFF,0x8F,0x80,0x80,
0x60,0x61,0x61,0xE1,0xFD,0x7F,0x63,0x61,0x61,0xE1,
0xFD,0x7F,0x63,0x61,0x61,0x01,
0x00,0x00,0x78,0x7F,0x07,0x00,0x00,0x00,0x78,0x7F,
0x07,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=18, h=29
0x71,0x08,
0x00,0x00,0x00,0x80,0xE0,0xF0,0x18,0x08,0x0C,0x04,
0xC4,0xFC,0x1F,0x0D,0xCC,0xF8,0xF8,0xE0,
0x00,0x00,0x00,0x07,0x0F,0x1F,0x3E,0x3C,0xF8,0x7C,
0xFF,0xF0,0xE0,0xC0,0xC1,0x01,0x01,0x00,
0x3C,0x7E,0xDE,0x8E,0x80,0x00,0xF0,0x3E,0x07,0x80,
0x80,0xC0,0xE3,0x7F,0x3F,0x0F,0x00,0x00,
0x00,0x00,0x00,0x01,0x79,0x7F,0x03,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// percent (37): w=25, h=23
0x58,0x4F,
0xC0,0xF0,0xF8,0x7C,0x1E,0x0E,0x03,0x01,0x01,0x03,
0xE6,0x7E,0x04,0x04,0x84,0xE4,0x3E,0x1E,0x07,0x01,
0x00,0x00,0x00,0x00,0x00,
0x07,0x0F,0x1F,0x18,0x10,0x10,0x18,0x18,0x0C,0x87,
0xC3,0x70,0x1C,0x0E,0x83,0xC0,0xE0,0xF0,0x70,0x18,
0x18,0x08,0x08,0x98,0xF0,
0x00,0x00,0x00,0x00,0x00,0x40,0x70,0x38,0x0E,0x03,
0x01,0x00,0x00,0x1E,0x3F,0x3F,0x63,0x40,0x40,0x60,
0x60,0x30,0x1C,0x0F,0x01,

// ampersand (38): w=25, h=25
0x78,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFC,
0xFE,0x0F,0x03,0x03,0x01,0x83,0xE7,0xFE,0x7C,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xE0,0xE0,0x30,0x30,0x18,0x1F,0xFF,
0xFF,0xFE,0xE6,0x06,0x03,0x03,0x11,0x10,0x30,0xF0,
0xF0,0x70,0x30,0x30,0x10,
0x3E,0x7F,0xFF,0xFF,0xE0,0xC0,0x80,0x80,0x80,0x80,
0x87,0xDF,0xFF,0x7F,0xFC,0xF0,0xF8,0xCC,0x87,0x83,
0x80,0xC0,0x60,0x30,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,

// quotesingle (39): w=5, h=8
0x84,0x00,0x85,
0xE0,0x7C,0x3F,0x0F,0x06,

// parenleft (40): w=12, h=29
0x6B,0x0C,
0x00,0x00,0x00,0x80,0xE0,0x70,0x18,0x0C,0x06,0x06,
0x03,0x03,
0xE0,0xFC,0xFF,0x0F,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x3F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x00,0x01,0x0F,0x1C,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// parenright (41): w=12, h=29
0xEB,0x00,0x17,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x1C,
0xF0,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,
0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0x7E,0x1F,
0x07,0x00,
0x10,0x18,0x08,0x0C,0x06,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,

// asterisk (42): w=14, h=14
0x2D,0x50,
0x80,0x8C,0x8E,0x9E,0xB8,0xF0,0xE0,0xFF,0xCF,0x47,
0x60,0x60,0x70,0x70,
0x03,0x03,0x03,0x01,0x18,0x3C,0x1F,0x01,0x03,0x07,
0x1E,0x1C,0x0C,0x00,

// plus (43): w=16, h=16
0xAF,0x09,0x67,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,

// comma (44): w=6, h=9
0xA5,0x15,0x39,
0x00,0x80,0xCE,0x6F,0x3F,0x0E,
0x01,0x01,0x00,0x00,0x00,0x00,

// hyphen (45): w=8, h=3
0x87,0x0F,0x57,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,

// period (46): w=4, h=4
0x83,0x15,0x59,
0x06,0x0F,0x0F,0x06,

// slash (47): w=11, h=28
0xEA,0x00,0x99,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFE,0x1F,
0x03,
0x00,0x00,0x00,0x00,0xC0,0xF8,0x3F,0x07,0x00,0x00,
0x00,
0x00,0x80,0xF0,0xFE,0x0F,0x01,0x00,0x00,0x00,0x00,
0x00,
0x08,0x0F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// zero (48): w=16, h=24
0x4F,0x34,
0x00,0x80,0xC0,0xF0,0xF8,0x3C,0x0E,0x06,0x03,0x03,
0x01,0x03,0x07,0xFE,0xFC,0xF0,
0xFC,0xFF,0xFF,0x1F,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0xC0,0xFC,0xFF,0xFF,0x1F,
0x0F,0x3F,0x7F,0xE0,0xC0,0xC0,0xC0,0xC0,0x60,0x38,
0x3E,0x1F,0x0F,0x03,0x00,0x00,

// one (49): w=13, h=24
0x4C,0x37,
0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,0xCC,0xFE,
0xFE,0xFF,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0xFF,0x7F,
0x07,0x00,0x00,
0x80,0x80,0x80,0xC0,0xF0,0xFE,0xFF,0xFF,0xC3,0x80,
0x80,0x80,0x00,

// two (50): w=18, h=24
0x51,0x28,
0x00,0x00,0x00,0xE0,0xF8,0xFC,0xE4,0xC6,0x02,0x03,
0x03,0x03,0x03,0x07,0xDE,0xFE,0xFC,0xF8,
0x00,0x00,0x00,0x01,0x03,0x03,0x83,0x81,0xC0,0x60,
0x70,0x38,0x3C,0x1E,0x0F,0x07,0x03,0x01,
0xE0,0xF0,0xF8,0xFC,0xE6,0xE3,0xE1,0xE1,0xE0,0xE0,
0xE0,0xE0,0xE0,0xF0,0x3C,0x0E,0x02,0x00,

// three (51): w=17, h=24
0x50,0x29,
0x00,0x00,0x00,0x00,0x78,0xFC,0xFE,0x76,0x03,0x01,
0x01,0x01,0x03,0xDE,0xFE,0xFC,0xF8,
0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x08,
0x1C,0xF4,0xF6,0xE7,0xC3,0x01,0x00,
0x3E,0x7F,0x7F,0xCE,0xC0,0x80,0x80,0x80,0xC0,0xE0,
0x70,0x7E,0x3F,0x1F,0x0F,0x00,0x00,

// four (52): w=18, h=25
0x71,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0xC0,0x60,0x30,0xD8,0xFC,0xFE,0x3F,0x07,
0x00,0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,
0x00,0xF0,0xFE,0xFF,0x3F,0x03,0x00,0x00,
0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x86,0x86,0xE6,
0xFF,0xFF,0xBF,0x07,0x06,0x06,0x06,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// five (53): w=19, h=25
0x72,0x0C,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0x1F,0x0F,0x0E,
0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x06,0x06,0x03,
0x00,0x00,0x60,0x70,0x3F,0x1F,0x08,0x0C,0x0E,0x0E,
0x0E,0x1E,0x7C,0xFC,0xF8,0xE0,0x00,0x00,0x00,
0x78,0xFC,0xFC,0xB8,0x80,0x00,0x00,0x80,0x80,0xC0,
0xC0,0xF0,0x7E,0x3F,0x1F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// six (54): w=17, h=24
0x50,0x33,
0x00,0x00,0x80,0xC0,0xF0,0xF8,0x3C,0x1E,0x06,0x02,
0x03,0x01,0x01,0x33,0x7E,0x7E,0x3C,
0xF0,0xFE,0xFF,0xFF,0x37,0x18,0x08,0x0C,0x0C,0x0C,
0x1C,0x3C,0xF8,0xF8,0xE0,0x00,0x00,
0x0F,0x3F,0x7F,0xE0,0xC0,0xC0,0x80,0xC0,0xC0,0x60,
0x70,0x3C,0x3F,0x1F,0x07,0x00,0x00,

// seven (55): w=17, h=24
0x50,0x38,
0x60,0x38,0x1E,0x0F,0x07,0x07,0x07,0x07,0x07,0x07,
0x87,0xC7,0x77,0x3F,0x0F,0x07,0x01,
0x00,0x00,0x00,0x00,0x80,0xC0,0xF0,0xF8,0x3C,0x0F,
0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0xF0,0xFC,0xFE,0x7F,0x1F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=18, h=24
0x51,0x2D,
0x00,0x00,0x00,0xE0,0xF8,0xFC,0xDE,0x06,0x03,0x01,
0x01,0x01,0x03,0x03,0xCE,0xFE,0xFC,0x30,
0x00,0xC0,0xE0,0xE0,0x33,0x17,0x1F,0x0F,0x1E,0x1E,
0x3C,0x7C,0xFE,0xF3,0xE3,0x81,0x00,0x00,
0x0F,0x3F,0x7F,0x70,0xC0,0xC0,0x80,0x80,0x80,0xC0,
0xC0,0x60,0x79,0x3F,0x1F,0x07,0x00,0x00,

// nine (57): w=17, h=24
0x50,0x2E,
0x00,0x00,0xE0,0xF0,0xFC,0x7C,0x0E,0x07,0x03,0x01,
0x01,0x01,0x03,0x07,0xFE,0xFC,0xF0,
0x00,0x00,0x07,0x1F,0x1F,0x3C,0x38,0x30,0x30,0x30,
0x10,0x18,0xEC,0xFF,0xFF,0x7F,0x0F,
0x3C,0x7E,0xFE,0xDC,0xC0,0x80,0x80,0xC0,0xC0,0x70,
0x78,0x3F,0x1F,0x0F,0x03,0x00,0x00,

// colon (58): w=7, h=16
0xA6,0x09,0x56,
0x00,0x00,0x00,0x06,0x0F,0x0F,0x06,
0x60,0xF0,0xF0,0x60,0x00,0x00,0x00,

// semicolon (59): w=9, h=21
0xC8,0x09,0x36,
0x00,0x00,0x00,0x00,0x00,0x06,0x0F,0x0F,0x06,
0x00,0x00,0xE0,0xF0,0xF0,0xE0,0x00,0x00,0x00,
0x10,0x18,0x0C,0x06,0x03,0x00,0x00,0x00,0x00,

// less (60): w=17, h=17
0xD0,0x08,0x57,
0x00,0x80,0x80,0xC0,0xC0,0xE0,0x60,0x70,0x30,0x38,
0x18,0x1C,0x0C,0x0E,0x06,0x07,0x03,
0x03,0x07,0x07,0x0E,0x0C,0x0C,0x18,0x18,0x30,0x30,
0x30,0x60,0x60,0xC0,0xC0,0xC0,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=17, h=9
0xB0,0x0C,0x57,
0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,
0x83,0x83,0x83,0x83,0x83,0x83,0x83,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// greater (62): w=17, h=17
0xD0,0x08,0x66,
0x03,0x07,0x06,0x0E,0x0C,0x1C,0x18,0x38,0x30,0x70,
0x60,0xE0,0xC0,0xC0,0x80,0x80,0x00,
0x80,0xC0,0xC0,0xC0,0x60,0x60,0x30,0x30,0x30,0x18,
0x18,0x0C,0x0C,0x0E,0x07,0x07,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=11, h=25
0x6A,0x1A,
0x70,0x3C,0x06,0x03,0x03,0x01,0x81,0xC3,0xE3,0xFE,
0x7C,
0xC0,0xF0,0x3C,0x1E,0x0F,0x0F,0xC7,0xC3,0x01,0x01,
0x00,
0xC0,0xE1,0xE3,0xC2,0x02,0x03,0x01,0x00,0x00,0x00,
0x00,
0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// at (64): w=23, h=25
0x76,0x0F,
0x00,0x80,0xE0,0x70,0x38,0x1C,0x0C,0x06,0x06,0x87,
0x87,0x83,0x83,0x83,0x03,0x86,0x86,0x8E,0x1C,0x38,
0xF0,0xE0,0x80,
0xFE,0xFF,0x03,0x00,0x00,0xF8,0xFE,0xFF,0x1F,0x07,
0x01,0x00,0x80,0xE3,0xFF,0xFF,0x3F,0x03,0x00,0x80,
0xE0,0xFF,0x1F,
0x01,0x07,0x1F,0x3C,0x70,0x61,0xC3,0xC7,0xC6,0x84,
0x84,0x87,0x83,0x83,0x87,0xCF,0xCC,0xC6,0x66,0x63,
0x31,0x18,0x0C,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// A (65): w=25, h=25
0xF8,0x00,0x15,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xF0,0x38,0xFE,0xFF,0xFF,0xE0,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,
0x9C,0x8F,0x83,0x80,0x80,0x80,0xBF,0xFF,0xFF,0xFC,
0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xC0,0xF0,0xF8,0x9E,0x07,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x87,0xFF,0xFF,
0xFF,0xF0,0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// B (66): w=23, h=25
0x76,0x03,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xE3,0xFF,0xFF,
0xFF,0x0F,0x03,0x01,0x01,0x01,0x03,0x03,0x07,0xFF,
0xFE,0xFC,0xF8,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0x1F,
0x18,0x18,0x18,0x18,0x18,0x38,0x7C,0xEC,0xEE,0xCF,
0xC7,0x03,0x01,
0x00,0x00,0x80,0xE0,0xFE,0xFF,0xFF,0x0F,0x00,0x00,
0x00,0x00,0x00,0x80,0x80,0x80,0xC0,0xF0,0xFF,0x7F,
0x3F,0x1F,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,

// C (67): w=22, h=25
0x75,0x0E,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0x7C,0x1E,0x0E,0x06,
0x03,0x03,0x01,0x01,0x03,0x03,0x06,0x06,0x3C,0xFC,
0xFE,0x1F,
0xF8,0xFF,0xFF,0xFF,0x1F,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x00,0x00,
0x07,0x1F,0x7F,0x7F,0xF8,0xE0,0xC0,0xC0,0x80,0x80,
0x00,0x00,0x80,0x80,0xC0,0xE0,0x60,0x38,0x0C,0x00,
0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// D (68): w=26, h=25
0x79,0x03,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0xF3,0xFF,
0xFF,0xFF,0x0F,0x03,0x01,0x01,0x01,0x03,0x03,0x07,
0x06,0x1E,0xFC,0xFC,0xF0,0xC0,
0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xF0,0xFF,0xFF,0xFF,0x3F,
0x00,0x00,0x00,0x80,0xF0,0xFF,0xFF,0xFF,0x0F,0x00,
0x00,0x80,0x80,0x80,0x80,0xC0,0xC0,0xE0,0xF0,0x7C,
0x3F,0x1F,0x0F,0x07,0x01,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// E (69): w=24, h=25
0x77,0x02,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xC1,0xFF,0xFF,
0xFF,0x3F,0x03,0x01,0x01,0x01,0x81,0xC1,0x03,0x03,
0x07,0x1F,0xFF,0x3F,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0x1F,
0x1B,0x18,0x18,0x78,0xFC,0xFE,0x1F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xE0,0xFC,0xFF,0xFF,0x9F,0x01,0x00,
0x00,0x00,0x00,0x80,0x83,0x80,0xC0,0xC0,0xE0,0xF8,
0x7C,0x06,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,

// F (70): w=24, h=25
0x77,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xE3,0xFF,0xFF,
0xFF,0x1F,0x03,0x01,0x01,0x01,0x81,0xC1,0x03,0x03,
0x07,0x1F,0xFF,0x0F,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0x1F,
0x19,0x18,0x18,0x38,0xFC,0xFE,0x1F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xE0,0xFE,0xFF,0xFF,0x9F,0x01,0x00,
0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// G (71): w=24, h=25
0x77,0x0E,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0x7C,0x3C,0x0E,0x06,
0x03,0x03,0x03,0x01,0x01,0x03,0x03,0x07,0x0E,0x3C,
0xFC,0xFE,0x1F,0x00,
0xF0,0xFE,0xFF,0xFF,0x1F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x60,0x60,0x60,0x60,0xE0,0xE0,0xE0,
0xE3,0x60,0x60,0x60,
0x07,0x1F,0x7F,0xFF,0xF0,0xC0,0x80,0x80,0x80,0x00,
0x00,0x80,0x80,0x80,0xC0,0x70,0x7C,0xFF,0xFF,0x0F,
0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,

// H (72): w=31, h=25
0xFE,0x00,0x32,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xE3,0xFF,0xFF,
0xFF,0x1F,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0x01,0x01,0xE3,0xFF,0xFF,0xFF,0x0F,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0x1F,
0x19,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0xF8,0xFE,0xFF,0xFF,0x1F,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xE0,0xFE,0xFF,0xFF,0x9F,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xFE,
0xFF,0xFF,0x9F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// I (73): w=15, h=25
0x6E,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xE3,0xFF,0xFF,
0xFF,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0x0F,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xE0,0xFE,0xFF,0xFF,0x8F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// J (74): w=23, h=25
0x76,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x81,0xF3,0xFF,0xFF,0x7F,0x0F,
0x03,0x01,0x01,
0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xF8,0xFF,0xFF,0x7F,0x07,0x00,0x00,
0x00,0x00,0x00,
0x3C,0x7F,0xC7,0x87,0x8F,0x0F,0x07,0x80,0x80,0xC0,
0xE0,0xF8,0x7F,0x7F,0x1F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// K (75): w=28, h=25
0xFB,0x00,0x32,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xC1,0xFF,0xFF,
0xFF,0x1F,0x03,0x01,0x01,0x01,0x80,0xC0,0xE1,0x71,
0x3B,0x1F,0x0F,0x07,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0xFF,
0x71,0x38,0x1C,0x7C,0xFE,0xFB,0xE1,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xE0,0xFC,0xFF,0xFF,0x9F,0x01,0x00,
0x00,0x00,0x00,0x00,0x01,0x0F,0x3F,0xFF,0xFC,0xF0,
0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// L (76): w=22, h=25
0x75,0x02,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xC3,0xFF,0xFF,
0xFF,0x1F,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0x1F,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x00,0x00,0x80,0xC0,0xFC,0xFF,0xFF,0xDF,0x81,0x00,
0x00,0x00,0x00,0x80,0x80,0x80,0xC0,0xE0,0xF0,0xFC,
0x3F,0x07,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,

// M (77): w=32, h=25
0x7F,0x02,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xE1,0xFF,0x1F,
0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xE0,0x78,0x9E,0xFF,0xFF,0xFF,0x3F,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0x1F,0x01,0x00,
0x07,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x80,0xE0,0x78,
0x1C,0x07,0x03,0x80,0xF8,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x00,0x80,0xC0,0xF0,0xFE,0x9F,0x00,0x00,0x00,0x00,
0x00,0x1F,0xFF,0xFF,0x7F,0x1C,0x0F,0x03,0x00,0x00,
0x80,0xC0,0xF8,0xFF,0xFF,0x9F,0x03,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// N (78): w=30, h=26
0xFD,0x00,0x24,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0xF3,0x7F,
0x1F,0xFF,0xFF,0xF8,0xE0,0x80,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x03,0xFF,0x7F,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x80,0xF8,0x7F,0x07,0x00,
0x00,0x00,0x03,0x0F,0x3F,0xFF,0xFC,0xF0,0xC0,0x00,
0x00,0x00,0xF0,0x7F,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xC0,0xF8,0xFF,0x87,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x1F,0xFF,0xFE,
0xF8,0x7F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// O (79): w=24, h=25
0x77,0x0F,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0xFC,0x3C,0x1E,0x0E,
0x06,0x03,0x03,0x03,0x01,0x01,0x03,0x03,0x06,0x1E,
0xFC,0xF8,0xF0,0xC0,
0xF0,0xFE,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF8,
0xFF,0xFF,0xFF,0x1F,
0x07,0x1F,0x7F,0x7F,0xF0,0xC0,0x80,0x80,0x00,0x00,
0x80,0x80,0x80,0xC0,0xE0,0xF0,0x78,0x3E,0x3F,0x1F,
0x0F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// P (80): w=23, h=25
0x76,0x07,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xF3,0xFF,0xFF,
0x7F,0x07,0x01,0x01,0x01,0x03,0x03,0x03,0x07,0xFE,
0xFE,0xFC,0xF0,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x7F,0x27,
0x20,0x20,0x30,0x30,0x30,0x38,0x18,0x1C,0x0F,0x0F,
0x07,0x03,0x00,
0x00,0x00,0x80,0xF0,0xFF,0xFF,0xFF,0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// Q (81): w=24, h=31
0x77,0x0F,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0xFC,0x3C,0x1E,0x0E,
0x06,0x07,0x03,0x03,0x01,0x01,0x03,0x03,0x06,0x1E,
0xFC,0xF8,0xF0,0xC0,
0xF0,0xFE,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF8,
0xFF,0xFF,0xFF,0x1F,
0x07,0x1F,0x7F,0x7F,0xE0,0xF8,0xCE,0x86,0x03,0x01,
0x83,0x83,0xCF,0xFE,0xFC,0xE0,0x78,0x7E,0x3F,0x1F,
0x0F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x1F,0x3F,0x7F,0x7F,0x70,0x70,0x30,0x38,
0x0C,0x00,0x00,0x00,

// R (82): w=24, h=26
0x77,0x03,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xC3,0xFF,0xFF,
0xFF,0x1F,0x07,0x01,0x01,0x01,0x03,0x03,0x03,0x07,
0xFE,0xFE,0xFC,0xF0,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0x1F,
0x11,0x10,0x10,0x18,0x38,0xF8,0xF8,0xDC,0x0C,0x0F,
0x0F,0x07,0x03,0x00,
0x00,0x00,0x80,0xC0,0xFC,0xFF,0xFF,0x9F,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x80,
0x80,0xC0,0x60,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x03,
0x03,0x01,0x00,0x00,

// S (83): w=21, h=25
0x74,0x09,
0x00,0x00,0x00,0x00,0xE0,0xF8,0xFC,0x8E,0x06,0x03,
0x03,0x01,0x01,0x01,0x03,0x03,0x06,0x1C,0xFC,0x7F,
0x0F,
0x00,0x00,0x80,0x00,0x03,0x0F,0x0F,0x1F,0x1F,0x3E,
0x3E,0x7C,0x7C,0xF8,0xF8,0xF0,0xF0,0xE0,0x81,0x00,
0x00,
0xC0,0xFE,0x7F,0x78,0xE0,0xC0,0xC0,0x80,0x80,0x00,
0x00,0x00,0x80,0x80,0xC0,0xE1,0x7F,0x3F,0x0F,0x00,
0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// T (84): w=23, h=25
0x76,0x0C,
0x80,0x78,0x7F,0x1F,0x0F,0x07,0x03,0x03,0x01,0xC1,
0xFF,0xFF,0xFF,0x1F,0x03,0x01,0x01,0x03,0x03,0xFF,
0x7F,0x1F,0x03,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0xFF,
0xFF,0x1F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xE0,0xFE,0xFF,0xFF,0x8F,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// U (85): w=26, h=25
0x79,0x18,
0x00,0x01,0x01,0xF3,0xFF,0xFF,0xFF,0x0F,0x03,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xC3,
0xFF,0x3F,0x07,0x03,0x01,0x01,
0x00,0xF0,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0x1F,
0x03,0x00,0x00,0x00,0x00,0x00,
0x1F,0x7F,0xFF,0xFF,0xE0,0x80,0x80,0x00,0x00,0x00,
0x80,0x80,0x80,0xC0,0xE0,0x70,0x3C,0x0F,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// V (86): w=25, h=25
0xF8,0x00,0x52,
0x01,0x01,0x03,0x1F,0xFF,0xFF,0xFF,0xE3,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xC1,0xFB,0x3F,
0x0F,0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x01,0x3F,0xFF,0xFF,0xF8,0x00,
0x00,0x00,0x80,0xE0,0x78,0x1E,0x07,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,
0x38,0x0E,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// W (87): w=31, h=25
0xFE,0x00,0x52,
0x01,0x01,0x03,0xFF,0xFF,0xFF,0xE3,0x01,0x01,0x00,
0x00,0x01,0x01,0xE7,0xFF,0xFF,0xFF,0xE3,0x01,0x01,
0x00,0x00,0x01,0xC1,0xFB,0x3F,0x0F,0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xE0,0x00,0x80,
0xF0,0x3C,0x0F,0x01,0x07,0xFF,0xFF,0xFF,0xE0,0x00,
0x80,0xF8,0x1E,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x7F,0x1F,0x07,
0x01,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0x7F,0x1F,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// X (88): w=29, h=25
0xFC,0x00,0x12,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x07,0x0F,
0x7F,0xFF,0xFF,0xF3,0xC1,0x01,0x00,0x00,0x80,0xC1,
0x71,0x3B,0x1F,0x0F,0x07,0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xC1,0xE7,0x7F,0xFF,0xFE,0xFE,0xC3,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0x9C,0x0E,0x07,
0x03,0x01,0x00,0x00,0x00,0x07,0x9F,0xFF,0xFF,0xFC,
0xF0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// Y (89): w=25, h=25
0xF8,0x00,0x52,
0x01,0x01,0x03,0x07,0x1F,0x7F,0xFF,0xFF,0xE3,0x81,
0x01,0x00,0x00,0x00,0x00,0x81,0xE1,0x73,0x3F,0x0F,
0x07,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0xFF,0xFF,
0xFC,0xF0,0x38,0x1E,0x07,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0x80,0xE0,0xFE,0xFF,0xFF,
0x9F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// Z (90): w=23, h=25
0x76,0x02,
0x00,0x00,0x00,0x00,0xE0,0x7C,0x3F,0x0F,0x07,0x07,
0x03,0x03,0x01,0x81,0xC1,0xF1,0xF9,0xFD,0x7F,0x1F,
0x0F,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,
0xF8,0xFC,0x3F,0x1F,0x0F,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,
0x80,0xC0,0xE0,0xF0,0xFC,0x7E,0x3F,0x1F,0x07,0x03,
0x01,0x00,0x00,0x80,0x80,0xC0,0xE0,0xF0,0xFC,0x3E,
0x07,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,

// bracketleft (91): w=14, h=29
0x6D,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0x7F,0x07,0x01,
0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0xE0,0xFE,0x7F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0xF0,0xFE,0x3F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x1F,0x1F,0x13,0x10,0x10,0x10,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// backslash (92): w=14, h=25
0x6D,0x1D,
0x01,0x07,0x1E,0x78,0xE0,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x0F,0x3E,0xF8,0xE0,0x80,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,
0x3C,0xF0,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,

// bracketright (93): w=14, h=29
0xED,0x00,0x24,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0xF1,0xFF,0x3F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,
0x3F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x3F,0x03,
0x00,0x00,0x00,0x00,
0x10,0x10,0x10,0x10,0x10,0x1F,0x1F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,

// asciicircum (94): w=16, h=13
0x2F,0x16,
0x00,0x00,0x00,0xC0,0xE0,0xF8,0x3E,0x0F,0x03,0x0F,
0x3E,0xF8,0xE0,0x00,0x00,0x00,
0x10,0x1C,0x1F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x1F,0x1C,0x10,

// underscore (95): w=16, h=2
0x8F,0x1C,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=7, h=6
0x06,0x56,
0x07,0x07,0x0E,0x0C,0x18,0x30,0x20,

// a (97): w=17, h=16
0xB0,0x09,0x46,
0x80,0xE0,0xF8,0xFC,0x3E,0x0E,0x07,0x03,0x03,0x03,
0x06,0xFC,0xF8,0xFE,0x3F,0x07,0x00,
0x3F,0x7F,0xFF,0xE0,0xC0,0x80,0xC0,0x40,0x60,0x30,
0x7E,0xFF,0xFF,0xC1,0x40,0x60,0x30,

// b (98): w=15, h=25
0x6E,0x10,
0x00,0x00,0x00,0x82,0xF2,0xFE,0xFF,0x0F,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0xC0,0xF8,0xFF,0x7F,0x1F,0x0C,0x04,0x06,0x06,
0x06,0x1E,0xFE,0xFC,0xF0,
0x7C,0xFF,0xFF,0x81,0x80,0x00,0x00,0x80,0xC0,0xC0,
0xF0,0x7E,0x3F,0x0F,0x03,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,

// c (99): w=13, h=16
0xAC,0x09,0x46,
0xC0,0xF0,0xF8,0x7C,0x1E,0x06,0x03,0x01,0x01,0x19,
0x3B,0x3E,0x1C,
0x1F,0x7F,0x7F,0xE0,0xC0,0xC0,0x80,0xC0,0x40,0x60,
0x30,0x10,0x00,

// d (100): w=19, h=25
0x72,0x09,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x82,0xF2,0xFF,0xFF,0x0F,
0x00,0xC0,0xF0,0xF8,0x7C,0x1C,0x0C,0x06,0x02,0x02,
0x02,0x06,0xFC,0xF8,0xFF,0x3F,0x07,0x00,0x00,
0x3F,0xFF,0xFF,0xC3,0x80,0x00,0x00,0x80,0x80,0xC0,
0x70,0xFC,0xFF,0xBF,0x83,0x80,0xC0,0x60,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// e (101): w=13, h=16
0xAC,0x09,0x46,
0x80,0xE0,0xF8,0xFC,0x1E,0x06,0x03,0x81,0xC1,0xE3,
0x7F,0x3E,0x1C,
0x1F,0x7F,0x7F,0xE2,0xC2,0x83,0xC1,0xC1,0x40,0x60,
0x30,0x10,0x00,

// f (102): w=17, h=31
0xF0,0x00,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0x7C,
0x0E,0x03,0x01,0x01,0x0F,0x1F,0x0E,
0x00,0x00,0x00,0x02,0x82,0xF2,0xFF,0x7F,0x07,0x02,
0x02,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xF8,0xFF,0x7F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x70,0x3C,0x3F,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// g (103): w=20, h=24
0xD3,0x08,0x15,
0x00,0x00,0x00,0x00,0x00,0xF0,0xF8,0xFC,0x0C,0x06,
0x06,0x02,0x02,0x06,0x8E,0xFE,0xFB,0x73,0x07,0x07,
0x00,0x00,0x00,0xF0,0xF8,0xC9,0xCB,0xCF,0xCC,0xC8,
0xC8,0xC8,0x8C,0x8E,0x87,0x07,0x01,0x00,0x00,0x00,
0x38,0x7E,0x7E,0xC3,0xC3,0xC1,0x81,0x81,0x81,0x81,
0xC1,0xC1,0x63,0x77,0x3F,0x1F,0x00,0x00,0x00,0x00,

// h (104): w=18, h=25
0x71,0x09,
0x00,0x00,0x00,0x00,0x02,0x82,0xFE,0xFF,0x7F,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xE0,0xFC,0xFF,0x7F,0x33,0x18,0x0C,
0x04,0x06,0x86,0xFE,0xFC,0x78,0x00,0x00,
0x80,0xF0,0xFF,0x7F,0x0F,0x01,0x00,0x00,0x00,0x00,
0x60,0xFC,0xFF,0x9F,0x83,0xC0,0x60,0x30,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// i (105): w=8, h=24
0x47,0x2F,
0x00,0x00,0x00,0x00,0x06,0x0F,0x0F,0x06,
0x00,0xC2,0xFA,0xFF,0x3F,0x07,0x00,0x00,
0x7E,0xFF,0xDF,0x43,0x60,0x30,0x18,0x0C,

// j (106): w=16, h=31
0xEF,0x01,0x05,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x06,0x0F,0x0F,0x06,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
0xF2,0xFF,0xFF,0x0F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF0,0xFF,
0x7F,0x0F,0x00,0x00,0x00,0x00,
0x38,0x7C,0x78,0x40,0x40,0x60,0x38,0x1F,0x0F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,

// k (107): w=16, h=25
0x6F,0x09,
0x00,0x00,0x00,0x00,0x02,0xC2,0xFE,0xFF,0x3F,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xF0,0xFE,0xFF,0x7F,0x33,0x18,0x0C,
0x04,0x86,0xC6,0xFE,0x7E,0x3C,
0xC0,0xF8,0xFF,0x3F,0x07,0x01,0x02,0x02,0x02,0xFF,
0xFD,0xE1,0x80,0xC0,0x60,0x30,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x00,0x00,0x00,

// l (108): w=9, h=25
0x68,0x08,
0x00,0x00,0x00,0x02,0x82,0xFE,0xFF,0x7F,0x07,
0x00,0x00,0xE0,0xFC,0xFF,0x1F,0x03,0x00,0x00,
0xF0,0xFE,0xFF,0x8F,0x80,0xC0,0x60,0x30,0x00,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// m (109): w=26, h=16
0xB9,0x09,0x57,
0x00,0x02,0x82,0xFE,0xFF,0xFF,0x33,0x18,0x0C,0x06,
0x03,0x83,0xFF,0xFF,0xFE,0x30,0x1C,0x0E,0x06,0x03,
0xE3,0xFF,0xFF,0x1E,0x00,0x00,
0xE0,0xFC,0xFF,0x1F,0x03,0x00,0x00,0x00,0x80,0xF0,
0xFE,0x7F,0x0F,0x01,0x00,0x00,0x00,0x00,0x78,0xFF,
0xFF,0xC7,0x40,0x60,0x30,0x18,

// n (110): w=17, h=16
0xB0,0x09,0x57,
0x00,0x02,0xE2,0xFF,0xFF,0x3F,0x18,0x0C,0x06,0x02,
0x03,0xE3,0xFF,0xFE,0x1C,0x00,0x00,
0xF0,0xFF,0xFF,0x0F,0x01,0x00,0x00,0x00,0x00,0x70,
0xFF,0xFF,0xC7,0x40,0x60,0x30,0x18,

// o (111): w=15, h=16
0xAE,0x09,0x46,
0x80,0xF0,0xF8,0xFC,0x1E,0x06,0x03,0x01,0x01,0x01,
0x03,0x07,0xFE,0xFC,0xF0,
0x1F,0x3F,0x7F,0xE0,0xC0,0x80,0x80,0x80,0xC0,0x60,
0x78,0x3F,0x1F,0x07,0x01,

// p (112): w=20, h=22
0xD3,0x09,0x17,
0x00,0x00,0x00,0x00,0x02,0x02,0xC2,0xFF,0xFF,0x37,
0x18,0x0E,0x06,0x03,0x03,0x03,0x87,0xFE,0xFE,0xF8,
0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0x3F,0x61,0xC0,
0x80,0xC0,0xC0,0xE0,0x70,0x78,0x3F,0x1F,0x07,0x01,
0x20,0x20,0x30,0x3E,0x3F,0x2F,0x20,0x20,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=17, h=22
0xD0,0x09,0x45,
0x80,0xE0,0xF8,0xFC,0x1E,0x0E,0x03,0x03,0x01,0x01,
0x01,0x83,0xFE,0xFC,0xFE,0x0F,0x01,
0x1F,0x7F,0x7F,0xE0,0xC0,0xC0,0xC0,0x40,0x60,0xF0,
0xFC,0xFF,0x7F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x30,0x3C,0x3F,
0x3F,0x23,0x20,0x00,0x00,0x00,0x00,

// r (114): w=14, h=16
0xAD,0x09,0x45,
0x00,0x02,0x02,0xF2,0xFF,0xFF,0x33,0x1C,0x06,0x03,
0x03,0x0F,0x1F,0x0E,
0xC0,0xF8,0xFF,0x7F,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// s (115): w=13, h=16
0xAC,0x09,0x46,
0x00,0x00,0x3C,0xFE,0xF6,0xE3,0xC1,0xC1,0x81,0x83,
0x0F,0x1E,0x1E,
0x38,0x7C,0xFC,0xC0,0x80,0x81,0x81,0xC3,0xC3,0x7F,
0x3F,0x1E,0x00,

// t (116): w=10, h=22
0x49,0x6E,
0x00,0x40,0x40,0xC0,0xF0,0xFC,0x7F,0x4F,0x41,0x40,
0x00,0xE0,0xFC,0xFF,0x1F,0x03,0x00,0x00,0x00,0x00,
0x1E,0x3F,0x3F,0x39,0x10,0x18,0x0C,0x06,0x03,0x00,

// u (117): w=17, h=16
0xB0,0x09,0x57,
0x00,0x82,0xF2,0xFF,0x7F,0x0F,0x01,0x00,0x00,0x00,
0x80,0xF0,0xFE,0xFF,0x1F,0x03,0x00,
0x7C,0xFF,0xFF,0xC3,0xC0,0x60,0x60,0x30,0x18,0x7E,
0xFF,0xFF,0xC7,0x60,0x30,0x38,0x08,

// v (118): w=14, h=16
0xAD,0x09,0x57,
0x02,0xE2,0xFE,0xFF,0x1F,0x03,0x00,0x00,0x00,0x02,
0x07,0x8F,0xFF,0x3E,
0x1F,0x7F,0x7F,0xE0,0xC0,0xC0,0xC0,0x60,0x60,0x38,
0x1C,0x07,0x01,0x00,

// w (119): w=23, h=16
0xB6,0x09,0x57,
0x00,0x82,0xF2,0xFF,0x7F,0x07,0x00,0x00,0x00,0x00,
0xC0,0xFC,0xFF,0x7F,0x07,0x00,0x00,0x00,0x00,0x07,
0x0F,0xFF,0x7E,
0x3C,0x7F,0xFF,0xC3,0xC0,0x40,0x60,0x30,0x1C,0x07,
0x7F,0x7F,0xFF,0xC0,0xC0,0xC0,0x60,0x30,0x18,0x0E,
0x07,0x01,0x00,

// x (120): w=17, h=16
0xB0,0x09,0x35,
0x00,0x00,0x18,0x0C,0x06,0x03,0x0F,0xFF,0xFE,0xF0,
0x70,0x1C,0x06,0x03,0x07,0x07,0x02,
0x60,0xF0,0xF0,0xC0,0x60,0x38,0x1C,0x07,0x1F,0x7F,
0xFE,0xE0,0xC0,0x60,0x30,0x18,0x00,

// y (121): w=18, h=23
0xD1,0x09,0x16,
0x00,0x00,0x00,0x38,0x0E,0x07,0x0F,0x7F,0xFE,0xF8,
0x80,0x00,0x00,0x00,0x8E,0xFF,0x3F,0x0E,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,
0xFF,0x78,0x38,0x0E,0x03,0x00,0x00,0x00,
0x38,0x7C,0x7C,0x40,0x40,0x60,0x30,0x18,0x0E,0x07,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=16, h=16
0xAF,0x09,0x35,
0x00,0x00,0x18,0x1C,0x06,0x03,0x03,0x87,0xC7,0xC7,
0x66,0x36,0x1A,0x0E,0x07,0x03,
0xC0,0xF0,0x38,0x6C,0x76,0x77,0xE3,0xE1,0xE1,0xC0,
0xC0,0x60,0x30,0x18,0x00,0x00,

// braceleft (123): w=10, h=30
0x69,0x13,
0x00,0x00,0x00,0x00,0xC0,0xF8,0x7E,0x07,0x01,0x01,
0x40,0xE0,0xE0,0x3C,0x1F,0x07,0x00,0x00,0x00,0x00,
0x80,0xF8,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x1F,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// bar (124): w=2, h=25
0xE1,0x00,0xDE,
0xFF,0xFF,
0xFF,0xFF,
0xFF,0xFF,
0x01,0x01,

// braceright (125): w=10, h=30
0x69,0x04,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC1,0xFF,0x7F,
0x00,0x00,0x00,0x00,0x00,0x00,0x98,0xFF,0xFF,0x40,
0x00,0x00,0x00,0x80,0xF8,0xFF,0x0F,0x01,0x00,0x00,
0x10,0x70,0x1C,0x1F,0x07,0x00,0x00,0x00,0x00,0x00,

// asciitilde (126): w=17, h=5
0x90,0x0E,0x57,
0x08,0x1C,0x0E,0x07,0x07,0x07,0x07,0x0E,0x0E,0x0E,
0x1C,0x1C,0x1C,0x1C,0x0E,0x07,0x02

};
// 5733 bytes
// 5923 bytes with FAST_FONT_INDEX
