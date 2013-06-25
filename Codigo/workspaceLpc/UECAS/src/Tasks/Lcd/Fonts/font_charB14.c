#include "fonts.h"			// for FAST_FONT_INDEX

// charB14 = "Bitstream Charter Black"

const unsigned char font_charB14[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCE,0x00,
0xD5,0x00,
0xF1,0x00,
0x07,0x01,
0x2B,0x01,
0x4B,0x01,
0x51,0x01,
0x61,0x01,
0x71,0x01,
0x7B,0x01,
0x95,0x01,
0x9C,0x01,
0xA4,0x01,
0xAB,0x01,
0xC1,0x01,
0xD9,0x01,
0xED,0x01,
0x03,0x02,
0x1B,0x02,
0x33,0x02,
0x49,0x02,
0x61,0x02,
0x79,0x02,
0x91,0x02,
0xA9,0x02,
0xB3,0x02,
0xBD,0x02,
0xD5,0x02,
0xE2,0x02,
0xFA,0x02,
0x0E,0x03,
0x2E,0x03,
0x4C,0x03,
0x64,0x03,
0x7C,0x03,
0x98,0x03,
0xB0,0x03,
0xC6,0x03,
0xE2,0x03,
0x00,0x04,
0x0C,0x04,
0x20,0x04,
0x3C,0x04,
0x54,0x04,
0x78,0x04,
0x94,0x04,
0xB2,0x04,
0xCA,0x04,
0xF6,0x04,
0x14,0x05,
0x2A,0x05,
0x46,0x05,
0x62,0x05,
0x82,0x05,
0xAC,0x05,
0xCA,0x05,
0xE6,0x05,
0xFC,0x05,
0x0A,0x06,
0x20,0x06,
0x2E,0x06,
0x3C,0x06,
0x49,0x06,
0x4F,0x06,
0x67,0x06,
0x7F,0x06,
0x91,0x06,
0xA9,0x06,
0xBD,0x06,
0xCF,0x06,
0xE7,0x06,
0xFF,0x06,
0x0B,0x07,
0x23,0x07,
0x3B,0x07,
0x47,0x07,
0x6B,0x07,
0x83,0x07,
0x9B,0x07,
0xB3,0x07,
0xCB,0x07,
0xDD,0x07,
0xEF,0x07,
0xFF,0x07,
0x17,0x08,
0x2F,0x08,
0x53,0x08,
0x6B,0x08,
0x83,0x08,
0x97,0x08,
0xA9,0x08,
0xB2,0x08,
0xC4,0x08,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0D,0x4A,
0x00,

// exclam (33): w=4, h=14
0x23,0x10,
0x1E,0xFF,0xFF,0x1F,
0x18,0x3D,0x3D,0x18,

// quotedbl (34): w=5, h=6
0x04,0x2F,
0x0F,0x3F,0x00,0x0F,0x3F,

// numbersign (35): w=13, h=14
0x2C,0x2F,
0x00,0x10,0x10,0x90,0xF0,0x3C,0x17,0x91,0xF0,0x3C,
0x1F,0x11,0x10,
0x01,0x21,0x3D,0x0F,0x01,0x21,0x3D,0x0F,0x01,0x01,
0x01,0x01,0x00,

// dollar (36): w=10, h=16
0x29,0x0F,
0x3C,0x7E,0xFF,0xF1,0xFF,0xE1,0xC1,0xCF,0x8F,0x00,
0x3C,0x3C,0x20,0x20,0xFF,0x21,0x33,0x3F,0x1F,0x0F,

// percent (37): w=17, h=13
0x30,0x2F,
0x3C,0xFF,0xC3,0x81,0xC3,0xFF,0x3C,0x80,0xE0,0x30,
0x9C,0xE7,0x63,0x20,0x60,0xE0,0x80,
0x00,0x00,0x00,0x00,0x18,0x0C,0x07,0x01,0x00,0x00,
0x07,0x1F,0x18,0x10,0x18,0x1F,0x07,

// ampersand (38): w=15, h=14
0x2E,0x0E,
0x00,0x1C,0xBE,0xFF,0xFF,0xF1,0xC1,0xE3,0xFF,0x3E,
0x1E,0x40,0xC0,0x40,0x40,
0x0E,0x1F,0x3F,0x3F,0x38,0x31,0x33,0x37,0x1F,0x1F,
0x3E,0x3E,0x31,0x20,0x20,

// quoteright (39): w=4, h=6
0x03,0x4F,
0x27,0x37,0x1F,0x0E,

// parenleft (40): w=7, h=16
0x26,0x2F,
0xF0,0xFC,0xFE,0x0E,0x03,0x03,0x01,
0x0F,0x3F,0x7F,0x70,0xC0,0x80,0x80,

// parenright (41): w=7, h=16
0x26,0x2F,
0x01,0x01,0x03,0x0E,0xFE,0xFC,0xF0,
0x80,0xC0,0xC0,0x70,0x7F,0x3F,0x0F,

// asterisk (42): w=8, h=7
0x07,0x2F,
0x04,0x2C,0x68,0x3E,0x3F,0x68,0x2C,0x04,

// plus (43): w=12, h=12
0x2B,0x56,
0x60,0x60,0x60,0x60,0x60,0xFF,0xFF,0x60,0x60,0x60,
0x60,0x60,
0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=4, h=7
0x83,0x0B,0x56,
0x67,0x27,0x3F,0x1E,

// hyphen (45): w=5, h=2
0x84,0x09,0x55,
0x03,0x03,0x03,0x03,0x03,

// period (46): w=4, h=4
0x83,0x0A,0x56,
0x06,0x0F,0x0F,0x06,

// slash (47): w=10, h=16
0x29,0x02,
0x00,0x00,0x00,0x00,0x80,0xE0,0x78,0x1C,0x07,0x01,
0x80,0xE0,0x78,0x1E,0x07,0x01,0x00,0x00,0x00,0x00,

// zero (48): w=11, h=14
0x2A,0x0E,
0xF0,0xFC,0xFE,0xFF,0x03,0x01,0x03,0xFF,0xFE,0xFC,
0xF0,
0x03,0x0F,0x1F,0x3F,0x30,0x20,0x30,0x3F,0x1F,0x0F,
0x03,

// one (49): w=9, h=14
0x28,0x15,
0x04,0x06,0x06,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x20,0x20,0x3F,0x3F,0x3F,0x20,0x20,0x20,

// two (50): w=10, h=14
0x29,0x0F,
0x0C,0x1E,0x1F,0x1F,0x01,0xC3,0xFF,0xFF,0x7E,0x3C,
0x38,0x38,0x3C,0x3E,0x3B,0x3B,0x39,0x38,0x3C,0x3E,

// three (51): w=11, h=14
0x2A,0x0E,
0x04,0x0E,0x0F,0xCF,0xC1,0xC1,0xF7,0xBF,0xBF,0x1E,
0x00,
0x18,0x1C,0x3C,0x38,0x20,0x20,0x31,0x3F,0x1F,0x1F,
0x0E,

// four (52): w=11, h=15
0x2A,0x0E,
0x00,0x80,0xE0,0x70,0x38,0x0E,0xFF,0xFF,0xFF,0x00,
0x00,
0x03,0x03,0x02,0x02,0x02,0x02,0x7F,0x7F,0x7F,0x02,
0x02,

// five (53): w=10, h=14
0x29,0x0F,
0xFF,0x7F,0x67,0x67,0x67,0xE7,0xE7,0xC7,0xC7,0x80,
0x3C,0x3C,0x30,0x20,0x20,0x30,0x3F,0x1F,0x1F,0x07,

// six (54): w=11, h=14
0x2A,0x0E,
0xE0,0xF8,0xFC,0xFE,0x4E,0x63,0xE1,0xE1,0xC1,0xC0,
0x00,
0x07,0x1F,0x1F,0x3F,0x30,0x20,0x30,0x3F,0x1F,0x1F,
0x0F,

// seven (55): w=11, h=15
0x2A,0x0E,
0x1F,0x1F,0x07,0x07,0x07,0x07,0xC7,0xF7,0x3F,0x0F,
0x07,
0x00,0x40,0x60,0x78,0x1E,0x07,0x03,0x00,0x00,0x00,
0x00,

// eight (56): w=11, h=14
0x2A,0x0E,
0x00,0x3E,0xFF,0xFF,0xE1,0xE1,0xE3,0xFF,0xBE,0x9E,
0x00,
0x0E,0x1F,0x3F,0x30,0x20,0x21,0x33,0x3F,0x1F,0x1F,
0x0F,

// nine (57): w=11, h=14
0x2A,0x0E,
0x38,0xFE,0xFE,0xFF,0xC3,0x81,0x83,0xFF,0xFE,0xFE,
0xF8,
0x00,0x10,0x30,0x31,0x11,0x19,0x0E,0x07,0x03,0x01,
0x00,

// colon (58): w=4, h=10
0x23,0x95,
0x86,0xCF,0xCF,0x86,
0x01,0x03,0x03,0x01,

// semicolon (59): w=4, h=14
0x23,0x95,
0x06,0x8F,0x8F,0x06,
0x33,0x13,0x1F,0x07,

// less (60): w=11, h=10
0x2A,0x97,
0x30,0x30,0x78,0x78,0x48,0xCC,0x84,0x86,0x86,0x02,
0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x03,

// equal (61): w=11, h=6
0x0A,0xDC,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x33,

// greater (62): w=11, h=10
0x2A,0x9C,
0x03,0x02,0x86,0x86,0x84,0xCC,0x48,0x78,0x78,0x30,
0x30,
0x03,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// question (63): w=9, h=14
0x28,0x09,
0x0E,0x0F,0x81,0xC1,0xE3,0x7F,0x7F,0x3E,0x1C,
0x00,0x18,0x3D,0x3D,0x18,0x00,0x00,0x00,0x00,

// at (64): w=15, h=16
0x2E,0x35,
0xC0,0xF0,0x38,0x0C,0x86,0xE2,0x21,0x11,0x11,0xF1,
0xF1,0x32,0x06,0x0C,0xF0,
0x07,0x1F,0x38,0x60,0x47,0xCF,0x8C,0x84,0x82,0x8F,
0x8F,0x4C,0x44,0x03,0x00,

// A (65): w=14, h=14
0x2D,0x07,
0x00,0x00,0x00,0x80,0xF0,0x3E,0x0F,0x3F,0xFF,0xFC,
0xE0,0x00,0x00,0x00,
0x20,0x30,0x3C,0x2F,0x21,0x01,0x01,0x01,0x21,0x2F,
0x3F,0x3F,0x38,0x20,

// B (66): w=11, h=14
0x2A,0x0F,
0x01,0xFF,0xFF,0xFF,0x41,0x41,0xFF,0xFF,0xBF,0x9E,
0x00,
0x20,0x3F,0x3F,0x3F,0x20,0x20,0x30,0x3F,0x3F,0x1F,
0x0F,

// C (67): w=11, h=14
0x2A,0x0F,
0xF0,0xFC,0xFE,0xFE,0x0F,0x03,0x01,0x01,0x01,0x0F,
0x0F,
0x03,0x0F,0x1F,0x1F,0x3C,0x30,0x20,0x20,0x20,0x3C,
0x3C,

// D (68): w=13, h=14
0x2C,0x0F,
0x01,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x03,0x0F,0xFE,
0xFE,0xFC,0xF0,
0x20,0x3F,0x3F,0x3F,0x20,0x20,0x30,0x30,0x3C,0x1F,
0x1F,0x0F,0x03,

// E (69): w=11, h=14
0x2A,0x0F,
0x01,0xFF,0xFF,0xFF,0x41,0x41,0x41,0xF1,0x07,0x07,
0x00,
0x20,0x3F,0x3F,0x3F,0x20,0x20,0x20,0x21,0x20,0x3C,
0x3C,

// F (70): w=10, h=14
0x29,0x0F,
0x01,0xFF,0xFF,0xFF,0x81,0x81,0x81,0xE1,0x0F,0x0F,
0x20,0x3F,0x3F,0x3F,0x20,0x20,0x00,0x03,0x00,0x00,

// G (71): w=13, h=14
0x2C,0x0F,
0xF0,0xFC,0xFE,0xFE,0x0F,0x03,0x03,0x81,0x81,0x81,
0x8F,0x8F,0x80,
0x03,0x0F,0x1F,0x1F,0x3C,0x38,0x30,0x20,0x20,0x3F,
0x3F,0x1F,0x00,

// H (72): w=14, h=14
0x2D,0x0F,
0x01,0xFF,0xFF,0xFF,0x41,0x40,0x40,0x40,0x40,0x41,
0xFF,0xFF,0xFF,0x01,
0x20,0x3F,0x3F,0x3F,0x20,0x00,0x00,0x00,0x00,0x20,
0x3F,0x3F,0x3F,0x20,

// I (73): w=5, h=14
0x24,0x0F,
0x01,0xFF,0xFF,0xFF,0x01,
0x20,0x3F,0x3F,0x3F,0x20,

// J (74): w=9, h=14
0x28,0x09,
0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0xFF,0x01,
0x3C,0x3C,0x20,0x20,0x30,0x3F,0x1F,0x0F,0x00,

// K (75): w=13, h=14
0x2C,0x0E,
0x01,0xFF,0xFF,0xFF,0x81,0xE0,0xF0,0xD9,0x0F,0x07,
0x03,0x01,0x00,
0x20,0x3F,0x3F,0x3F,0x20,0x03,0x07,0x1F,0x3F,0x3C,
0x38,0x20,0x20,

// L (76): w=11, h=14
0x2A,0x0E,
0x01,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,
0x20,0x3F,0x3F,0x3F,0x20,0x20,0x20,0x20,0x38,0x3C,
0x3C,

// M (77): w=17, h=14
0x30,0x0F,
0x01,0xFF,0xFF,0x07,0x3F,0xFF,0xFC,0xE0,0x00,0x80,
0xF0,0x3E,0x07,0xFF,0xFF,0xFF,0x01,
0x20,0x3F,0x3F,0x20,0x20,0x01,0x0F,0x3F,0x3F,0x1F,
0x01,0x00,0x20,0x3F,0x3F,0x3F,0x20,

// N (78): w=13, h=14
0x2C,0x0F,
0x01,0xFF,0xFF,0x0F,0x3F,0xFC,0xF8,0xE0,0x80,0x01,
0xFF,0xFF,0x01,
0x20,0x3F,0x3F,0x20,0x00,0x00,0x03,0x0F,0x1F,0x3E,
0x3F,0x3F,0x00,

// O (79): w=14, h=14
0x2D,0x0F,
0xF0,0xFC,0xFE,0xFE,0x0F,0x03,0x01,0x01,0x03,0x07,
0xFE,0xFE,0xFC,0xF0,
0x03,0x0F,0x1F,0x1F,0x3C,0x30,0x20,0x20,0x30,0x38,
0x1F,0x1F,0x0F,0x03,

// P (80): w=11, h=14
0x2A,0x0F,
0x01,0xFF,0xFF,0xFF,0x01,0x83,0xC7,0xFF,0xFF,0xFE,
0x7C,
0x20,0x3F,0x3F,0x3F,0x21,0x01,0x01,0x01,0x01,0x00,
0x00,

// Q (81): w=14, h=18
0x4D,0x0F,
0xF0,0xFC,0xFE,0xFE,0x0F,0x03,0x01,0x01,0x03,0x07,
0xFE,0xFE,0xFC,0xF0,
0x03,0x0F,0x1F,0x1F,0x3C,0x70,0xE0,0xE0,0xF0,0xBC,
0x1F,0x1F,0x0F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x03,
0x03,0x03,0x03,0x00,

// R (82): w=14, h=14
0x2D,0x0E,
0x01,0xFF,0xFF,0xFF,0x81,0x83,0xC3,0xFF,0x7F,0x7E,
0x3C,0x00,0x00,0x00,
0x20,0x3F,0x3F,0x3F,0x20,0x01,0x07,0x1F,0x3F,0x3E,
0x3C,0x30,0x20,0x20,

// S (83): w=10, h=14
0x29,0x0F,
0x3C,0x7E,0xFF,0xF3,0xE1,0xE1,0xC1,0xC1,0x8F,0x0F,
0x3C,0x3C,0x20,0x20,0x21,0x21,0x33,0x3F,0x1F,0x0F,

// T (84): w=13, h=14
0x2C,0x08,
0x0F,0x0F,0x01,0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,
0x01,0x0F,0x0F,
0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x3F,0x20,0x20,
0x00,0x00,0x00,

// U (85): w=13, h=14
0x2C,0x0F,
0x01,0xFF,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x01,
0xFF,0xFF,0x01,
0x00,0x0F,0x1F,0x3F,0x38,0x30,0x30,0x30,0x30,0x18,
0x1F,0x07,0x00,

// V (86): w=15, h=14
0x2E,0x07,
0x01,0x03,0x0F,0x7F,0xFF,0xFD,0xE1,0x00,0x00,0x80,
0xF1,0x7F,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0x03,0x1F,0x3F,0x3F,0x3C,0x1F,
0x03,0x00,0x00,0x00,0x00,

// W (87): w=20, h=14
0x33,0x08,
0x01,0x01,0x1F,0xFF,0xFF,0xF9,0x00,0x80,0xF8,0x1F,
0x3F,0xFF,0xFC,0xC0,0x00,0xE1,0xFF,0x1F,0x01,0x01,
0x00,0x00,0x00,0x01,0x0F,0x3F,0x3F,0x0F,0x01,0x00,
0x00,0x01,0x0F,0x3F,0x3E,0x0F,0x00,0x00,0x00,0x00,

// X (88): w=14, h=14
0x2D,0x08,
0x01,0x01,0x07,0x0F,0x3F,0xFF,0xF9,0xE0,0xF0,0x1D,
0x0F,0x03,0x01,0x01,
0x20,0x20,0x38,0x3C,0x2E,0x03,0x01,0x27,0x2F,0x3F,
0x3E,0x38,0x20,0x20,

// Y (89): w=13, h=14
0x2C,0x08,
0x01,0x03,0x0F,0x3F,0xFF,0xF9,0xE0,0xC0,0x71,0x1F,
0x0F,0x03,0x01,
0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x3F,0x20,0x20,
0x00,0x00,0x00,

// Z (90): w=10, h=14
0x29,0x0F,
0x0F,0x0F,0x01,0xC1,0xF1,0xFD,0xFF,0x3F,0x0F,0x03,
0x30,0x3C,0x3F,0x3F,0x27,0x21,0x20,0x20,0x3C,0x3C,

// bracketleft (91): w=6, h=16
0x25,0x3B,
0xFF,0xFF,0xFF,0x01,0x01,0x01,
0xFF,0xFF,0xFF,0x80,0x80,0x80,

// backslash (92): w=10, h=16
0x29,0x02,
0x01,0x07,0x1C,0x70,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x1E,0x78,0xE0,0x80,

// bracketright (93): w=6, h=16
0x25,0x31,
0x01,0x01,0x01,0xFF,0xFF,0xFF,
0x80,0x80,0x80,0xFF,0xFF,0xFF,

// asciicircum (94): w=11, h=5
0x8A,0x01,0x89,
0x10,0x18,0x0C,0x06,0x03,0x01,0x03,0x06,0x0C,0x18,
0x10,

// underscore (95): w=10, h=2
0x89,0x11,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// quoteleft (96): w=4, h=6
0x03,0x4F,
0x1C,0x3E,0x3B,0x19,

// a (97): w=11, h=10
0x2A,0x8E,
0xC4,0xE6,0xE7,0x31,0x11,0x13,0xFF,0xFF,0xFE,0x00,
0x00,
0x01,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x03,0x02,
0x02,

// b (98): w=11, h=14
0x2A,0x0F,
0x02,0xFF,0xFF,0xFF,0x20,0x30,0x30,0x70,0xF0,0xE0,
0xC0,
0x00,0x3F,0x3F,0x3F,0x20,0x20,0x20,0x38,0x3F,0x1F,
0x07,

// c (99): w=8, h=10
0x27,0x8F,
0xF8,0xFE,0xFE,0x83,0x01,0x0F,0x0F,0x0E,
0x00,0x01,0x03,0x03,0x02,0x02,0x02,0x03,

// d (100): w=11, h=14
0x2A,0x0F,
0xC0,0xE0,0xF0,0x30,0x10,0x12,0x12,0xFF,0xFF,0xFF,
0x00,
0x0F,0x1F,0x3F,0x38,0x30,0x30,0x10,0x3F,0x3F,0x3F,
0x20,

// e (101): w=9, h=10
0x28,0x8F,
0xF8,0xFE,0xFF,0x93,0x11,0x13,0x1F,0x1E,0x1C,
0x00,0x01,0x03,0x03,0x02,0x02,0x02,0x02,0x03,

// f (102): w=8, h=14
0x27,0x0C,
0x10,0xFC,0xFE,0xFE,0x11,0x13,0x17,0x02,
0x20,0x3F,0x3F,0x3F,0x20,0x20,0x00,0x00,

// g (103): w=11, h=15
0x2A,0x8E,
0x3C,0x3E,0xFF,0x63,0x41,0x63,0x7F,0x3E,0x1E,0x02,
0x02,
0x3C,0x7F,0x73,0x43,0x43,0x47,0x67,0x3E,0x3E,0x1C,
0x00,

// h (104): w=11, h=14
0x2A,0x0F,
0x02,0xFF,0xFF,0xFF,0x20,0x30,0x30,0xF0,0xF0,0xE0,
0x00,
0x20,0x3F,0x3F,0x3F,0x20,0x00,0x20,0x3F,0x3F,0x3F,
0x20,

// i (105): w=5, h=14
0x24,0x0F,
0x20,0xE7,0xF7,0xF7,0x00,
0x20,0x3F,0x3F,0x3F,0x20,

// j (106): w=7, h=19
0xC6,0x00,0x27,
0x00,0x00,0x00,0x20,0xE7,0xF7,0xF7,
0x00,0x80,0x00,0x00,0xFF,0xFF,0xFF,
0x03,0x07,0x07,0x04,0x03,0x03,0x00,

// k (107): w=11, h=14
0x2A,0x0E,
0x02,0xFE,0xFF,0xFF,0x00,0x80,0xD0,0x70,0x30,0x10,
0x00,
0x20,0x3F,0x3F,0x3F,0x21,0x07,0x1F,0x3F,0x3C,0x30,
0x20,

// l (108): w=5, h=14
0x24,0x0F,
0x02,0xFE,0xFF,0xFF,0x00,
0x20,0x3F,0x3F,0x3F,0x20,

// m (109): w=17, h=10
0x30,0x8F,
0x02,0xFE,0xFF,0xFF,0x02,0x03,0x07,0xFF,0xFF,0xFE,
0x02,0x03,0x07,0xFF,0xFF,0xFE,0x00,
0x02,0x03,0x03,0x03,0x02,0x00,0x02,0x03,0x03,0x03,
0x02,0x00,0x02,0x03,0x03,0x03,0x02,

// n (110): w=11, h=10
0x2A,0x8F,
0x02,0xFF,0xFF,0xFF,0x02,0x03,0x03,0xFF,0xFF,0xFE,
0x00,
0x02,0x03,0x03,0x03,0x02,0x00,0x02,0x03,0x03,0x03,
0x02,

// o (111): w=11, h=10
0x2A,0x8F,
0xFC,0xFE,0xFF,0x03,0x01,0x01,0x01,0x03,0xFF,0xFE,
0xFC,
0x00,0x01,0x03,0x03,0x02,0x02,0x02,0x03,0x03,0x01,
0x00,

// p (112): w=11, h=15
0x2A,0x8F,
0x02,0xFE,0xFF,0xFF,0x02,0x02,0x03,0x87,0xFF,0xFE,
0x7C,
0x40,0x7F,0x7F,0x7F,0x42,0x42,0x02,0x03,0x03,0x01,
0x00,

// q (113): w=11, h=15
0x2A,0x8F,
0xF8,0xFE,0xFE,0x87,0x01,0x01,0x01,0xFF,0xFF,0xFF,
0x00,
0x00,0x01,0x03,0x03,0x03,0x43,0x41,0x7F,0x7F,0x7F,
0x40,

// r (114): w=8, h=10
0x27,0x8E,
0x02,0xFF,0xFF,0xFF,0x04,0x06,0x0F,0x07,
0x02,0x03,0x03,0x03,0x02,0x02,0x00,0x00,

// s (115): w=8, h=10
0x27,0x8F,
0xCE,0x1F,0x3F,0x39,0x79,0xF1,0xF7,0xE7,
0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x01,

// t (116): w=7, h=12
0x26,0x4E,
0x04,0xFE,0xFF,0xFF,0x04,0x04,0x04,
0x00,0x07,0x0F,0x0F,0x0C,0x0C,0x04,

// u (117): w=11, h=10
0x2A,0x8F,
0x02,0xFF,0xFF,0xFF,0x00,0x00,0x02,0xFF,0xFF,0xFF,
0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x03,
0x02,

// v (118): w=11, h=10
0x2A,0x87,
0x01,0x03,0x1F,0xFF,0xF9,0xC0,0xE0,0x3D,0x0F,0x03,
0x01,
0x00,0x00,0x00,0x00,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,

// w (119): w=17, h=10
0x30,0x88,
0x01,0x03,0x1F,0xFF,0xFF,0xF1,0xC0,0xFC,0x07,0xFF,
0xFE,0xF0,0xC0,0xF9,0x1F,0x03,0x01,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,
0x03,0x03,0x03,0x00,0x00,0x00,0x00,

// x (120): w=11, h=10
0x2A,0x88,
0x01,0x03,0x87,0xDF,0x7F,0x78,0xF8,0xEF,0xC3,0x01,
0x01,
0x02,0x03,0x03,0x02,0x00,0x00,0x03,0x03,0x03,0x03,
0x02,

// y (121): w=11, h=15
0x2A,0x88,
0x01,0x03,0x1F,0xFF,0xFF,0xF1,0x80,0xF1,0x1F,0x07,
0x01,
0x30,0x78,0x70,0x60,0x33,0x1F,0x07,0x00,0x00,0x00,
0x00,

// z (122): w=9, h=10
0x28,0x8F,
0x07,0xC7,0xE1,0xF9,0xFD,0x3F,0x1F,0xC7,0xC1,
0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x03,0x03,

// braceleft (123): w=8, h=16
0x27,0x2F,
0x80,0x80,0xC0,0x7E,0x7F,0x3F,0x03,0x01,
0x00,0x00,0x01,0x7F,0xFF,0xFE,0xC0,0x80,

// bar (124): w=2, h=19
0xC1,0x00,0x89,
0xFF,0xFF,
0xFF,0xFF,
0x07,0x07,

// braceright (125): w=8, h=16
0x27,0x2F,
0x01,0x01,0x3F,0x7F,0x7E,0xC0,0x80,0x80,
0x80,0xC0,0xFE,0xFF,0x7F,0x01,0x00,0x00,

// c0126 (126): w=11, h=2
0x8A,0x02,0x89,
0x02,0x02,0x01,0x01,0x01,0x03,0x02,0x02,0x02,0x01,
0x01

};
// 2068 bytes
// 2258 bytes with FAST_FONT_INDEX
