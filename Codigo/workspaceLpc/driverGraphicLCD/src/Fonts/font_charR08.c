#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_charR08[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC3,0x00,
0xC6,0x00,
0xCB,0x00,
0xD4,0x00,
0xE0,0x00,
0xEA,0x00,
0xF3,0x00,
0xF6,0x00,
0xFE,0x00,
0x06,0x01,
0x0D,0x01,
0x16,0x01,
0x19,0x01,
0x1E,0x01,
0x21,0x01,
0x2F,0x01,
0x36,0x01,
0x3B,0x01,
0x42,0x01,
0x49,0x01,
0x51,0x01,
0x58,0x01,
0x5F,0x01,
0x66,0x01,
0x6D,0x01,
0x74,0x01,
0x77,0x01,
0x7B,0x01,
0x83,0x01,
0x8B,0x01,
0x93,0x01,
0x99,0x01,
0xAD,0x01,
0xB6,0x01,
0xBE,0x01,
0xC6,0x01,
0xCF,0x01,
0xD6,0x01,
0xDD,0x01,
0xE6,0x01,
0xEF,0x01,
0xF4,0x01,
0xFB,0x01,
0x03,0x02,
0x0A,0x02,
0x15,0x02,
0x1E,0x02,
0x27,0x02,
0x2E,0x02,
0x3E,0x02,
0x46,0x02,
0x4D,0x02,
0x56,0x02,
0x5F,0x02,
0x68,0x02,
0x74,0x02,
0x7D,0x02,
0x86,0x02,
0x8D,0x02,
0x95,0x02,
0xA3,0x02,
0xAB,0x02,
0xB4,0x02,
0xBD,0x02,
0xC0,0x02,
0xC7,0x02,
0xCE,0x02,
0xD4,0x02,
0xDB,0x02,
0xE1,0x02,
0xE6,0x02,
0xED,0x02,
0xF4,0x02,
0xF7,0x02,
0xFF,0x02,
0x06,0x03,
0x09,0x03,
0x12,0x03,
0x19,0x03,
0x20,0x03,
0x27,0x03,
0x2E,0x03,
0x33,0x03,
0x38,0x03,
0x3D,0x03,
0x44,0x03,
0x4C,0x03,
0x57,0x03,
0x5F,0x03,
0x67,0x03,
0x6D,0x03,
0x77,0x03,
0x7B,0x03,
0x85,0x03,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x00,0xEA,
0x00,

// exclam (33): w=1, h=8
0x00,0x15,
0xBF,

// quotedbl (34): w=3, h=3
0x02,0x2F,
0x07,0x00,0x07,

// numbersign (35): w=7, h=8
0x06,0x29,
0x10,0xF4,0x1C,0xD7,0x3C,0x17,0x14,

// dollar (36): w=5, h=9
0x24,0x0E,
0xE6,0x89,0xFF,0x91,0x73,
0x00,0x00,0x01,0x00,0x00,

// percent (37): w=8, h=8
0x07,0x0E,
0x0E,0x91,0x4E,0x30,0x0C,0x72,0x89,0x70,

// ampersand (38): w=7, h=8
0x06,0x0E,
0x66,0x99,0x99,0x66,0x50,0xB0,0x90,

// quoteright (39): w=1, h=3
0x00,0x2E,
0x07,

// parenleft (40): w=3, h=10
0x22,0x14,
0xFC,0x02,0x01,
0x00,0x01,0x02,

// parenright (41): w=3, h=10
0x22,0x0A,
0x01,0x02,0xFC,
0x02,0x01,0x00,

// asterisk (42): w=5, h=4
0x04,0x0E,
0x02,0x0A,0x07,0x0A,0x02,

// plus (43): w=7, h=7
0x06,0x2F,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// comma (44): w=1, h=3
0x00,0xEF,
0x07,

// hyphen (45): w=3, h=1
0x02,0xAE,
0x01,0x01,0x01,

// period (46): w=1, h=1
0x00,0xEF,
0x01,

// slash (47): w=6, h=9
0x25,0x08,
0x00,0xC0,0x20,0x18,0x06,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=5, h=8
0x04,0x0E,
0x3C,0x42,0x81,0x42,0x3C,

// one (49): w=3, h=8
0x02,0x15,
0x82,0xFF,0x80,

// two (50): w=5, h=8
0x04,0x0E,
0x86,0xC1,0xA1,0x93,0xCE,

// three (51): w=5, h=8
0x04,0x0E,
0x42,0x81,0x89,0x8D,0x72,

// four (52): w=6, h=8
0x05,0x08,
0x30,0x28,0x24,0x22,0xFF,0x20,

// five (53): w=5, h=8
0x04,0x0E,
0xCF,0x89,0x89,0x49,0x31,

// six (54): w=5, h=8
0x04,0x0E,
0x7C,0x8A,0x8A,0x89,0x70,

// seven (55): w=5, h=8
0x04,0x0E,
0x03,0xC1,0x31,0x0D,0x03,

// eight (56): w=5, h=8
0x04,0x0E,
0x74,0x9A,0x89,0x9B,0x74,

// nine (57): w=5, h=8
0x04,0x0E,
0x0E,0x91,0x51,0x31,0x1E,

// colon (58): w=1, h=5
0x00,0x75,
0x11,

// semicolon (59): w=2, h=7
0x01,0x6F,
0x40,0x71,

// less (60): w=6, h=6
0x05,0x50,
0x0C,0x0C,0x12,0x12,0x12,0x21,

// equal (61): w=6, h=3
0x05,0x95,
0x05,0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=6
0x05,0x55,
0x21,0x12,0x12,0x12,0x0C,0x0C,

// question (63): w=4, h=8
0x03,0x09,
0x02,0xB1,0x09,0x0E,

// at (64): w=9, h=9
0x28,0x2E,
0x78,0x86,0x32,0x49,0x45,0x7D,0xC5,0xA2,0x1C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// A (65): w=7, h=8
0x06,0x08,
0x80,0xF0,0x1E,0x13,0x1E,0xF0,0x80,

// B (66): w=6, h=8
0x05,0x0E,
0x81,0xFF,0x89,0x89,0x8F,0x72,

// C (67): w=6, h=8
0x05,0x0E,
0x3C,0x42,0x81,0x81,0x81,0xC2,

// D (68): w=7, h=8
0x06,0x0E,
0x81,0xFF,0x81,0x81,0x81,0x42,0x3C,

// E (69): w=5, h=8
0x04,0x0E,
0x81,0xFF,0x89,0x89,0x9D,

// F (70): w=5, h=8
0x04,0x0E,
0x81,0xFF,0x09,0x1D,0x03,

// G (71): w=7, h=8
0x06,0x0E,
0x3C,0x42,0x81,0x81,0x91,0xF3,0x10,

// H (72): w=7, h=8
0x06,0x0E,
0x81,0xFF,0x89,0x08,0x89,0xFF,0x81,

// I (73): w=3, h=8
0x02,0x0E,
0x81,0xFF,0x81,

// J (74): w=5, h=8
0x04,0x08,
0xC0,0x80,0x81,0x7F,0x01,

// K (75): w=6, h=8
0x05,0x0E,
0x81,0xFF,0x91,0x1C,0x63,0x81,

// L (76): w=5, h=8
0x04,0x0E,
0x81,0xFF,0x81,0x80,0xC0,

// M (77): w=9, h=8
0x08,0x0E,
0x81,0xFF,0x87,0x38,0xC0,0x38,0x86,0xFF,0x81,

// N (78): w=7, h=8
0x06,0x0E,
0x81,0xFF,0x86,0x18,0x61,0xFF,0x01,

// O (79): w=7, h=8
0x06,0x0E,
0x3C,0x42,0x81,0x81,0x81,0x42,0x3C,

// P (80): w=5, h=8
0x04,0x0E,
0x81,0xFF,0x91,0x11,0x0E,

// Q (81): w=7, h=10
0x26,0x0E,
0x3C,0x42,0x81,0x81,0x81,0x42,0x3C,
0x00,0x00,0x00,0x03,0x02,0x02,0x02,

// R (82): w=6, h=8
0x05,0x0E,
0x81,0xFF,0x91,0x11,0x6E,0x80,

// S (83): w=5, h=8
0x04,0x0E,
0xEE,0x89,0x89,0x91,0x73,

// T (84): w=7, h=8
0x06,0x08,
0x03,0x01,0x81,0xFF,0x81,0x01,0x03,

// U (85): w=7, h=8
0x06,0x0E,
0x01,0x7F,0xC1,0x80,0x41,0x7F,0x01,

// V (86): w=7, h=8
0x06,0x08,
0x01,0x0F,0x78,0xC0,0x70,0x0F,0x01,

// W (87): w=10, h=8
0x09,0x08,
0x01,0x3F,0xE0,0x70,0x0E,0x07,0x38,0xC0,0x3D,0x03,

// X (88): w=7, h=8
0x06,0x08,
0x81,0xC3,0x35,0x18,0xB4,0xC3,0x81,

// Y (89): w=7, h=8
0x06,0x08,
0x01,0x03,0x8D,0xF0,0x88,0x07,0x01,

// Z (90): w=5, h=8
0x04,0x09,
0xC3,0xA1,0x99,0x85,0xC3,

// bracketleft (91): w=3, h=9
0x22,0x34,
0xFF,0x01,0x01,
0x01,0x01,0x01,

// backslash (92): w=6, h=9
0x25,0x08,
0x01,0x06,0x08,0x30,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,

// bracketright (93): w=3, h=9
0x22,0x2A,
0x01,0x01,0xFF,
0x01,0x01,0x01,

// asciicircum (94): w=7, h=3
0x06,0x36,
0x04,0x02,0x01,0x01,0x01,0x02,0x04,

// underscore (95): w=6, h=1
0x85,0x0A,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// quoteleft (96): w=1, h=3
0x00,0x2E,
0x07,

// a (97): w=5, h=5
0x04,0x6E,
0x0C,0x15,0x13,0x1E,0x10,

// b (98): w=5, h=8
0x04,0x0E,
0xFF,0x88,0x88,0x48,0x70,

// c (99): w=4, h=5
0x03,0x6E,
0x0E,0x11,0x11,0x12,

// d (100): w=5, h=8
0x04,0x0F,
0x60,0xD0,0x88,0x89,0xFF,

// e (101): w=4, h=5
0x03,0x6E,
0x0E,0x15,0x15,0x16,

// f (102): w=3, h=8
0x02,0x0D,
0xFE,0x89,0x03,

// g (103): w=5, h=8
0x04,0x6E,
0x46,0xB9,0xA9,0x66,0x42,

// h (104): w=5, h=8
0x04,0x0F,
0xFF,0x88,0x08,0x88,0xF0,

// i (105): w=1, h=8
0x00,0x0F,
0xFB,

// j (106): w=3, h=11
0x22,0x03,
0x00,0x00,0xFB,
0x06,0x04,0x03,

// k (107): w=5, h=8
0x04,0x0E,
0xFF,0xA0,0x20,0x58,0x88,

// l (108): w=1, h=8
0x00,0x0F,
0xFF,

// m (109): w=7, h=5
0x06,0x6F,
0x1F,0x11,0x01,0x1F,0x11,0x01,0x1F,

// n (110): w=5, h=5
0x04,0x6E,
0x1F,0x11,0x01,0x11,0x1F,

// o (111): w=5, h=5
0x04,0x6E,
0x0E,0x11,0x11,0x11,0x0E,

// p (112): w=5, h=8
0x04,0x6E,
0xFF,0x91,0x11,0x09,0x0E,

// q (113): w=5, h=8
0x04,0x6E,
0x0E,0x12,0x11,0x91,0xFF,

// r (114): w=3, h=5
0x02,0x6E,
0x1F,0x11,0x01,

// s (115): w=3, h=5
0x02,0x6E,
0x1A,0x15,0x0B,

// t (116): w=3, h=6
0x02,0x4E,
0x3F,0x22,0x22,

// u (117): w=5, h=5
0x04,0x6F,
0x0F,0x10,0x10,0x11,0x1F,

// v (118): w=6, h=5
0x05,0x68,
0x01,0x0F,0x18,0x08,0x07,0x01,

// w (119): w=9, h=5
0x08,0x68,
0x01,0x0F,0x18,0x0C,0x03,0x0E,0x10,0x0D,0x03,

// x (120): w=6, h=5
0x05,0x68,
0x11,0x1B,0x05,0x14,0x1B,0x11,

// y (121): w=6, h=8
0x05,0x68,
0x81,0x87,0x79,0x18,0x07,0x01,

// z (122): w=4, h=5
0x03,0x6E,
0x1B,0x15,0x13,0x19,

// braceleft (123): w=4, h=9
0x23,0x29,
0x10,0x10,0xEE,0x01,
0x00,0x00,0x00,0x01,

// bar (124): w=1, h=11
0x20,0x1C,
0xFF,
0x07,

// braceright (125): w=4, h=9
0x23,0x29,
0x01,0xEE,0x10,0x10,
0x01,0x00,0x00,0x00,

// c0126 (126): w=7, h=2
0x06,0x36,
0x02,0x01,0x01,0x03,0x02,0x02,0x01

};
// 720 bytes
// 910 bytes with FAST_FONT_INDEX
