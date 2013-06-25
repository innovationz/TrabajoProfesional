#include "fonts.h"			// for FAST_FONT_INDEX

// helvO18 = "Helvetica Oblique"

const unsigned char font_helvO18[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xD8,0x00,
0xE2,0x00,
0x0B,0x01,
0x37,0x01,
0x6A,0x01,
0x96,0x01,
0x9C,0x01,
0xB6,0x01,
0xD0,0x01,
0xDA,0x01,
0xF4,0x01,
0xFA,0x01,
0x04,0x02,
0x09,0x02,
0x2D,0x02,
0x56,0x02,
0x6B,0x02,
0x97,0x02,
0xBD,0x02,
0xE3,0x02,
0x0C,0x03,
0x35,0x03,
0x5F,0x03,
0x85,0x03,
0xAE,0x03,
0xBA,0x03,
0xCE,0x03,
0xE8,0x03,
0xF6,0x03,
0x0E,0x04,
0x32,0x04,
0x73,0x04,
0xA2,0x04,
0xD4,0x04,
0x09,0x05,
0x41,0x05,
0x73,0x05,
0xA3,0x05,
0xD8,0x05,
0x10,0x06,
0x24,0x06,
0x4D,0x06,
0x82,0x06,
0xA5,0x06,
0xE9,0x06,
0x21,0x07,
0x59,0x07,
0x8B,0x07,
0xC3,0x07,
0xF5,0x07,
0x24,0x08,
0x51,0x08,
0x86,0x08,
0xB6,0x08,
0xF5,0x08,
0x31,0x09,
0x5E,0x09,
0x94,0x09,
0xB2,0x09,
0xC1,0x09,
0xDE,0x09,
0xEC,0x09,
0xFD,0x09,
0x05,0x0A,
0x1D,0x0A,
0x46,0x0A,
0x5E,0x0A,
0x8A,0x0A,
0xA4,0x0A,
0xBF,0x0A,
0xEE,0x0A,
0x14,0x0B,
0x28,0x0B,
0x45,0x0B,
0x6B,0x0B,
0x7F,0x0B,
0xA5,0x0B,
0xBF,0x0B,
0xD9,0x0B,
0x05,0x0C,
0x2E,0x0C,
0x42,0x0C,
0x5C,0x0C,
0x73,0x0C,
0x8D,0x0C,
0xA6,0x0C,
0xCA,0x0C,
0xE9,0x0C,
0x15,0x0D,
0x31,0x0D,
0x52,0x0D,
0x69,0x0D,
0x89,0x0D,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x12,0x4A,
0x00,

// exclam (33): w=6, h=19
0x45,0x18,
0x00,0x00,0x00,0xF0,0xFF,0x0F,
0x00,0x30,0x3F,0x0F,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,

// quotedbl (34): w=7, h=6
0x86,0x00,0x82,
0x38,0x1F,0x07,0x00,0x38,0x1F,0x07,

// numbersign (35): w=13, h=17
0x4C,0x58,
0x00,0x00,0x30,0x30,0xF0,0xFC,0x3F,0x33,0xF0,0xFC,
0x3F,0x33,0x30,
0x0C,0xCC,0xFC,0x3F,0x0F,0xCC,0xFC,0x3F,0x0F,0x0C,
0x0C,0x00,0x00,
0x00,0x01,0x01,0x00,0x00,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,

// dollar (36): w=14, h=21
0x4D,0x0C,
0x00,0x00,0x00,0xF8,0xFC,0x8C,0x06,0xC6,0xFE,0x3F,
0x07,0x06,0x1E,0x1C,
0x80,0x80,0x00,0x00,0x01,0x83,0xFF,0x7F,0x07,0x0E,
0x9C,0xF8,0xF0,0x00,
0x01,0x03,0x07,0x06,0x1E,0x1F,0x07,0x06,0x06,0x03,
0x03,0x01,0x00,0x00,

// percent (37): w=16, h=18
0xCF,0x01,0x87,
0x70,0xF8,0x8C,0x86,0x86,0xC6,0x7E,0x38,0x00,0x80,
0xC0,0x70,0x18,0x0C,0x06,0x03,
0x00,0x01,0x81,0xC1,0x71,0x18,0x0C,0x06,0xE3,0xF1,
0x18,0x0C,0x0C,0x8C,0xFC,0x70,
0x00,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x03,0x03,0x03,0x01,0x00,0x00,

// ampersand (38): w=14, h=18
0x4D,0x35,
0x00,0x00,0x00,0x00,0x78,0xFE,0xC6,0x83,0xC3,0xE3,
0x7F,0x1E,0x00,0x00,
0xF8,0xFC,0x8E,0x07,0x03,0x03,0x07,0x8F,0xDD,0xF8,
0xF0,0xFC,0x9E,0x06,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x00,
0x00,0x01,0x03,0x03,

// quotesingle (39): w=3, h=6
0x82,0x00,0x93,
0x38,0x1F,0x07,

// parenleft (40): w=8, h=24
0x47,0x12,
0x00,0x80,0xE0,0x78,0x1C,0x06,0x03,0x01,
0xFC,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,
0x0F,0x3F,0x70,0xC0,0x80,0x00,0x00,0x00,

// parenright (41): w=8, h=24
0x47,0x0D,
0x00,0x00,0x00,0x01,0x03,0x0E,0xFC,0xF0,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0x3F,
0x80,0xC0,0x60,0x38,0x1E,0x07,0x01,0x00,

// asterisk (42): w=7, h=6
0x86,0x00,0x93,
0x32,0x1E,0x0C,0x1F,0x34,0x06,0x02,

// plus (43): w=12, h=12
0x2B,0xD4,
0x60,0x60,0x60,0x60,0x60,0xF8,0xFF,0x67,0x60,0x60,
0x60,0x60,
0x00,0x00,0x00,0x00,0x0E,0x0F,0x01,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=3, h=6
0x82,0x10,0x57,
0x20,0x37,0x1F,

// hyphen (45): w=7, h=2
0x86,0x0B,0x64,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=2, h=3
0x81,0x10,0x67,
0x07,0x07,

// slash (47): w=11, h=19
0xCA,0x00,0x41,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x30,0x1E,0x03,
0x01,
0x00,0x00,0xE0,0x30,0x1E,0x03,0x01,0x00,0x00,0x00,
0x00,
0x04,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// zero (48): w=13, h=18
0x4C,0x32,
0x00,0x80,0xE0,0x78,0x1C,0x06,0x07,0x03,0x03,0x03,
0x87,0xFE,0x7C,
0xF8,0xFF,0x87,0x00,0x00,0x00,0x80,0x80,0xE0,0x78,
0x1F,0x07,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,

// one (49): w=6, h=18
0xC5,0x01,0xA6,
0x18,0x18,0x98,0xFC,0x7F,0x07,
0x80,0xF8,0x7F,0x07,0x00,0x00,
0x03,0x03,0x00,0x00,0x00,0x00,

// two (50): w=14, h=18
0x4D,0x2C,
0x00,0x00,0x00,0x38,0x3C,0x0E,0x07,0x03,0x03,0x03,
0x83,0xC6,0xFE,0x7C,
0x80,0xC0,0xE0,0x70,0x38,0x18,0x0C,0x0E,0x06,0x03,
0x03,0x01,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x00,0x00,0x00,

// three (51): w=12, h=18
0x4B,0x33,
0x00,0x00,0x18,0x1C,0x0E,0x06,0x03,0x83,0xC3,0xE7,
0x7E,0x3C,
0xE0,0xE0,0x80,0x00,0x00,0x03,0x83,0x83,0xC7,0xFE,
0x7C,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x00,
0x00,0x00,

// four (52): w=12, h=18
0x4B,0x33,
0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x18,0x8C,0xF6,
0x7F,0x0F,
0x38,0x3C,0x36,0x33,0x31,0x30,0xB0,0xFC,0x7F,0x33,
0x30,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,
0x00,0x00,

// five (53): w=13, h=18
0x4C,0x32,
0x00,0x00,0x80,0xF0,0xFF,0xCF,0xC3,0xC3,0xC3,0x83,
0x03,0x03,0x03,
0xE0,0xE0,0x01,0x01,0x01,0x00,0x80,0x80,0xE1,0xFF,
0x3F,0x00,0x00,
0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x00,
0x00,0x00,0x00,

// six (54): w=13, h=18
0x4C,0x32,
0x00,0x80,0xE0,0x78,0x9C,0x86,0xC7,0xC3,0xC3,0xC3,
0x87,0x0E,0x0C,
0xF8,0xFF,0x8F,0x03,0x01,0x01,0x80,0x80,0xC0,0x71,
0x7F,0x1F,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x00,
0x00,0x00,0x00,

// seven (55): w=13, h=18
0xCC,0x01,0x72,
0x00,0x00,0x03,0x03,0x03,0x03,0xC3,0xE3,0x73,0x3B,
0x0F,0x07,0x03,
0x00,0xC0,0xF0,0x3C,0x1E,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// eight (56): w=12, h=18
0x4B,0x33,
0x00,0x00,0x00,0x78,0xFC,0xC6,0x83,0x83,0x83,0xC7,
0x7E,0x3C,
0xF0,0xFC,0x8E,0x07,0x03,0x01,0x01,0x81,0xC3,0xFF,
0x7E,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x00,
0x00,0x00,

// nine (57): w=13, h=18
0x4C,0x32,
0x00,0xE0,0xF8,0x38,0x0E,0x06,0x07,0x03,0x03,0x03,
0xC7,0xFE,0x7C,
0xC0,0xC3,0x87,0x0E,0x0C,0x0C,0x8C,0x86,0xE6,0x7B,
0x1F,0x07,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,

// colon (58): w=5, h=14
0x24,0xB3,
0x00,0x00,0x00,0x07,0x07,
0x38,0x38,0x00,0x00,0x00,

// semicolon (59): w=6, h=17
0x45,0xAD,
0x00,0x00,0x00,0x00,0x07,0x07,
0x00,0xB8,0xF8,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,

// less (60): w=12, h=10
0x2B,0xDA,
0x60,0x70,0xF0,0xD8,0x98,0x8C,0x0C,0x06,0x06,0x03,
0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x00,
0x00,0x00,

// equal (61): w=11, h=5
0x8A,0x09,0x76,
0x18,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,
0x03,

// greater (62): w=11, h=10
0x2A,0xDA,
0x00,0x01,0x03,0x83,0x86,0xC6,0xCC,0x6C,0x78,0x38,
0x30,
0x02,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,

// question (63): w=11, h=19
0xCA,0x00,0x83,
0x30,0x3C,0x0E,0x06,0x03,0x83,0x83,0xC3,0xE7,0x7E,
0x3C,
0x00,0x00,0x38,0x3E,0x07,0x03,0x01,0x00,0x00,0x00,
0x00,
0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// at (64): w=21, h=23
0x54,0x13,
0x00,0x00,0xC0,0xE0,0x30,0x18,0x0C,0x0C,0x86,0x86,
0xC3,0xC3,0xC3,0x83,0x03,0x87,0x86,0x0E,0x1C,0xF8,
0xF0,
0xF8,0xFF,0x07,0x00,0x00,0xF8,0xFE,0x87,0x03,0x01,
0x00,0xC0,0xF0,0x3D,0x0F,0x03,0xC1,0xE0,0x78,0x1F,
0x07,
0x03,0x0F,0x1C,0x38,0x30,0x60,0x61,0x63,0x63,0x63,
0x63,0x31,0x33,0x03,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,

// A (65): w=15, h=19
0x4E,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x78,0x1E,
0x0F,0xFF,0xF8,0x00,0x00,
0x00,0x80,0xC0,0xF0,0x3C,0x1F,0x1B,0x19,0x18,0x18,
0x18,0x19,0x3F,0xFE,0xC0,
0x06,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x07,

// B (66): w=16, h=19
0x4F,0x13,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,
0x03,0x03,0x83,0xC7,0xFE,0x7C,
0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x87,0xFE,0xFC,0x00,
0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x07,0x03,0x03,0x01,0x00,0x00,

// C (67): w=17, h=19
0x50,0x13,
0x00,0x80,0xE0,0xF0,0x38,0x0C,0x0E,0x06,0x07,0x03,
0x03,0x03,0x03,0x03,0x07,0x1E,0x1C,
0x7C,0xFF,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xE0,0x60,0x00,0x00,
0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x07,
0x03,0x03,0x01,0x00,0x00,0x00,0x00,

// D (68): w=18, h=19
0x51,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x07,0x06,0x1E,0xFC,0xF0,
0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xE0,0x78,0x3E,0x0F,0x03,
0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x07,
0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// E (69): w=16, h=19
0x4F,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,
0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x00,0x00,0x00,
0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x06,0x00,0x00,0x00,0x00,

// F (70): w=15, h=19
0xCE,0x00,0x62,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,
0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x00,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// G (71): w=17, h=19
0x50,0x14,
0x00,0x80,0xE0,0xF0,0x38,0x0C,0x0E,0x06,0x07,0x03,
0x03,0x03,0x03,0x03,0x07,0x1E,0x1C,
0x7C,0xFF,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x06,0x86,0xC6,0xE6,0xFE,0x3E,0x0E,
0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x07,
0x03,0x01,0x06,0x07,0x01,0x00,0x00,

// H (72): w=18, h=19
0x51,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x0F,
0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0xF3,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x07,0x00,0x00,0x00,0x00,

// I (73): w=6, h=19
0x45,0x19,
0x00,0x00,0x00,0xF0,0xFF,0x0F,
0x00,0xF0,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,

// J (74): w=13, h=19
0x4C,0x12,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xF0,0xFF,0x0F,
0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0x7F,
0x0F,0x00,0x00,
0x01,0x03,0x07,0x06,0x06,0x06,0x07,0x03,0x01,0x00,
0x00,0x00,0x00,

// K (75): w=17, h=19
0x50,0x13,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x80,0xC0,0xE0,0x70,
0x30,0x18,0x0C,0x0E,0x07,0x03,0x01,
0x00,0xF0,0xFF,0x0F,0x07,0x03,0x03,0x07,0x1E,0x3C,
0xF0,0xE0,0x80,0x00,0x00,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x07,0x07,0x04,0x00,0x00,

// L (76): w=11, h=19
0x4A,0x15,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,
0x00,
0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,
0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,

// M (77): w=22, h=19
0x55,0x12,
0x00,0x00,0x00,0xF8,0xFF,0x3F,0xFC,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0x30,0x9C,0xFE,
0x7F,0x07,
0x00,0xF0,0xFF,0x0F,0x00,0x00,0x0F,0xFF,0xF0,0x00,
0xC0,0xF0,0x78,0x1E,0x07,0x03,0x00,0xF0,0xFF,0x0F,
0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x07,
0x03,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x00,0x00,
0x00,0x00,

// N (78): w=18, h=19
0x51,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x3F,0xF8,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x0F,
0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x01,0x0F,0x3E,
0xF0,0xC0,0x00,0xF0,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// O (79): w=18, h=19
0x51,0x12,
0x00,0x80,0xE0,0xF0,0x38,0x1C,0x0E,0x06,0x07,0x03,
0x03,0x03,0x03,0x07,0x06,0x1E,0xFC,0xF0,
0x7C,0xFF,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xE0,0x78,0x3F,0x0F,0x01,
0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x07,
0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// P (80): w=16, h=19
0x4F,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,
0x03,0x03,0x83,0xC3,0xFF,0x3E,
0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x01,0x01,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=18, h=20
0x51,0x12,
0x00,0x80,0xE0,0xF0,0x38,0x1C,0x0E,0x06,0x07,0x03,
0x03,0x03,0x03,0x07,0x06,0x1E,0xFC,0xF0,
0x7E,0xFF,0xC3,0x00,0x00,0x00,0x00,0x20,0x70,0xE0,
0xC0,0x80,0xC0,0xE0,0x78,0x3E,0x0F,0x03,
0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x07,
0x03,0x03,0x07,0x0E,0x04,0x00,0x00,0x00,

// R (82): w=16, h=19
0x4F,0x13,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,
0x03,0x03,0x83,0xC3,0xFF,0x3E,
0x00,0xF0,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x87,0xFF,0x7D,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x04,0x00,0x00,

// S (83): w=15, h=19
0x4E,0x13,
0x00,0x00,0x70,0xF8,0xCC,0x86,0x86,0x03,0x03,0x03,
0x03,0x07,0x06,0x1E,0x1C,
0xE0,0xE0,0x80,0x00,0x01,0x01,0x01,0x03,0x03,0x03,
0x86,0xCE,0xFC,0x78,0x00,
0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x06,0x06,0x03,
0x03,0x01,0x00,0x00,0x00,

// T (84): w=14, h=19
0xCD,0x00,0x92,
0x03,0x03,0x03,0x03,0x03,0xF3,0xFF,0x0F,0x03,0x03,
0x03,0x03,0x03,0x03,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// U (85): w=17, h=19
0x50,0x18,
0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF0,0xFF,0x0F,
0xF0,0xFF,0x8F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xE0,0xF8,0x3F,0x07,0x00,0x00,
0x00,0x03,0x03,0x06,0x06,0x06,0x06,0x06,0x06,0x03,
0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// V (86): w=15, h=19
0xCE,0x00,0x92,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0xE0,0xF0,0x3C,0x0F,0x03,
0x03,0xFF,0xFE,0x00,0x00,0xC0,0xF0,0x7C,0x1E,0x07,
0x01,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x04,0x07,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// W (87): w=20, h=19
0xD3,0x00,0x92,
0xFF,0xFF,0x00,0x00,0x00,0x00,0xC0,0xF0,0x3C,0xFF,
0xFF,0x00,0x00,0x00,0x00,0xC0,0xF0,0x3C,0x0F,0x03,
0x7F,0xFF,0x80,0xF0,0x7C,0x1F,0x07,0x01,0x00,0x7F,
0xFF,0x80,0xF0,0x7C,0x1F,0x07,0x01,0x00,0x00,0x00,
0x00,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// X (88): w=19, h=19
0xD2,0x00,0x52,
0x00,0x00,0x00,0x00,0x03,0x0F,0x1E,0x78,0xE0,0xC0,
0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x07,0x03,
0x00,0x00,0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0F,0x07,
0x1F,0x7D,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,
0x06,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x07,0x07,0x00,0x00,0x00,0x00,

// Y (89): w=14, h=19
0xCD,0x00,0xA1,
0x07,0x3F,0xF8,0xC0,0x00,0x00,0x80,0xC0,0x60,0x38,
0x1C,0x0E,0x07,0x03,
0x00,0x00,0xC3,0xFF,0x3C,0x07,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x06,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// Z (90): w=17, h=19
0xD0,0x00,0x52,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x83,
0xC3,0xE3,0x73,0x3B,0x1F,0x0F,0x07,
0x00,0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x07,0x03,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x06,0x06,0x00,0x00,0x00,0x00,

// bracketleft (91): w=9, h=24
0xC8,0x00,0x52,
0x00,0x00,0x00,0x00,0xF0,0xFF,0x0F,0x03,0x03,
0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,
0xF0,0xFF,0xCF,0xC0,0x00,0x00,0x00,0x00,0x00,

// backslash (92): w=4, h=19
0xC3,0x00,0x84,
0x03,0xFF,0x00,0x00,
0x00,0x03,0xFE,0x00,
0x00,0x00,0x07,0x06,

// bracketright (93): w=9, h=24
0x48,0x06,
0x00,0x00,0x00,0x00,0x00,0x03,0xF3,0xFF,0x0F,
0x00,0x00,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,
0xC0,0xC0,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,

// asciicircum (94): w=12, h=8
0x0B,0x12,
0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x0F,0x3C,
0xF0,0xC0,

// underscore (95): w=14, h=2
0x8D,0x16,0x36,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,

// grave (96): w=5, h=4
0x84,0x00,0x92,
0x01,0x03,0x06,0x0C,0x08,

// a (97): w=11, h=14
0x2A,0xB4,
0x00,0x80,0x8C,0xCE,0xC6,0x63,0x63,0x63,0xF3,0xFF,
0x1E,
0x1E,0x3F,0x31,0x30,0x30,0x18,0x0C,0x1F,0x3F,0x30,
0x00,

// b (98): w=13, h=19
0x4C,0x13,
0x00,0x00,0x00,0xF8,0xFF,0xC7,0xC0,0x60,0x60,0x60,
0xE0,0xC0,0x80,
0x00,0xF0,0xFF,0x0F,0x01,0x00,0x00,0x00,0x80,0xE0,
0xF8,0x3F,0x0F,
0x07,0x07,0x03,0x03,0x06,0x06,0x06,0x07,0x03,0x01,
0x00,0x00,0x00,

// c (99): w=11, h=14
0x2A,0xB3,
0xC0,0xF0,0x78,0x1C,0x06,0x07,0x03,0x03,0x03,0x0F,
0x0E,
0x0F,0x1F,0x38,0x30,0x30,0x30,0x38,0x1C,0x0C,0x00,
0x00,

// d (100): w=14, h=19
0x4D,0x12,
0x00,0x00,0x00,0x80,0xC0,0xE0,0x60,0x60,0x60,0xC0,
0xC0,0xF8,0x7F,0x07,
0xF0,0xFE,0x1F,0x03,0x01,0x00,0x00,0x00,0x80,0xF0,
0xFF,0x0F,0x00,0x00,
0x01,0x03,0x07,0x06,0x06,0x06,0x03,0x03,0x07,0x07,
0x00,0x00,0x00,0x00,

// e (101): w=12, h=14
0x2B,0xB3,
0xC0,0xF0,0xF8,0xDC,0xCE,0xC6,0xC3,0xC3,0xC3,0xE7,
0xFE,0x3C,
0x0F,0x1F,0x38,0x30,0x30,0x30,0x30,0x18,0x1C,0x0C,
0x00,0x00,

// f (102): w=8, h=19
0xC7,0x00,0x72,
0x00,0x60,0x60,0xF8,0xFE,0x67,0x63,0x03,
0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

// g (103): w=15, h=19
0x4E,0xA7,
0x00,0x00,0x80,0xF0,0xF8,0x1C,0x06,0x06,0x03,0x03,
0x03,0xC7,0xFE,0x7F,0x07,
0x80,0x80,0x0F,0x1F,0x18,0x30,0x30,0x30,0x38,0x98,
0xFE,0x7F,0x07,0x00,0x00,
0x01,0x03,0x03,0x06,0x06,0x06,0x06,0x06,0x03,0x03,
0x01,0x00,0x00,0x00,0x00,

// h (104): w=12, h=19
0x4B,0x13,
0x00,0x00,0x00,0xF0,0xFF,0x8F,0xC0,0x60,0x60,0x60,
0xC0,0xC0,
0x00,0xF0,0xFF,0x0F,0x03,0x01,0x00,0x00,0x00,0xF0,
0xFF,0x0F,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x00,0x00,

// i (105): w=6, h=19
0x45,0x12,
0x00,0x00,0x00,0xE0,0xE7,0x07,
0x00,0xF0,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,

// j (106): w=9, h=24
0x48,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE7,0x07,
0x00,0x00,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,
0xC0,0xC0,0xF0,0x7F,0x0F,0x00,0x00,0x00,0x00,

// k (107): w=12, h=19
0x4B,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x80,0xC0,0xE0,
0x60,0x20,
0x00,0xF0,0xFF,0x0F,0x0C,0x1E,0x7F,0xF3,0xC1,0x00,
0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x07,
0x00,0x00,

// l (108): w=6, h=19
0x45,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x0F,
0x00,0xF0,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,

// m (109): w=18, h=14
0x31,0xB4,
0x00,0x80,0xF8,0x7F,0x0F,0x06,0x02,0x03,0x83,0xFF,
0x7E,0x0C,0x06,0x03,0x03,0x83,0xFF,0x7E,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x38,0x3F,0x07,
0x00,0x00,0x00,0x00,0x38,0x3F,0x07,0x00,

// n (110): w=12, h=14
0x2B,0xB4,
0x00,0x80,0xF8,0x7F,0x1F,0x0C,0x06,0x03,0x03,0x83,
0xFE,0x7E,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x38,0x3F,
0x07,0x00,

// o (111): w=12, h=14
0x2B,0xB3,
0xC0,0xF0,0x78,0x1C,0x06,0x07,0x03,0x03,0x03,0x87,
0xFE,0xFC,
0x0F,0x1F,0x38,0x30,0x30,0x30,0x38,0x18,0x0E,0x07,
0x03,0x00,

// p (112): w=14, h=19
0x4D,0xAD,
0x00,0x00,0x80,0xF8,0x7F,0x0F,0x06,0x06,0x03,0x03,
0x03,0xE7,0xFE,0x3C,
0x80,0xF8,0x7F,0x1F,0x18,0x30,0x30,0x30,0x38,0x1C,
0x0F,0x07,0x01,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// q (113): w=13, h=19
0x4C,0xB3,
0x80,0xF0,0xF8,0x1C,0x06,0x07,0x03,0x03,0x03,0x86,
0xFE,0x7F,0x03,
0x0F,0x1F,0x38,0x30,0x30,0x30,0x18,0x98,0xFC,0x7F,
0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x00,
0x00,0x00,0x00,

// r (114): w=9, h=14
0x28,0xB2,
0x00,0x80,0xF8,0x7F,0x1F,0x0C,0x06,0x03,0x03,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

// s (115): w=12, h=14
0x2B,0xAD,
0x00,0x00,0x38,0x7E,0x66,0x63,0x63,0xC3,0xC3,0xC3,
0x8E,0x0E,
0x1C,0x1C,0x38,0x30,0x30,0x30,0x30,0x38,0x18,0x0F,
0x07,0x00,

// t (116): w=7, h=18
0x46,0x38,
0x00,0x30,0x30,0xF8,0xFF,0x37,0x30,
0xC0,0xF8,0x3F,0x07,0x00,0x00,0x00,
0x01,0x03,0x03,0x03,0x00,0x00,0x00,

// u (117): w=12, h=14
0x2B,0xB9,
0x80,0xF8,0x7F,0x07,0x00,0x00,0x00,0x00,0x80,0xF8,
0x7F,0x07,
0x1F,0x3F,0x30,0x30,0x30,0x18,0x08,0x3C,0x3F,0x07,
0x00,0x00,

// v (118): w=11, h=14
0xAA,0x05,0x83,
0xFF,0xFF,0x00,0x00,0x00,0x00,0xC0,0xF0,0x3C,0x0F,
0x03,
0x00,0x3F,0x3F,0x38,0x1C,0x0F,0x03,0x00,0x00,0x00,
0x00,

// w (119): w=17, h=14
0x30,0xB8,
0xFF,0xFF,0x00,0x00,0xC0,0xF0,0x3C,0x0E,0xFF,0xFF,
0x00,0x00,0xC0,0xF0,0x3C,0x0F,0x03,
0x01,0x3F,0x3E,0x0F,0x03,0x00,0x00,0x00,0x03,0x3F,
0x3C,0x0F,0x07,0x00,0x00,0x00,0x00,

// x (120): w=14, h=14
0xAD,0x05,0x52,
0x00,0x00,0x00,0x03,0x0F,0xBC,0xF0,0xE0,0x70,0x38,
0x1C,0x0E,0x07,0x03,
0x30,0x38,0x1C,0x0E,0x07,0x03,0x01,0x03,0x0F,0x3C,
0x30,0x00,0x00,0x00,

// y (121): w=14, h=19
0x4D,0xAC,
0x00,0x00,0x0F,0x7F,0xF8,0x80,0x00,0x00,0x80,0xE0,
0xF0,0x3C,0x0F,0x07,
0x00,0x00,0x00,0x80,0xC3,0xFF,0x3C,0x1E,0x07,0x01,
0x00,0x00,0x00,0x00,
0x06,0x06,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// z (122): w=13, h=14
0x2C,0xAC,
0x00,0x00,0x00,0x03,0x03,0x83,0xC3,0x63,0x33,0x1B,
0x0F,0x07,0x03,
0x30,0x38,0x3C,0x36,0x33,0x31,0x30,0x30,0x30,0x30,
0x00,0x00,0x00,

// braceleft (123): w=10, h=24
0xC9,0x00,0x71,
0x00,0x00,0x00,0xC0,0xF8,0x3C,0x06,0x03,0x01,0x01,
0x10,0xB8,0xEC,0x07,0x03,0x00,0x00,0x00,0x00,0x00,
0x38,0x7F,0xC7,0x80,0x80,0x00,0x00,0x00,0x00,0x00,

// bar (124): w=7, h=24
0x46,0x0C,
0x00,0x00,0x00,0x00,0xE0,0x7E,0x07,
0x00,0x00,0xE0,0x7E,0x07,0x00,0x00,
0xF0,0x3E,0x07,0x00,0x00,0x00,0x00,

// braceright (125): w=10, h=24
0x49,0x02,
0x00,0x00,0x00,0x00,0x00,0x01,0xC3,0xFE,0x3C,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xE7,0x2F,0x38,0x10,
0x80,0x80,0xC0,0x78,0x3F,0x07,0x00,0x00,0x00,0x00,

// asciitilde (126): w=11, h=4
0x8A,0x0A,0x75,
0x0C,0x0E,0x03,0x03,0x07,0x06,0x0E,0x0C,0x0C,0x07,
0x03

};
// 3289 bytes
// 3479 bytes with FAST_FONT_INDEX