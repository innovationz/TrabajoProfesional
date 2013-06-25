#include "fonts.h"			// for FAST_FONT_INDEX

// ncenB08 = "New Century Schoolbook Bold"

const unsigned char font_ncenB08[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC3,0x00,
0xC7,0x00,
0xCC,0x00,
0xD5,0x00,
0xE1,0x00,
0xED,0x00,
0xF7,0x00,
0xFA,0x00,
0x04,0x01,
0x0E,0x01,
0x15,0x01,
0x1C,0x01,
0x20,0x01,
0x25,0x01,
0x29,0x01,
0x2F,0x01,
0x36,0x01,
0x3C,0x01,
0x43,0x01,
0x4A,0x01,
0x51,0x01,
0x58,0x01,
0x5F,0x01,
0x65,0x01,
0x6C,0x01,
0x73,0x01,
0x77,0x01,
0x7B,0x01,
0x83,0x01,
0x8A,0x01,
0x92,0x01,
0x99,0x01,
0xAD,0x01,
0xB8,0x01,
0xC1,0x01,
0xCA,0x01,
0xD4,0x01,
0xDC,0x01,
0xE4,0x01,
0xED,0x01,
0xF8,0x01,
0xFE,0x01,
0x06,0x02,
0x11,0x02,
0x19,0x02,
0x26,0x02,
0x30,0x02,
0x39,0x02,
0x42,0x02,
0x54,0x02,
0x5E,0x02,
0x66,0x02,
0x6E,0x02,
0x78,0x02,
0x82,0x02,
0x8F,0x02,
0x99,0x02,
0xA3,0x02,
0xAB,0x02,
0xB3,0x02,
0xB9,0x02,
0xC1,0x02,
0xC8,0x02,
0xD1,0x02,
0xD6,0x02,
0xDC,0x02,
0xE4,0x02,
0xEB,0x02,
0xF3,0x02,
0xFA,0x02,
0x01,0x03,
0x09,0x03,
0x11,0x03,
0x17,0x03,
0x1F,0x03,
0x27,0x03,
0x2D,0x03,
0x39,0x03,
0x41,0x03,
0x49,0x03,
0x51,0x03,
0x5A,0x03,
0x60,0x03,
0x66,0x03,
0x6B,0x03,
0x73,0x03,
0x7B,0x03,
0x86,0x03,
0x8E,0x03,
0x96,0x03,
0x9D,0x03,
0xA7,0x03,
0xAA,0x03,
0xB4,0x03,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x00,0xEA,
0x00,

// exclam (33): w=2, h=8
0x01,0x09,
0xDF,0xC7,

// quotedbl (34): w=3, h=3
0x02,0x10,
0x07,0x00,0x07,

// numbersign (35): w=7, h=8
0x06,0x09,
0x20,0xE4,0x3C,0xE7,0x3C,0x27,0x04,

// dollar (36): w=5, h=9
0x24,0x09,
0xCE,0x99,0xFF,0x99,0x73,
0x00,0x00,0x03,0x00,0x00,

// percent (37): w=10, h=8
0x09,0x09,
0x0E,0x1F,0x11,0xCE,0x32,0x0D,0x73,0xF8,0x88,0x70,

// ampersand (38): w=8, h=8
0x07,0x09,
0x60,0xF6,0x8F,0x99,0x76,0xE0,0xC0,0x40,

// quotesingle (39): w=1, h=3
0x00,0x10,
0x07,

// parenleft (40): w=4, h=10
0x23,0x09,
0x78,0xFC,0x86,0x01,
0x00,0x00,0x01,0x02,

// parenright (41): w=4, h=10
0x23,0x09,
0x01,0x86,0xFC,0x78,
0x02,0x01,0x00,0x00,

// asterisk (42): w=5, h=5
0x04,0x09,
0x0A,0x04,0x1F,0x04,0x0A,

// plus (43): w=5, h=5
0x04,0x49,
0x04,0x04,0x1F,0x04,0x04,

// comma (44): w=2, h=4
0x01,0xC9,
0x0B,0x07,

// hyphen (45): w=3, h=1
0x02,0x89,
0x01,0x01,0x01,

// period (46): w=2, h=2
0x01,0xC9,
0x03,0x03,

// slash (47): w=4, h=8
0x03,0x09,
0xC0,0x30,0x0C,0x03,

// zero (48): w=5, h=8
0x04,0x09,
0x7E,0xFF,0x81,0xFF,0x7E,

// one (49): w=4, h=8
0x03,0x0F,
0x82,0xFF,0xFF,0x80,

// two (50): w=5, h=8
0x04,0x09,
0xC6,0xE7,0xD1,0xDF,0xCE,

// three (51): w=5, h=8
0x04,0x09,
0x66,0xE7,0x89,0xFF,0x76,

// four (52): w=5, h=8
0x04,0x09,
0x30,0x2C,0xA3,0xFF,0xFF,

// five (53): w=5, h=8
0x04,0x09,
0x6F,0xEB,0x8B,0xFB,0x71,

// six (54): w=5, h=8
0x04,0x09,
0x7E,0xFF,0x89,0xFB,0x72,

// seven (55): w=4, h=8
0x03,0x0A,
0x03,0xE3,0xFB,0x07,

// eight (56): w=5, h=8
0x04,0x09,
0x76,0xFF,0x89,0xFF,0x76,

// nine (57): w=5, h=8
0x04,0x09,
0x4E,0xDF,0x91,0xFF,0x7E,

// colon (58): w=2, h=5
0x01,0x69,
0x1B,0x1B,

// semicolon (59): w=2, h=7
0x01,0x69,
0x5B,0x3B,

// less (60): w=6, h=5
0x05,0x49,
0x04,0x04,0x0A,0x0A,0x11,0x11,

// equal (61): w=5, h=3
0x04,0x69,
0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=5
0x05,0x49,
0x11,0x11,0x0A,0x0A,0x04,0x04,

// question (63): w=5, h=8
0x04,0x09,
0x02,0xD3,0xC9,0x0F,0x06,

// at (64): w=9, h=9
0x28,0x09,
0x3C,0xC3,0x99,0x3C,0x24,0x1C,0x3D,0x23,0x1C,
0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x00,

// A (65): w=9, h=8
0x08,0x02,
0x80,0xE0,0xB8,0x26,0x27,0xBE,0xF8,0xE0,0x80,

// B (66): w=7, h=8
0x06,0x09,
0x81,0xFF,0xFF,0x89,0x89,0xFF,0x76,

// C (67): w=7, h=8
0x06,0x09,
0x3C,0x7E,0x81,0x81,0x81,0x82,0x67,

// D (68): w=8, h=8
0x07,0x09,
0x81,0xFF,0xFF,0x81,0x81,0x81,0x7E,0x3C,

// E (69): w=6, h=8
0x05,0x09,
0x81,0xFF,0xFF,0x89,0x9D,0xE3,

// F (70): w=6, h=8
0x05,0x09,
0x81,0xFF,0xFF,0x91,0x39,0x07,

// G (71): w=7, h=8
0x06,0x09,
0x3C,0x7E,0x81,0x81,0x91,0x72,0xF7,

// H (72): w=9, h=8
0x08,0x09,
0x81,0xFF,0xFF,0x89,0x08,0x89,0xFF,0xFF,0x81,

// I (73): w=4, h=8
0x03,0x09,
0x81,0xFF,0xFF,0x81,

// J (74): w=6, h=8
0x05,0x09,
0x70,0xB0,0x81,0xFF,0x7F,0x01,

// K (75): w=9, h=8
0x08,0x08,
0x81,0xFF,0xFF,0x91,0x18,0x34,0xE3,0xC1,0x80,

// L (76): w=6, h=8
0x05,0x09,
0x81,0xFF,0xFF,0x81,0x80,0xE0,

// M (77): w=11, h=8
0x0A,0x09,
0x81,0xFF,0x83,0x1F,0xFC,0xE0,0x1C,0x83,0xFF,0xFF,
0x81,

// N (78): w=8, h=8
0x07,0x09,
0x81,0xFF,0x8E,0x1C,0x38,0x71,0xFF,0x01,

// O (79): w=7, h=8
0x06,0x09,
0x3C,0x7E,0x81,0x81,0x81,0x7E,0x3C,

// P (80): w=7, h=8
0x06,0x09,
0x81,0xFF,0xFF,0x91,0x11,0x1F,0x0E,

// Q (81): w=8, h=9
0x27,0x08,
0x3C,0x7E,0xE1,0xA1,0xC1,0xFE,0x3C,0x80,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,

// R (82): w=8, h=8
0x07,0x09,
0x81,0xFF,0xFF,0x91,0x11,0xFF,0xE6,0x80,

// S (83): w=6, h=8
0x05,0x09,
0xEE,0x4F,0x99,0x99,0xF2,0x77,

// T (84): w=6, h=8
0x05,0x09,
0x07,0x81,0xFF,0xFF,0x81,0x07,

// U (85): w=8, h=8
0x07,0x09,
0x01,0x7F,0xFF,0x81,0x80,0x81,0x7F,0x01,

// V (86): w=8, h=8
0x07,0x09,
0x01,0x07,0x3F,0xF9,0xC0,0x39,0x07,0x01,

// W (87): w=11, h=8
0x0A,0x09,
0x01,0x1F,0xFF,0xE1,0x38,0x07,0x3F,0xF8,0xE1,0x1F,
0x01,

// X (88): w=8, h=8
0x07,0x09,
0x81,0xC7,0xAF,0x1D,0xB8,0xF5,0xE3,0x81,

// Y (89): w=8, h=8
0x07,0x09,
0x01,0x03,0x8F,0xFD,0xF0,0x8D,0x03,0x01,

// Z (90): w=6, h=8
0x05,0x09,
0xE3,0xF1,0xB9,0x9D,0x8F,0xC7,

// bracketleft (91): w=3, h=10
0x22,0x09,
0xFF,0xFF,0x01,
0x03,0x03,0x02,

// backslash (92): w=4, h=8
0x03,0x09,
0x03,0x0C,0x30,0xC0,

// bracketright (93): w=3, h=10
0x22,0x09,
0x01,0xFF,0xFF,
0x02,0x03,0x03,

// asciicircum (94): w=5, h=6
0x04,0x09,
0x30,0x0C,0x07,0x0C,0x30,

// underscore (95): w=6, h=1
0x85,0x09,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=2
0x02,0x09,
0x01,0x03,0x02,

// a (97): w=4, h=5
0x03,0x69,
0x19,0x15,0x1F,0x1E,

// b (98): w=6, h=8
0x05,0x09,
0xFF,0x7F,0x90,0x88,0xF8,0x70,

// c (99): w=5, h=5
0x04,0x69,
0x0E,0x1F,0x11,0x11,0x0A,

// d (100): w=6, h=8
0x05,0x09,
0x70,0xF8,0x88,0x49,0xFF,0xFF,

// e (101): w=5, h=5
0x04,0x69,
0x0E,0x1F,0x15,0x17,0x16,

// f (102): w=5, h=8
0x04,0x08,
0x88,0xFE,0xFF,0x89,0x03,

// g (103): w=6, h=8
0x05,0x48,
0xCC,0xBE,0xB2,0xBE,0xED,0x60,

// h (104): w=6, h=8
0x05,0x09,
0xFF,0xFF,0x10,0x08,0xF8,0xF0,

// i (105): w=4, h=8
0x03,0x09,
0x88,0xFB,0xFB,0x80,

// j (106): w=3, h=10
0x22,0x0A,
0x08,0xFB,0xFB,
0x02,0x03,0x01,

// k (107): w=6, h=8
0x05,0x08,
0xFF,0xFF,0x30,0xF8,0xC8,0x80,

// l (108): w=4, h=8
0x03,0x09,
0x81,0xFF,0xFF,0x80,

// m (109): w=10, h=5
0x09,0x69,
0x1F,0x1F,0x02,0x01,0x1F,0x1E,0x02,0x01,0x1F,0x1E,

// n (110): w=6, h=5
0x05,0x69,
0x1F,0x1F,0x02,0x01,0x1F,0x1E,

// o (111): w=6, h=5
0x05,0x69,
0x0E,0x1F,0x11,0x11,0x1F,0x0E,

// p (112): w=6, h=7
0x05,0x69,
0x7F,0x7F,0x52,0x11,0x1F,0x0E,

// q (113): w=7, h=7
0x06,0x68,
0x0E,0x1F,0x11,0x49,0x7F,0x7F,0x40,

// r (114): w=4, h=5
0x03,0x69,
0x1F,0x1F,0x02,0x03,

// s (115): w=4, h=5
0x03,0x69,
0x16,0x17,0x1D,0x0D,

// t (116): w=3, h=7
0x02,0x29,
0x3E,0x7F,0x44,

// u (117): w=6, h=5
0x05,0x69,
0x0F,0x1F,0x10,0x08,0x1F,0x1F,

// v (118): w=6, h=5
0x05,0x69,
0x01,0x07,0x1F,0x18,0x07,0x01,

// w (119): w=9, h=5
0x08,0x69,
0x01,0x07,0x1F,0x18,0x07,0x1F,0x18,0x07,0x01,

// x (120): w=6, h=5
0x05,0x69,
0x11,0x1B,0x07,0x1C,0x1B,0x11,

// y (121): w=6, h=7
0x05,0x69,
0x61,0x67,0x3F,0x18,0x07,0x01,

// z (122): w=5, h=5
0x04,0x69,
0x1B,0x1D,0x17,0x13,0x19,

// braceleft (123): w=4, h=10
0x23,0x09,
0x10,0xFE,0xEF,0x01,
0x00,0x01,0x03,0x02,

// bar (124): w=1, h=8
0x00,0x17,
0xFF,

// braceright (125): w=4, h=10
0x23,0x09,
0x01,0xEF,0xFE,0x10,
0x02,0x03,0x01,0x00,

// asciitilde (126): w=6, h=2
0x05,0x69,
0x02,0x01,0x03,0x03,0x02,0x01

};
// 766 bytes
// 956 bytes with FAST_FONT_INDEX
