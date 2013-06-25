#include "fonts.h"			// for FAST_FONT_INDEX

// charBI08 = "Bitstream Charter Black Italic"

const unsigned char font_charBI08[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC3,0x00,
0xC8,0x00,
0xCD,0x00,
0xD7,0x00,
0xE5,0x00,
0xF0,0x00,
0xFA,0x00,
0xFF,0x00,
0x09,0x01,
0x15,0x01,
0x1C,0x01,
0x25,0x01,
0x2A,0x01,
0x30,0x01,
0x34,0x01,
0x47,0x01,
0x4F,0x01,
0x55,0x01,
0x5D,0x01,
0x65,0x01,
0x6E,0x01,
0x77,0x01,
0x7F,0x01,
0x87,0x01,
0x8F,0x01,
0x97,0x01,
0x9C,0x01,
0xA1,0x01,
0xA9,0x01,
0xB1,0x01,
0xB9,0x01,
0xC0,0x01,
0xD2,0x01,
0xDC,0x01,
0xE5,0x01,
0xEE,0x01,
0xF9,0x01,
0x02,0x02,
0x0B,0x02,
0x15,0x02,
0x20,0x02,
0x27,0x02,
0x30,0x02,
0x3B,0x02,
0x44,0x02,
0x51,0x02,
0x5C,0x02,
0x66,0x02,
0x6F,0x02,
0x81,0x02,
0x8B,0x02,
0x94,0x02,
0x9E,0x02,
0xA8,0x02,
0xB2,0x02,
0xBF,0x02,
0xCA,0x02,
0xD4,0x02,
0xDD,0x02,
0xE9,0x02,
0xF7,0x02,
0x03,0x03,
0x0C,0x03,
0x15,0x03,
0x1A,0x03,
0x23,0x03,
0x2B,0x03,
0x32,0x03,
0x3A,0x03,
0x42,0x03,
0x55,0x03,
0x5E,0x03,
0x67,0x03,
0x6C,0x03,
0x7B,0x03,
0x84,0x03,
0x89,0x03,
0x96,0x03,
0x9F,0x03,
0xA7,0x03,
0xB0,0x03,
0xB8,0x03,
0xC0,0x03,
0xC7,0x03,
0xCD,0x03,
0xD6,0x03,
0xDE,0x03,
0xEA,0x03,
0xF3,0x03,
0xFC,0x03,
0x04,0x04,
0x10,0x04,
0x14,0x04,
0x20,0x04,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x00,0xEB,
0x00,

// exclam (33): w=3, h=8
0x02,0x09,
0xC0,0xDF,0x03,

// quotedbl (34): w=3, h=3
0x02,0x2F,
0x07,0x00,0x07,

// numbersign (35): w=8, h=8
0x07,0x29,
0x20,0xE4,0x3C,0xA6,0x65,0x3C,0x27,0x04,

// dollar (36): w=6, h=9
0x25,0x09,
0xE0,0x8E,0xFF,0x9F,0x71,0x27,
0x00,0x00,0x01,0x00,0x00,0x00,

// percent (37): w=9, h=8
0x08,0x0F,
0x0E,0x93,0x51,0x2E,0x18,0x7C,0x8A,0xC9,0x70,

// ampersand (38): w=8, h=8
0x07,0x09,
0x60,0xF6,0xCF,0xB9,0x77,0xE6,0x98,0x88,

// quoteright (39): w=3, h=4
0x02,0x2E,
0x08,0x0B,0x07,

// parenleft (40): w=4, h=10
0x23,0x0E,
0xF0,0xFC,0x06,0x01,
0x01,0x03,0x02,0x00,

// parenright (41): w=5, h=10
0x24,0x03,
0x00,0x00,0xC1,0xFF,0x3E,
0x02,0x02,0x01,0x00,0x00,

// asterisk (42): w=5, h=4
0x04,0x0E,
0x0A,0x0A,0x0F,0x0A,0x02,

// plus (43): w=7, h=7
0x06,0x2F,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// comma (44): w=3, h=4
0x02,0xC3,
0x08,0x0B,0x07,

// hyphen (45): w=4, h=1
0x03,0xA8,
0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x01,0xC9,
0x03,0x03,

// slash (47): w=8, h=9
0xA7,0x00,0x25,
0x00,0x80,0x40,0x30,0x18,0x04,0x03,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=6, h=8
0x05,0x0E,
0x78,0xFE,0x83,0xC1,0x7F,0x1E,

// one (49): w=4, h=8
0x03,0x10,
0x80,0xC2,0xFF,0x87,

// two (50): w=6, h=8
0x05,0x09,
0xC0,0xC6,0xE7,0xD1,0xCF,0x6E,

// three (51): w=6, h=8
0x05,0x09,
0x40,0xC6,0x93,0xD1,0x7F,0x26,

// four (52): w=7, h=8
0x06,0x08,
0x20,0x30,0x2C,0xE6,0xFF,0x2F,0x20,

// five (53): w=7, h=8
0x06,0x08,
0x40,0xEE,0x8B,0x8B,0x7B,0x33,0x01,

// six (54): w=6, h=8
0x05,0x09,
0x70,0xFC,0x8E,0x8A,0x79,0x31,

// seven (55): w=6, h=8
0x05,0x0E,
0x87,0xC3,0x63,0x1B,0x0F,0x03,

// eight (56): w=6, h=8
0x05,0x09,
0x60,0xFE,0x8F,0x99,0x77,0x26,

// nine (57): w=6, h=8
0x05,0x0E,
0x8C,0x9E,0x51,0x71,0x3F,0x0E,

// colon (58): w=3, h=5
0x02,0x69,
0x18,0x1B,0x03,

// semicolon (59): w=3, h=7
0x02,0x69,
0x40,0x3B,0x03,

// less (60): w=6, h=6
0x05,0x50,
0x0C,0x0C,0x12,0x12,0x12,0x21,

// equal (61): w=6, h=3
0x05,0x95,
0x05,0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=6
0x05,0x55,
0x21,0x12,0x12,0x12,0x0C,0x0C,

// question (63): w=5, h=8
0x04,0x0E,
0xC2,0xD3,0x09,0x0F,0x06,

// at (64): w=8, h=9
0x27,0x2F,
0x78,0x86,0x7A,0x45,0x65,0x5D,0xA2,0x1C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// A (65): w=8, h=8
0x07,0x02,
0x80,0xE0,0x98,0x14,0x13,0xFF,0xF8,0x80,

// B (66): w=7, h=8
0x06,0x09,
0x80,0xF9,0xFF,0x8B,0xC9,0x7F,0x36,

// C (67): w=7, h=8
0x06,0x08,
0x38,0x7E,0xC6,0x81,0x81,0xE1,0x07,

// D (68): w=9, h=8
0x08,0x08,
0x80,0xE1,0xFF,0x9F,0x81,0xC1,0x63,0x7E,0x1C,

// E (69): w=7, h=8
0x06,0x08,
0x80,0xF1,0xFF,0x8B,0x99,0xE5,0x03,

// F (70): w=7, h=8
0x06,0x07,
0x80,0xF1,0xFF,0x8B,0x19,0x0D,0x03,

// G (71): w=8, h=8
0x07,0x08,
0x38,0x7E,0xC6,0x83,0x91,0xF1,0x77,0x13,

// H (72): w=9, h=8
0x08,0x08,
0x80,0xF1,0xFF,0x0B,0x89,0xC8,0xFF,0x9F,0x01,

// I (73): w=5, h=8
0x04,0x08,
0x80,0xF1,0xFF,0x8F,0x01,

// J (74): w=7, h=8
0x06,0x02,
0xE0,0xE0,0x80,0xE1,0x7F,0x1F,0x01,

// K (75): w=9, h=8
0x08,0x07,
0x80,0xF1,0xFF,0x9F,0x19,0x7C,0xE7,0x83,0x81,

// L (76): w=7, h=8
0x06,0x08,
0x80,0xE1,0xFF,0x9F,0x81,0xC0,0xE0,

// M (77): w=11, h=8
0x0A,0x08,
0x80,0xF1,0x8F,0x0F,0xFF,0x60,0x18,0xC6,0xFF,0x9F,
0x01,

// N (78): w=9, h=8
0x08,0x07,
0x80,0xF1,0x8F,0x0F,0x3E,0xF0,0xF1,0x0F,0x01,

// O (79): w=8, h=8
0x07,0x09,
0x38,0x7E,0x86,0x81,0x81,0x61,0x7F,0x1C,

// P (80): w=7, h=8
0x06,0x08,
0x80,0xF9,0xFF,0x13,0x11,0x0F,0x0E,

// Q (81): w=8, h=10
0x27,0x09,
0x38,0x7E,0xC6,0x81,0x81,0xE1,0x7F,0x1C,
0x00,0x00,0x00,0x00,0x03,0x03,0x02,0x02,

// R (82): w=8, h=8
0x07,0x08,
0x80,0xF9,0xFF,0x13,0x71,0xEF,0x86,0x80,

// S (83): w=7, h=8
0x06,0x08,
0xC0,0xEE,0x8E,0x99,0x71,0x77,0x01,

// T (84): w=8, h=8
0x07,0x07,
0x03,0x81,0xF9,0xFF,0x8F,0x01,0x01,0x03,

// U (85): w=8, h=8
0x07,0x0E,
0x79,0xFF,0x87,0x81,0x80,0x71,0x0F,0x01,

// V (86): w=8, h=8
0x07,0x07,
0x01,0x1F,0xFF,0xC1,0x30,0x0D,0x07,0x01,

// W (87): w=11, h=8
0x0A,0x07,
0x01,0xFF,0xFF,0x31,0x0C,0x1F,0xFF,0xE0,0x19,0x07,
0x01,

// X (88): w=9, h=8
0x08,0x02,
0x80,0xC1,0xE3,0x1F,0xBD,0xFC,0xC7,0x83,0x01,

// Y (89): w=8, h=8
0x07,0x07,
0x01,0x87,0xFF,0xF9,0x88,0x05,0x03,0x01,

// Z (90): w=7, h=8
0x06,0x08,
0x80,0xE3,0xF1,0x99,0x8F,0xE7,0x01,

// bracketleft (91): w=5, h=9
0x24,0x2E,
0xC0,0xFE,0x0F,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,

// backslash (92): w=6, h=9
0x25,0x08,
0x01,0x07,0x1C,0x30,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,

// bracketright (93): w=5, h=9
0x24,0x29,
0x00,0x01,0xE1,0xFF,0x07,
0x01,0x01,0x01,0x00,0x00,

// asciicircum (94): w=7, h=3
0x06,0x36,
0x04,0x02,0x03,0x01,0x03,0x02,0x04,

// underscore (95): w=6, h=1
0x85,0x0A,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// quoteleft (96): w=3, h=4
0x02,0x2E,
0x0E,0x0D,0x01,

// a (97): w=7, h=5
0x06,0x68,
0x0C,0x1E,0x13,0x11,0x1F,0x13,0x10,

// b (98): w=6, h=8
0x05,0x09,
0x61,0xFF,0x8F,0xC8,0x78,0x30,

// c (99): w=5, h=5
0x04,0x69,
0x0C,0x1E,0x11,0x13,0x0B,

// d (100): w=6, h=8
0x05,0x09,
0x60,0xF0,0x98,0x88,0xFF,0x8F,

// e (101): w=6, h=5
0x05,0x68,
0x0C,0x1E,0x15,0x15,0x13,0x0A,

// f (102): w=8, h=11
0xA7,0x00,0x23,
0x00,0x00,0x08,0xF8,0x7E,0x0B,0x0B,0x03,
0x06,0x06,0x03,0x01,0x00,0x00,0x00,0x00,

// g (103): w=7, h=8
0x06,0x67,
0x60,0xE6,0x9F,0xB9,0x67,0x66,0x02,

// h (104): w=7, h=8
0x06,0x08,
0x80,0xFD,0x1F,0x08,0xF8,0xB8,0x80,

// i (105): w=3, h=8
0x02,0x0E,
0xE8,0xFB,0x8B,

// j (106): w=6, h=11
0xA5,0x00,0x25,
0x00,0x00,0x08,0xF8,0xFB,0x0B,
0x06,0x04,0x02,0x03,0x00,0x00,

// k (107): w=7, h=8
0x06,0x08,
0x80,0xFD,0x3F,0x33,0xF0,0xD8,0x88,

// l (108): w=3, h=8
0x02,0x0E,
0xF1,0xFF,0x87,

// m (109): w=11, h=5
0x0A,0x68,
0x19,0x1F,0x03,0x01,0x1F,0x1F,0x02,0x09,0x1F,0x17,
0x10,

// n (110): w=7, h=5
0x06,0x68,
0x19,0x1F,0x03,0x01,0x1F,0x17,0x10,

// o (111): w=6, h=5
0x05,0x69,
0x0C,0x1E,0x11,0x11,0x0F,0x06,

// p (112): w=7, h=8
0x06,0x63,
0x80,0xF9,0xFF,0x91,0x19,0x0F,0x07,

// q (113): w=6, h=8
0x05,0x69,
0x0C,0x1E,0x93,0xF1,0xFF,0x87,

// r (114): w=6, h=5
0x05,0x68,
0x19,0x1F,0x07,0x01,0x03,0x03,

// s (115): w=5, h=5
0x04,0x68,
0x08,0x1E,0x15,0x1D,0x0B,

// t (116): w=4, h=7
0x03,0x2E,
0x7C,0x7E,0x47,0x04,

// u (117): w=7, h=5
0x06,0x68,
0x1F,0x1F,0x10,0x10,0x1F,0x17,0x10,

// v (118): w=6, h=5
0x05,0x68,
0x01,0x1F,0x1F,0x08,0x07,0x03,

// w (119): w=10, h=5
0x09,0x68,
0x01,0x1F,0x1F,0x08,0x06,0x1F,0x1F,0x08,0x07,0x03,

// x (120): w=7, h=5
0x06,0x68,
0x18,0x11,0x0B,0x0F,0x1E,0x11,0x13,

// y (121): w=7, h=8
0x06,0x62,
0xC1,0x81,0x5F,0x3C,0x0C,0x03,0x01,

// z (122): w=6, h=5
0x05,0x68,
0x12,0x1F,0x17,0x1F,0x17,0x09,

// braceleft (123): w=5, h=9
0x24,0x29,
0x10,0x10,0xEE,0xEF,0x01,
0x00,0x00,0x00,0x01,0x01,

// bar (124): w=1, h=11
0x20,0x1C,
0xFF,
0x07,

// braceright (125): w=5, h=9
0x24,0x2E,
0x01,0xEF,0xEE,0x10,0x10,
0x01,0x01,0x00,0x00,0x00,

// c0126 (126): w=7, h=2
0x06,0x36,
0x02,0x01,0x01,0x03,0x02,0x02,0x01

};
// 875 bytes
// 1065 bytes with FAST_FONT_INDEX
