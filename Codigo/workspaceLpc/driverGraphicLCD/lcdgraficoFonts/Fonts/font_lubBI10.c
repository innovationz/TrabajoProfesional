#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_lubBI10[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCE,0x00,
0xD5,0x00,
0xE9,0x00,
0xFB,0x00,
0x11,0x01,
0x29,0x01,
0x2D,0x01,
0x39,0x01,
0x45,0x01,
0x4C,0x01,
0x56,0x01,
0x5C,0x01,
0x61,0x01,
0x67,0x01,
0x7E,0x01,
0x90,0x01,
0x9E,0x01,
0xB0,0x01,
0xC2,0x01,
0xD4,0x01,
0xE6,0x01,
0xF8,0x01,
0x0A,0x02,
0x1C,0x02,
0x2E,0x02,
0x34,0x02,
0x3E,0x02,
0x49,0x02,
0x54,0x02,
0x5F,0x02,
0x6D,0x02,
0x85,0x02,
0x9D,0x02,
0xB1,0x02,
0xC7,0x02,
0xDF,0x02,
0xF3,0x02,
0x07,0x03,
0x1D,0x03,
0x39,0x03,
0x47,0x03,
0x5B,0x03,
0x73,0x03,
0x85,0x03,
0xA3,0x03,
0xBD,0x03,
0xD5,0x03,
0xE9,0x03,
0x03,0x04,
0x19,0x04,
0x2B,0x04,
0x41,0x04,
0x57,0x04,
0x70,0x04,
0x8C,0x04,
0xA4,0x04,
0xBB,0x04,
0xD1,0x04,
0xDF,0x04,
0xE9,0x04,
0xF7,0x04,
0x01,0x05,
0x0A,0x05,
0x10,0x05,
0x1A,0x05,
0x2C,0x05,
0x35,0x05,
0x49,0x05,
0x52,0x05,
0x65,0x05,
0x79,0x05,
0x8B,0x05,
0x95,0x05,
0xA8,0x05,
0xBA,0x05,
0xC4,0x05,
0xD2,0x05,
0xDC,0x05,
0xE6,0x05,
0xFA,0x05,
0x0C,0x06,
0x15,0x06,
0x1E,0x06,
0x2A,0x06,
0x34,0x06,
0x3E,0x06,
0x4B,0x06,
0x54,0x06,
0x6A,0x06,
0x74,0x06,
0x80,0x06,
0x8A,0x06,
0x96,0x06,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x09,0x48,
0x00,

// exclam (33): w=4, h=10
0x23,0x0D,
0x00,0x78,0x3F,0x03,
0x03,0x03,0x00,0x00,

// quotedbl (34): w=5, h=4
0x04,0x13,
0x0F,0x07,0x00,0x0F,0x07,

// numbersign (35): w=9, h=10
0x28,0x0D,
0x40,0xC8,0x68,0x58,0xCE,0x69,0x58,0x4E,0x09,
0x02,0x01,0x00,0x02,0x01,0x00,0x00,0x00,0x00,

// dollar (36): w=8, h=12
0x27,0x13,
0x80,0x00,0x0E,0xDB,0x3F,0xE1,0xC1,0x07,
0x03,0x02,0x1E,0x03,0x03,0x01,0x00,0x00,

// percent (37): w=10, h=10
0x29,0x0E,
0x0C,0x1F,0x91,0xD9,0x6F,0x90,0xE8,0x24,0x22,0xE1,
0x02,0x03,0x01,0x00,0x00,0x01,0x03,0x02,0x03,0x01,

// ampersand (38): w=11, h=10
0x2A,0x0D,
0xE0,0xE0,0x10,0x0E,0x3F,0xF9,0xC9,0x97,0x70,0x30,
0x10,
0x01,0x03,0x03,0x02,0x02,0x02,0x03,0x03,0x02,0x02,
0x00,

// quotesingle (39): w=2, h=4
0x01,0x13,
0x07,0x0F,

// parenleft (40): w=5, h=13
0x24,0x0D,
0xE0,0xF8,0x1C,0x02,0x01,
0x07,0x0F,0x10,0x00,0x00,

// parenright (41): w=5, h=13
0x24,0x08,
0x00,0x00,0x00,0xFF,0xFC,
0x10,0x08,0x06,0x03,0x00,

// asterisk (42): w=5, h=5
0x04,0x13,
0x1E,0x0C,0x0B,0x1D,0x02,

// plus (43): w=8, h=8
0x07,0x4E,
0x10,0x10,0x10,0xF0,0x1F,0x10,0x10,0x10,

// comma (44): w=3, h=5
0x82,0x08,0x46,
0x14,0x1F,0x07,

// hyphen (45): w=3, h=1
0x02,0xAE,
0x01,0x01,0x01,

// period (46): w=3, h=2
0x82,0x08,0x55,
0x03,0x03,0x03,

// slash (47): w=10, h=13
0xA9,0x00,0x42,
0x00,0x00,0x00,0x00,0xC0,0x60,0x18,0x0C,0x03,0x01,
0x10,0x18,0x06,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=8, h=10
0x27,0x0E,
0xF0,0xFC,0x0E,0x03,0x01,0x81,0xFF,0x7E,
0x01,0x03,0x02,0x02,0x03,0x01,0x00,0x00,

// one (49): w=6, h=10
0x25,0x15,
0x00,0x00,0x81,0xFD,0x7F,0x03,
0x02,0x02,0x03,0x03,0x02,0x02,

// two (50): w=8, h=10
0x27,0x0E,
0x00,0x80,0x46,0x21,0x31,0x13,0x1F,0x0E,
0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,

// three (51): w=8, h=10
0x27,0x0E,
0x80,0x00,0x17,0x11,0x11,0xE9,0xEF,0x06,
0x03,0x02,0x02,0x02,0x03,0x01,0x01,0x00,

// four (52): w=8, h=10
0x27,0x0E,
0x40,0x60,0x50,0x48,0xC4,0xFA,0x7F,0x43,
0x00,0x00,0x00,0x02,0x03,0x03,0x02,0x00,

// five (53): w=8, h=10
0x27,0x13,
0x80,0x08,0x0F,0x09,0x19,0xF1,0xE1,0x01,
0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,

// six (54): w=8, h=10
0x27,0x13,
0xF0,0xFC,0x3E,0x12,0x11,0xB1,0xF1,0x47,
0x00,0x01,0x02,0x02,0x02,0x01,0x01,0x00,

// seven (55): w=8, h=10
0x27,0x13,
0x00,0x83,0xC3,0x63,0x13,0x0B,0x07,0x03,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=8, h=10
0x27,0x0E,
0xC0,0xE0,0x2E,0x1F,0x31,0x31,0xEF,0xC6,
0x01,0x03,0x03,0x02,0x02,0x03,0x01,0x00,

// nine (57): w=8, h=10
0x27,0x0E,
0x80,0x1C,0x3E,0x23,0x21,0xD1,0xFF,0x7E,
0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,

// colon (58): w=4, h=7
0x03,0x6D,
0x60,0x62,0x23,0x03,

// semicolon (59): w=4, h=10
0x23,0x68,
0x80,0xE0,0xE3,0x03,
0x02,0x03,0x00,0x00,

// less (60): w=9, h=8
0x08,0x4D,
0x08,0x18,0x18,0x24,0x24,0x44,0xC2,0x82,0x01,

// equal (61): w=9, h=4
0x08,0x8D,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=9, h=8
0x08,0x48,
0x80,0x41,0x43,0x22,0x24,0x24,0x18,0x18,0x10,

// question (63): w=6, h=10
0x25,0x13,
0x06,0x43,0x61,0x11,0x0F,0x06,
0x03,0x03,0x00,0x00,0x00,0x00,

// at (64): w=11, h=10
0x2A,0x0E,
0xF0,0x0C,0x02,0xF2,0x89,0xC5,0x65,0xF9,0x89,0x82,
0x7E,
0x00,0x01,0x02,0x02,0x02,0x02,0x01,0x00,0x00,0x00,
0x00,

// A (65): w=11, h=10
0x2A,0x08,
0x00,0x00,0x80,0x60,0x50,0x4C,0x42,0x7F,0xFC,0xC0,
0x00,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,0x02,0x03,0x03,
0x02,

// B (66): w=9, h=10
0x28,0x0D,
0x00,0x00,0xF9,0x7F,0x13,0x11,0xF9,0xCF,0x07,
0x02,0x03,0x03,0x02,0x02,0x03,0x03,0x01,0x00,

// C (67): w=10, h=10
0x29,0x0D,
0xF0,0xFC,0x9E,0x02,0x03,0x01,0x01,0x01,0x07,0x07,
0x00,0x01,0x03,0x02,0x02,0x02,0x02,0x01,0x00,0x00,

// D (68): w=11, h=10
0x2A,0x0D,
0x00,0x00,0xF9,0xFF,0x07,0x01,0x01,0x01,0xC3,0xFE,
0x3C,
0x02,0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x01,0x00,
0x00,

// E (69): w=9, h=10
0x28,0x0D,
0x00,0x80,0xF9,0x7F,0x17,0x11,0x39,0x01,0x03,
0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x01,0x00,

// F (70): w=9, h=10
0x28,0x0C,
0x00,0x00,0xF9,0x7F,0x13,0x11,0x39,0x01,0x03,
0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// G (71): w=10, h=10
0x29,0x0E,
0xF0,0xFC,0x1E,0x06,0x03,0x21,0xA1,0xE1,0xE3,0x27,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x03,0x00,0x00,

// H (72): w=13, h=10
0x2C,0x07,
0x00,0x00,0xF1,0xFF,0x1F,0x11,0x11,0x10,0xD1,0xFF,
0x3F,0x03,0x01,
0x02,0x03,0x03,0x03,0x02,0x00,0x02,0x02,0x03,0x03,
0x02,0x00,0x00,

// I (73): w=6, h=10
0x25,0x0C,
0x00,0x80,0xFD,0x7F,0x07,0x01,
0x02,0x03,0x03,0x02,0x00,0x00,

// J (74): w=9, h=13
0x28,0x06,
0x00,0x00,0x00,0x00,0xC1,0xFF,0x7F,0x03,0x01,
0x1C,0x14,0x10,0x1C,0x0F,0x07,0x00,0x00,0x00,

// K (75): w=11, h=10
0x2A,0x07,
0x00,0x00,0xF9,0xFF,0x3F,0x71,0xE8,0xC4,0x03,0x03,
0x01,
0x02,0x03,0x03,0x02,0x00,0x00,0x02,0x03,0x03,0x02,
0x00,

// L (76): w=8, h=10
0x27,0x0E,
0x00,0x00,0xF9,0xFF,0x07,0x01,0x00,0x80,
0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x03,

// M (77): w=14, h=10
0x2D,0x07,
0x00,0x00,0xF9,0x07,0x3F,0xFC,0xE0,0x20,0x18,0x84,
0xFE,0x7F,0x03,0x01,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x02,0x03,
0x03,0x02,0x00,0x00,

// N (78): w=12, h=10
0x2B,0x0C,
0x00,0x00,0xF9,0x07,0x0F,0x3C,0xF0,0xC0,0x80,0x7D,
0x07,0x01,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,0x01,0x03,0x00,
0x00,0x00,

// O (79): w=11, h=10
0x2A,0x13,
0xF0,0xFC,0x1E,0x06,0x03,0x01,0x01,0x81,0xFF,0x7E,
0x18,
0x00,0x01,0x03,0x02,0x02,0x02,0x01,0x01,0x00,0x00,
0x00,

// P (80): w=9, h=10
0x28,0x0D,
0x00,0x80,0xF9,0x7F,0x23,0x21,0x31,0x1F,0x0E,
0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=12, h=13
0x2B,0x12,
0xF0,0xFC,0x1E,0x06,0x03,0x01,0x01,0x81,0xFF,0xFE,
0x18,0x00,
0x00,0x01,0x03,0x02,0x02,0x06,0x0B,0x0B,0x11,0x10,
0x10,0x10,

// R (82): w=10, h=10
0x29,0x08,
0x00,0x00,0xF1,0xFF,0x1F,0x31,0xF1,0xD9,0x0F,0x07,
0x02,0x03,0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x02,

// S (83): w=8, h=10
0x27,0x0D,
0x80,0x04,0x1E,0x3F,0x31,0xE1,0xE1,0x07,
0x03,0x02,0x02,0x02,0x03,0x01,0x01,0x00,

// T (84): w=10, h=10
0x29,0x12,
0x03,0x01,0x01,0xF9,0xFF,0x0F,0x01,0x01,0x01,0x03,
0x00,0x02,0x03,0x03,0x03,0x02,0x00,0x00,0x00,0x00,

// U (85): w=10, h=10
0x29,0x13,
0xF1,0xFF,0x1F,0x01,0x01,0x00,0x00,0xF1,0x0F,0x01,
0x01,0x03,0x03,0x02,0x02,0x02,0x01,0x00,0x00,0x00,

// V (86): w=11, h=10
0xAA,0x00,0x62,
0x01,0x0F,0xFF,0xF9,0x80,0xC0,0x60,0x18,0x0D,0x03,
0x01,
0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,

// W (87): w=13, h=10
0x2C,0x12,
0x01,0xFF,0xFF,0xC1,0x30,0x0C,0xFF,0xFE,0xC0,0x30,
0x0D,0x03,0x01,
0x00,0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x00,0x00,
0x00,0x00,0x00,

// X (88): w=11, h=10
0x2A,0x06,
0x00,0x00,0x81,0x43,0x3F,0x7D,0xF0,0xC8,0x05,0x03,
0x01,
0x02,0x03,0x02,0x00,0x00,0x02,0x03,0x03,0x03,0x00,
0x00,

// Y (89): w=10, h=10
0xA9,0x00,0x62,
0x01,0x07,0x9F,0xFD,0x70,0x10,0x08,0x05,0x03,0x01,
0x00,0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=10, h=10
0x29,0x0D,
0x00,0x00,0xC3,0xE1,0x71,0x39,0x1D,0x0F,0x03,0x01,
0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x03,0x01,0x00,

// bracketleft (91): w=6, h=13
0x25,0x07,
0x00,0xC0,0xFE,0x1F,0x01,0x01,
0x18,0x1F,0x11,0x00,0x00,0x00,

// backslash (92): w=4, h=13
0x23,0x15,
0x03,0x7C,0xC0,0x00,
0x00,0x00,0x07,0x18,

// bracketright (93): w=6, h=13
0x25,0x07,
0x00,0x00,0x00,0xF9,0x7F,0x03,
0x10,0x10,0x1F,0x0F,0x00,0x00,

// asciicircum (94): w=8, h=8
0x07,0x0E,
0x80,0x40,0x30,0x18,0x04,0x07,0x78,0xC0,

// underscore (95): w=6, h=1
0x85,0x0B,0x46,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=2
0x82,0x00,0x86,
0x01,0x01,0x02,

// a (97): w=8, h=7
0x07,0x6E,
0x78,0x7C,0x46,0x21,0x11,0x79,0x7F,0x43,

// b (98): w=8, h=10
0x27,0x0E,
0x00,0xF9,0x7F,0x37,0x10,0x88,0xF8,0x78,
0x03,0x03,0x02,0x02,0x02,0x01,0x00,0x00,

// c (99): w=7, h=7
0x06,0x6D,
0x38,0x7C,0x46,0x41,0x41,0x21,0x07,

// d (100): w=9, h=10
0x28,0x0D,
0xC0,0xE0,0x30,0x08,0x88,0xC8,0xFD,0x7F,0x03,
0x03,0x03,0x02,0x03,0x01,0x03,0x03,0x02,0x00,

// e (101): w=7, h=7
0x06,0x6E,
0x38,0x7E,0x4A,0x49,0x4D,0x67,0x22,

// f (102): w=8, h=13
0xA7,0x00,0x52,
0x00,0xC8,0xFC,0x7F,0x0B,0x08,0x00,0x03,
0x38,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,

// g (103): w=9, h=10
0x28,0x68,
0x90,0x78,0x7E,0x42,0x21,0xD1,0xFD,0x7F,0x03,
0x03,0x03,0x02,0x02,0x02,0x01,0x01,0x00,0x00,

// h (104): w=8, h=10
0x27,0x0E,
0x00,0xF9,0xFF,0x27,0x10,0xC8,0xF8,0x78,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x02,

// i (105): w=4, h=10
0x23,0x0D,
0x88,0xF8,0xFB,0x03,
0x03,0x03,0x02,0x00,

// j (106): w=8, h=13
0xA7,0x00,0x42,
0x00,0x00,0x00,0x00,0xC8,0xF8,0x7B,0x03,
0x1C,0x10,0x10,0x1C,0x0F,0x03,0x00,0x00,

// k (107): w=8, h=10
0x27,0x0E,
0x00,0xF9,0xFF,0x4F,0xE0,0xB0,0x18,0x08,
0x03,0x03,0x00,0x00,0x01,0x03,0x03,0x02,

// l (108): w=4, h=10
0x23,0x0D,
0x80,0xFD,0xFF,0x07,
0x03,0x03,0x02,0x00,

// m (109): w=12, h=7
0x0B,0x6F,
0x61,0x7F,0x0F,0x04,0x42,0x7F,0x7F,0x0E,0x06,0x73,
0x7F,0x4F,

// n (110): w=8, h=7
0x07,0x6E,
0x61,0x7F,0x1F,0x05,0x02,0x79,0x7F,0x4F,

// o (111): w=8, h=7
0x07,0x6D,
0x38,0x7C,0x46,0x41,0x61,0x31,0x1F,0x0E,

// p (112): w=9, h=10
0x28,0x6D,
0x00,0xF9,0xFF,0x4F,0x46,0x43,0x31,0x1F,0x0F,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=8, h=10
0x27,0x6E,
0x78,0x7C,0x46,0x21,0xB1,0xF9,0xFF,0x07,
0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,

// r (114): w=7, h=7
0x06,0x6D,
0x61,0x7F,0x1F,0x04,0x02,0x03,0x01,

// s (115): w=7, h=7
0x06,0x6D,
0x70,0x46,0x4F,0x5D,0x79,0x33,0x01,

// t (116): w=5, h=9
0x24,0x2D,
0xC4,0xFF,0x3F,0x05,0x04,
0x00,0x01,0x01,0x01,0x00,

// u (117): w=8, h=7
0x07,0x6E,
0x79,0x7F,0x4F,0x20,0x50,0x7D,0x7F,0x43,

// v (118): w=8, h=7
0x07,0x6D,
0x01,0x07,0x7F,0x38,0x10,0x08,0x07,0x03,

// w (119): w=11, h=7
0x0A,0x6E,
0x01,0x07,0x7F,0x30,0x08,0x0F,0x7E,0x30,0x18,0x07,
0x03,

// x (120): w=7, h=7
0x06,0x6D,
0x60,0x61,0x17,0x1E,0x7C,0x67,0x43,

// y (121): w=10, h=10
0x29,0x66,
0x00,0x01,0x03,0x1F,0xFF,0x60,0x10,0x09,0x07,0x03,
0x02,0x02,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=8, h=7
0x07,0x6D,
0x40,0x62,0x71,0x59,0x4D,0x47,0x63,0x01,

// braceleft (123): w=5, h=13
0x24,0x0D,
0x40,0xE0,0x3F,0x1F,0x01,
0x0C,0x1F,0x13,0x00,0x00,

// bar (124): w=4, h=13
0x23,0x0D,
0x00,0xC0,0x7C,0x03,
0x18,0x07,0x00,0x00,

// braceright (125): w=5, h=13
0x24,0x08,
0x00,0x00,0x99,0xFF,0x46,
0x10,0x1F,0x1F,0x00,0x00,

// asciitilde (126): w=8, h=3
0x07,0xAE,
0x06,0x01,0x01,0x03,0x06,0x04,0x04,0x03

};
// 1506 bytes
// 1696 bytes with FAST_FONT_INDEX
