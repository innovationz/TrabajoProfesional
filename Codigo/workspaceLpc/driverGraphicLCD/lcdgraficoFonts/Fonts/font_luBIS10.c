#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_luBIS10[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xD0,0x00,
0xD8,0x00,
0xEC,0x00,
0xFE,0x00,
0x18,0x01,
0x30,0x01,
0x35,0x01,
0x41,0x01,
0x4D,0x01,
0x54,0x01,
0x5E,0x01,
0x65,0x01,
0x6A,0x01,
0x70,0x01,
0x89,0x01,
0x9B,0x01,
0xA7,0x01,
0xBB,0x01,
0xCD,0x01,
0xDF,0x01,
0xF3,0x01,
0x07,0x02,
0x19,0x02,
0x2D,0x02,
0x41,0x02,
0x47,0x02,
0x53,0x02,
0x5D,0x02,
0x68,0x02,
0x72,0x02,
0x82,0x02,
0x96,0x02,
0xAC,0x02,
0xC0,0x02,
0xD6,0x02,
0xEE,0x02,
0x02,0x03,
0x16,0x03,
0x2C,0x03,
0x44,0x03,
0x50,0x03,
0x62,0x03,
0x78,0x03,
0x8A,0x03,
0xA6,0x03,
0xBE,0x03,
0xD4,0x03,
0xE8,0x03,
0x00,0x04,
0x14,0x04,
0x26,0x04,
0x3C,0x04,
0x52,0x04,
0x68,0x04,
0x82,0x04,
0x9A,0x04,
0xAE,0x04,
0xC4,0x04,
0xD2,0x04,
0xDE,0x04,
0xEC,0x04,
0xF6,0x04,
0xFF,0x04,
0x05,0x05,
0x10,0x05,
0x24,0x05,
0x2D,0x05,
0x41,0x05,
0x4B,0x05,
0x5E,0x05,
0x72,0x05,
0x86,0x05,
0x92,0x05,
0xA4,0x05,
0xB8,0x05,
0xC4,0x05,
0xD3,0x05,
0xDE,0x05,
0xE8,0x05,
0xFC,0x05,
0x10,0x06,
0x1A,0x06,
0x23,0x06,
0x2F,0x06,
0x3A,0x06,
0x45,0x06,
0x53,0x06,
0x5E,0x06,
0x74,0x06,
0x7F,0x06,
0x8D,0x06,
0x97,0x06,
0xA5,0x06,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x09,0x49,
0x00,

// exclam (33): w=5, h=10
0x24,0x0D,
0x00,0x70,0x7F,0x1F,0x03,
0x02,0x02,0x02,0x00,0x00,

// quotedbl (34): w=6, h=4
0x05,0x13,
0x0F,0x0F,0x00,0x00,0x0F,0x0F,

// numbersign (35): w=9, h=10
0x28,0x0E,
0x40,0xC8,0x68,0x58,0xCE,0x69,0x58,0x4E,0x09,
0x02,0x01,0x00,0x02,0x01,0x00,0x00,0x00,0x00,

// dollar (36): w=8, h=12
0x27,0x14,
0x00,0x00,0x1E,0xFB,0x3B,0xF7,0xE3,0x03,
0x03,0x03,0x3F,0x3F,0x03,0x03,0x01,0x00,

// percent (37): w=12, h=10
0x2B,0x0E,
0x0E,0x1F,0x11,0x9F,0x4E,0x20,0x10,0xC8,0x64,0x22,
0xE1,0xC1,
0x02,0x02,0x01,0x00,0x00,0x00,0x00,0x01,0x03,0x02,
0x03,0x01,

// ampersand (38): w=11, h=10
0x2A,0x0D,
0xC0,0xE0,0x30,0x1E,0x1F,0x71,0x99,0x0D,0xC6,0x60,
0x30,
0x01,0x03,0x03,0x02,0x02,0x02,0x03,0x03,0x03,0x02,
0x00,

// quotesingle (39): w=3, h=4
0x02,0x13,
0x07,0x0F,0x03,

// parenleft (40): w=5, h=13
0x24,0x0D,
0xE0,0xF8,0x3C,0x06,0x03,
0x07,0x0F,0x18,0x00,0x00,

// parenright (41): w=5, h=13
0x24,0x0D,
0x00,0x00,0x83,0xFE,0xFC,
0x18,0x0C,0x07,0x03,0x00,

// asterisk (42): w=5, h=5
0x04,0x13,
0x0C,0x1E,0x03,0x1D,0x06,

// plus (43): w=8, h=8
0x07,0x54,
0x08,0x08,0x08,0xF8,0x0F,0x08,0x08,0x08,

// comma (44): w=4, h=5
0x83,0x08,0x46,
0x12,0x1B,0x0F,0x07,

// hyphen (45): w=3, h=1
0x02,0xAE,
0x01,0x01,0x01,

// period (46): w=3, h=2
0x82,0x08,0x56,
0x03,0x03,0x03,

// slash (47): w=11, h=13
0xAA,0x00,0x42,
0x00,0x00,0x00,0x00,0x80,0x40,0x30,0x08,0x06,0x01,
0x01,
0x10,0x10,0x0C,0x02,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,

// zero (48): w=8, h=10
0x27,0x14,
0xF0,0xFC,0x1E,0x03,0x01,0xE1,0xFF,0x3C,
0x00,0x03,0x02,0x02,0x03,0x01,0x00,0x00,

// one (49): w=5, h=10
0x24,0x1C,
0x01,0xF9,0xFF,0x7F,0x03,
0x03,0x03,0x03,0x00,0x00,

// two (50): w=9, h=10
0x28,0x0E,
0x00,0x00,0x83,0xC1,0x61,0x21,0x1B,0x1F,0x0E,
0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x00,

// three (51): w=8, h=10
0x27,0x14,
0x00,0x00,0x11,0x11,0x11,0xF9,0xEF,0x06,
0x03,0x02,0x02,0x02,0x03,0x03,0x01,0x00,

// four (52): w=8, h=10
0x27,0x0F,
0x40,0x60,0x70,0x48,0xC4,0xFE,0x7F,0x43,
0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,

// five (53): w=9, h=10
0x28,0x13,
0x00,0x08,0x0F,0x09,0x19,0xF9,0xF1,0xE1,0x01,
0x03,0x02,0x02,0x02,0x02,0x03,0x01,0x00,0x00,

// six (54): w=9, h=10
0x28,0x13,
0xF0,0xFC,0x1E,0x0F,0x0B,0x09,0xF9,0xF1,0x03,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00,0x00,

// seven (55): w=8, h=10
0x27,0x19,
0x01,0x81,0xE1,0x71,0x19,0x0D,0x03,0x01,
0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=9, h=10
0x28,0x0E,
0xC0,0xE0,0x6E,0x3B,0x39,0x31,0x79,0xEF,0x06,
0x01,0x03,0x02,0x02,0x02,0x02,0x01,0x01,0x00,

// nine (57): w=9, h=10
0x28,0x0E,
0x00,0x3C,0x7E,0x43,0x41,0xC1,0xE3,0xFE,0x3C,
0x03,0x02,0x02,0x02,0x03,0x01,0x01,0x00,0x00,

// colon (58): w=4, h=7
0x03,0x6E,
0x60,0x63,0x63,0x03,

// semicolon (59): w=5, h=10
0x24,0x68,
0x40,0xE2,0xE3,0x63,0x03,
0x02,0x03,0x01,0x00,0x00,

// less (60): w=8, h=8
0x07,0x4F,
0x10,0x18,0x38,0x24,0x44,0x46,0x82,0x03,

// equal (61): w=9, h=5
0x08,0x8E,
0x10,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x01,

// greater (62): w=8, h=8
0x07,0x4F,
0xC0,0x41,0x42,0x22,0x24,0x1C,0x18,0x08,

// question (63): w=7, h=10
0x26,0x13,
0x03,0x61,0x61,0x71,0x1B,0x0F,0x06,
0x02,0x02,0x02,0x00,0x00,0x00,0x00,

// at (64): w=9, h=10
0x28,0x15,
0xF8,0x04,0xF2,0x89,0xC9,0xF9,0x99,0x82,0x7C,
0x00,0x01,0x02,0x02,0x02,0x02,0x00,0x00,0x00,

// A (65): w=10, h=10
0x29,0x09,
0x00,0x80,0xC0,0x70,0x4C,0x47,0x5F,0xFF,0xFC,0x80,
0x02,0x03,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,

// B (66): w=9, h=10
0x28,0x0D,
0x00,0xF8,0xFF,0x3F,0x21,0x21,0xF1,0xEF,0x06,
0x03,0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// C (67): w=10, h=10
0x29,0x0D,
0xF0,0xF8,0x9C,0x06,0x03,0x01,0x01,0x01,0x01,0x03,
0x00,0x01,0x03,0x02,0x02,0x02,0x02,0x03,0x01,0x00,

// D (68): w=11, h=10
0x2A,0x0E,
0x80,0xFC,0xFF,0x7F,0x07,0x01,0x01,0x81,0xE3,0xFF,
0x3E,
0x03,0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x01,0x00,
0x00,

// E (69): w=9, h=10
0x28,0x0D,
0x00,0xF8,0xFF,0x3F,0x11,0x11,0x11,0x01,0x01,
0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x00,

// F (70): w=9, h=10
0x28,0x0D,
0x00,0xF8,0xFF,0x1F,0x11,0x11,0x11,0x01,0x01,
0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=10, h=10
0x29,0x0E,
0xF0,0xF8,0x9C,0x06,0x03,0x01,0xC1,0xC1,0xC1,0x03,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x03,0x00,0x00,

// H (72): w=11, h=10
0x2A,0x0D,
0x80,0xFC,0xFF,0x1F,0x11,0x10,0x10,0xF0,0xFF,0xFF,
0x07,
0x03,0x03,0x03,0x00,0x00,0x00,0x02,0x03,0x03,0x00,
0x00,

// I (73): w=5, h=10
0x24,0x0D,
0x00,0xF8,0xFF,0x7F,0x03,
0x03,0x03,0x03,0x00,0x00,

// J (74): w=8, h=13
0x27,0x07,
0x00,0x00,0x00,0x00,0xE0,0xFF,0xFF,0x07,
0x10,0x10,0x10,0x1C,0x0F,0x0F,0x00,0x00,

// K (75): w=10, h=10
0x29,0x0E,
0x00,0xF8,0xFF,0x7F,0x23,0xF8,0xEC,0x82,0x01,0x01,
0x03,0x03,0x03,0x00,0x00,0x00,0x01,0x03,0x02,0x00,

// L (76): w=8, h=10
0x27,0x0E,
0x00,0xF8,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,

// M (77): w=13, h=10
0x2C,0x0D,
0x00,0xF8,0xFF,0x07,0xFF,0xFF,0xC0,0x60,0x18,0xE6,
0xFF,0x7F,0x03,
0x03,0x03,0x00,0x00,0x01,0x01,0x00,0x00,0x02,0x03,
0x03,0x00,0x00,

// N (78): w=11, h=10
0x2A,0x0D,
0x00,0xF8,0xFF,0x07,0x1E,0x78,0xE0,0x80,0xFC,0x7F,
0x03,
0x03,0x03,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x00,
0x00,

// O (79): w=10, h=10
0x29,0x14,
0xF0,0xFC,0x9E,0x06,0x01,0x01,0x01,0xC3,0xFE,0x3E,
0x00,0x01,0x03,0x02,0x02,0x02,0x01,0x01,0x00,0x00,

// P (80): w=9, h=10
0x28,0x0D,
0x80,0xFC,0xFF,0x3F,0x21,0x21,0x31,0x1F,0x0E,
0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=11, h=13
0x2A,0x13,
0xF0,0xFC,0x9E,0x06,0x01,0x01,0x01,0xC3,0xFE,0x7E,
0x00,
0x00,0x01,0x03,0x02,0x02,0x06,0x0F,0x0D,0x1C,0x18,
0x10,

// R (82): w=9, h=10
0x28,0x0E,
0x80,0xFC,0xFF,0x3F,0x31,0xF1,0xD9,0x1F,0x0F,
0x03,0x03,0x03,0x00,0x00,0x01,0x03,0x02,0x00,

// S (83): w=8, h=10
0x27,0x0E,
0x00,0x0C,0x1E,0x3F,0x79,0xF1,0xE1,0x03,
0x03,0x02,0x02,0x02,0x02,0x01,0x01,0x00,

// T (84): w=10, h=10
0x29,0x12,
0x01,0x01,0x81,0xFF,0xFF,0x0F,0x01,0x01,0x01,0x01,
0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// U (85): w=10, h=10
0x29,0x13,
0xF0,0xFF,0x3F,0x03,0x00,0x00,0xC0,0xFE,0x7F,0x03,
0x01,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,

// V (86): w=10, h=10
0x29,0x13,
0x07,0xFF,0xFF,0xF0,0x80,0x60,0x30,0x0C,0x03,0x01,
0x00,0x01,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// W (87): w=12, h=10
0x2B,0x14,
0xFF,0xFF,0x80,0x60,0x1C,0xFF,0xFF,0x80,0xE0,0x38,
0x0E,0x03,
0x03,0x03,0x03,0x00,0x00,0x03,0x03,0x03,0x00,0x00,
0x00,0x00,

// X (88): w=11, h=10
0x2A,0x07,
0x00,0x00,0x81,0xC7,0x7F,0xFC,0xF8,0x8C,0x02,0x01,
0x01,
0x02,0x02,0x01,0x00,0x00,0x00,0x03,0x03,0x02,0x00,
0x00,

// Y (89): w=9, h=10
0x28,0x13,
0x01,0x07,0xFF,0xF8,0x70,0x0C,0x06,0x01,0x01,
0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=10, h=10
0x29,0x0D,
0x00,0x00,0xC1,0xE1,0x71,0x39,0x1D,0x0F,0x03,0x01,
0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x00,0x00,

// bracketleft (91): w=6, h=13
0x25,0x0C,
0x00,0xE0,0xFF,0x3F,0x01,0x01,
0x1C,0x1F,0x1F,0x18,0x00,0x00,

// backslash (92): w=5, h=13
0x24,0x15,
0x01,0x1F,0xF0,0x00,0x00,
0x00,0x00,0x01,0x1F,0x10,

// bracketright (93): w=6, h=13
0x25,0x07,
0x00,0x00,0x83,0xFF,0xFF,0x07,
0x10,0x10,0x1F,0x1F,0x00,0x00,

// asciicircum (94): w=8, h=7
0x07,0x2F,
0x40,0x60,0x30,0x0C,0x06,0x07,0x38,0x40,

// underscore (95): w=6, h=1
0x85,0x0B,0x46,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=1
0x82,0x00,0x96,
0x01,0x01,0x01,

// a (97): w=9, h=7
0x08,0x6E,
0x38,0x7C,0x66,0x23,0x11,0x7D,0x7F,0x7F,0x03,

// b (98): w=9, h=10
0x28,0x0E,
0x00,0xF8,0xFF,0xFF,0x6F,0x30,0x98,0xF8,0x78,
0x03,0x03,0x03,0x02,0x02,0x03,0x01,0x00,0x00,

// c (99): w=7, h=7
0x06,0x6E,
0x38,0x7E,0x6E,0x43,0x41,0x21,0x03,

// d (100): w=9, h=10
0x28,0x0E,
0xC0,0xE0,0x30,0x98,0xC8,0xF8,0xFF,0x7F,0x03,
0x01,0x03,0x03,0x01,0x02,0x03,0x03,0x00,0x00,

// e (101): w=8, h=7
0x07,0x6E,
0x38,0x7C,0x7E,0x57,0x51,0x59,0x4F,0x26,

// f (102): w=8, h=13
0xA7,0x00,0x52,
0x00,0xE8,0xFC,0xFE,0x0F,0x09,0x09,0x01,
0x1C,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,

// g (103): w=9, h=10
0x28,0x6D,
0x30,0x7C,0x7E,0x22,0x11,0xC9,0xFF,0x7F,0x03,
0x03,0x02,0x02,0x02,0x02,0x01,0x01,0x00,0x00,

// h (104): w=9, h=10
0x28,0x0D,
0x00,0xF8,0xFF,0xFF,0x27,0x10,0xF8,0xF8,0x18,
0x03,0x03,0x03,0x00,0x00,0x02,0x03,0x03,0x00,

// i (105): w=5, h=10
0x24,0x0D,
0x00,0xF8,0xF9,0x79,0x01,
0x03,0x03,0x03,0x00,0x00,

// j (106): w=8, h=13
0x27,0x06,
0x00,0x00,0x00,0x00,0xE0,0xF9,0x39,0x01,
0x10,0x10,0x10,0x1C,0x0F,0x07,0x00,0x00,

// k (107): w=9, h=10
0x28,0x0D,
0x00,0xF8,0xFF,0x7F,0xC1,0xE0,0x90,0x08,0x08,
0x03,0x03,0x03,0x00,0x00,0x03,0x03,0x02,0x00,

// l (108): w=5, h=10
0x24,0x0D,
0x00,0xF8,0xFF,0x7F,0x03,
0x03,0x03,0x03,0x00,0x00,

// m (109): w=13, h=7
0x0C,0x6E,
0x60,0x7F,0x7F,0x0B,0x06,0x7B,0x7F,0x3F,0x0C,0x06,
0x7F,0x7F,0x07,

// n (110): w=9, h=7
0x08,0x6D,
0x60,0x7F,0x7F,0x1F,0x04,0x42,0x7F,0x7F,0x03,

// o (111): w=8, h=7
0x07,0x73,
0x38,0x7E,0x46,0x41,0x61,0x3F,0x1F,0x04,

// p (112): w=9, h=10
0x28,0x6E,
0x80,0xFC,0xFF,0x7F,0x4D,0x66,0x33,0x1F,0x0E,
0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=9, h=10
0x28,0x6E,
0x38,0x7C,0x66,0x33,0x11,0xFD,0xFF,0x7F,0x03,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,

// r (114): w=8, h=7
0x07,0x6D,
0x60,0x7F,0x7F,0x0F,0x02,0x03,0x03,0x01,

// s (115): w=7, h=7
0x06,0x6D,
0x60,0x44,0x4E,0x5F,0x7D,0x39,0x03,

// t (116): w=5, h=9
0x24,0x33,
0xE4,0xFF,0xBF,0x87,0x04,
0x00,0x01,0x01,0x01,0x00,

// u (117): w=9, h=7
0x08,0x6D,
0x60,0x7F,0x7F,0x21,0x10,0x7C,0x7F,0x7F,0x03,

// v (118): w=9, h=7
0x08,0x6D,
0x03,0x7F,0x7F,0x78,0x30,0x18,0x06,0x03,0x01,

// w (119): w=12, h=7
0x0B,0x72,
0x7F,0x7F,0x60,0x18,0x0C,0x03,0x7F,0x78,0x30,0x0C,
0x03,0x01,

// x (120): w=9, h=7
0x08,0x67,
0x40,0x40,0x23,0x1F,0x3F,0x7C,0x62,0x41,0x01,

// y (121): w=10, h=10
0x29,0x67,
0x00,0x03,0x7F,0xFF,0x78,0x30,0x0C,0x06,0x03,0x01,
0x02,0x02,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=9, h=7
0x08,0x68,
0x40,0x61,0x71,0x59,0x4D,0x4D,0x47,0x43,0x01,

// braceleft (123): w=6, h=13
0x25,0x0C,
0x40,0xC0,0xAE,0xBF,0x1F,0x03,
0x0C,0x1F,0x1F,0x0B,0x00,0x00,

// bar (124): w=4, h=13
0x23,0x0D,
0x00,0xC0,0x7C,0x03,
0x18,0x07,0x00,0x00,

// braceright (125): w=6, h=13
0x25,0x07,
0x00,0x00,0xBA,0xFF,0x7F,0x46,
0x18,0x1F,0x1F,0x0E,0x00,0x00,

// asciitilde (126): w=9, h=3
0x08,0xAE,
0x06,0x03,0x01,0x01,0x02,0x04,0x04,0x06,0x03

};
// 1522 bytes
// 1712 bytes with FAST_FONT_INDEX
