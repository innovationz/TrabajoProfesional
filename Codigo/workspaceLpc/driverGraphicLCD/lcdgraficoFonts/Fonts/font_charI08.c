#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_charI08[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC3,0x00,
0xC8,0x00,
0xCD,0x00,
0xD6,0x00,
0xE2,0x00,
0xED,0x00,
0xF6,0x00,
0xFA,0x00,
0x04,0x01,
0x0E,0x01,
0x15,0x01,
0x1E,0x01,
0x22,0x01,
0x27,0x01,
0x2A,0x01,
0x3A,0x01,
0x41,0x01,
0x47,0x01,
0x4E,0x01,
0x56,0x01,
0x5E,0x01,
0x66,0x01,
0x6D,0x01,
0x76,0x01,
0x7D,0x01,
0x84,0x01,
0x88,0x01,
0x8D,0x01,
0x95,0x01,
0x9D,0x01,
0xA5,0x01,
0xAB,0x01,
0xBF,0x01,
0xC9,0x01,
0xD1,0x01,
0xDA,0x01,
0xE3,0x01,
0xEB,0x01,
0xF3,0x01,
0xFC,0x01,
0x07,0x02,
0x0D,0x02,
0x15,0x02,
0x1F,0x02,
0x26,0x02,
0x32,0x02,
0x3C,0x02,
0x46,0x02,
0x4E,0x02,
0x60,0x02,
0x69,0x02,
0x71,0x02,
0x7A,0x02,
0x83,0x02,
0x8C,0x02,
0x98,0x02,
0xA2,0x02,
0xAB,0x02,
0xB4,0x02,
0xBE,0x02,
0xCA,0x02,
0xD4,0x02,
0xDD,0x02,
0xE6,0x02,
0xEA,0x02,
0xF1,0x02,
0xF8,0x02,
0xFE,0x02,
0x06,0x03,
0x0C,0x03,
0x1B,0x03,
0x23,0x03,
0x2B,0x03,
0x2F,0x03,
0x39,0x03,
0x41,0x03,
0x45,0x03,
0x50,0x03,
0x58,0x03,
0x5F,0x03,
0x67,0x03,
0x6E,0x03,
0x74,0x03,
0x7A,0x03,
0x7F,0x03,
0x86,0x03,
0x8D,0x03,
0x97,0x03,
0x9F,0x03,
0xA8,0x03,
0xAF,0x03,
0xB9,0x03,
0xBD,0x03,
0xC7,0x03,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x00,0xEA,
0x00,

// exclam (33): w=3, h=8
0x02,0x0E,
0x80,0xBE,0x03,

// quotedbl (34): w=3, h=3
0x02,0x2F,
0x07,0x00,0x07,

// numbersign (35): w=7, h=8
0x06,0x29,
0x10,0xF4,0x1C,0xD7,0x3C,0x17,0x14,

// dollar (36): w=5, h=9
0x24,0x09,
0x60,0x8E,0xFD,0x53,0x23,
0x00,0x01,0x00,0x00,0x00,

// percent (37): w=9, h=8
0x08,0x08,
0x0C,0x92,0x59,0x26,0x18,0x64,0x9A,0x49,0x30,

// ampersand (38): w=7, h=8
0x06,0x09,
0x60,0x9E,0x91,0x69,0x46,0xB0,0x90,

// quoteright (39): w=2, h=3
0x01,0x2E,
0x05,0x03,

// parenleft (40): w=4, h=10
0x23,0x0E,
0xF0,0x0C,0x02,0x01,
0x01,0x02,0x00,0x00,

// parenright (41): w=4, h=10
0x23,0x03,
0x00,0x00,0xC1,0x3E,
0x02,0x01,0x00,0x00,

// asterisk (42): w=5, h=4
0x04,0x0E,
0x0A,0x0A,0x07,0x0A,0x02,

// plus (43): w=7, h=7
0x06,0x2F,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// comma (44): w=2, h=3
0x01,0xE4,
0x04,0x07,

// hyphen (45): w=3, h=1
0x02,0xA9,
0x01,0x01,0x01,

// period (46): w=1, h=1
0x00,0xEA,
0x01,

// slash (47): w=7, h=9
0x26,0x01,
0x00,0x80,0x60,0x10,0x0C,0x02,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=5, h=8
0x04,0x0E,
0x78,0x86,0x81,0x61,0x1E,

// one (49): w=4, h=8
0x03,0x0F,
0x80,0x82,0xFB,0x87,

// two (50): w=5, h=8
0x04,0x09,
0x80,0xC6,0xA1,0x91,0x4E,

// three (51): w=6, h=8
0x05,0x08,
0x40,0x82,0x89,0x89,0x75,0x26,

// four (52): w=6, h=8
0x05,0x08,
0x20,0x38,0x24,0xE2,0x3F,0x20,

// five (53): w=6, h=8
0x05,0x08,
0xC0,0x8E,0x89,0x49,0x31,0x01,

// six (54): w=5, h=7
0x04,0x29,
0x3C,0x4E,0x45,0x25,0x19,

// seven (55): w=7, h=8
0x06,0x07,
0x80,0xC3,0x21,0x11,0x0D,0x03,0x01,

// eight (56): w=5, h=8
0x04,0x09,
0x60,0x9E,0x89,0x59,0x26,

// nine (57): w=5, h=8
0x04,0x0E,
0x8C,0x92,0x51,0x39,0x0E,

// colon (58): w=2, h=5
0x01,0x6F,
0x10,0x01,

// semicolon (59): w=3, h=7
0x02,0x69,
0x40,0x31,0x01,

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
0x03,0x0E,
0xA2,0x11,0x09,0x06,

// at (64): w=9, h=9
0x28,0x2E,
0x78,0x86,0x32,0x49,0x45,0x7D,0xC5,0xA2,0x1C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// A (65): w=8, h=8
0x07,0x02,
0x80,0xC0,0x30,0x1C,0x12,0x97,0xF8,0x80,

// B (66): w=6, h=8
0x05,0x09,
0x80,0xF1,0x8F,0x89,0x4D,0x36,

// C (67): w=7, h=8
0x06,0x08,
0x38,0x44,0x82,0x81,0x81,0x41,0x03,

// D (68): w=7, h=8
0x06,0x09,
0x80,0xF1,0x8F,0x81,0x41,0x22,0x1C,

// E (69): w=6, h=8
0x05,0x08,
0x80,0xF1,0x8F,0x89,0xDD,0x03,

// F (70): w=6, h=8
0x05,0x07,
0x80,0xF1,0x8F,0x09,0x1D,0x03,

// G (71): w=7, h=8
0x06,0x08,
0x38,0x46,0x82,0x81,0x91,0x71,0x13,

// H (72): w=9, h=8
0x08,0x07,
0x80,0xF1,0x8F,0x09,0x08,0x88,0xF9,0x8F,0x01,

// I (73): w=4, h=8
0x03,0x08,
0x80,0xF1,0x8F,0x01,

// J (74): w=6, h=8
0x05,0x02,
0xC0,0x80,0x80,0x71,0x0F,0x01,

// K (75): w=8, h=8
0x07,0x07,
0x80,0xF1,0x8F,0x19,0x24,0xC5,0x83,0x01,

// L (76): w=5, h=8
0x04,0x09,
0x80,0xF9,0x87,0x81,0xC0,

// M (77): w=10, h=8
0x09,0x07,
0x80,0xF9,0x07,0x3F,0xC0,0x30,0x88,0xF6,0x8F,0x01,

// N (78): w=8, h=8
0x07,0x07,
0x80,0xF9,0x07,0x0C,0x30,0xC0,0x3F,0x01,

// O (79): w=8, h=8
0x07,0x08,
0x38,0x44,0x82,0x81,0x81,0x41,0x22,0x1C,

// P (80): w=6, h=8
0x05,0x08,
0x80,0xF9,0x17,0x11,0x09,0x06,

// Q (81): w=8, h=10
0x27,0x08,
0x38,0x46,0x82,0x81,0xC1,0x62,0x1C,0x00,
0x00,0x00,0x00,0x00,0x01,0x02,0x02,0x02,

// R (82): w=7, h=8
0x06,0x08,
0x80,0xF9,0x97,0x11,0x69,0x86,0x80,

// S (83): w=6, h=8
0x05,0x08,
0x60,0x8E,0x89,0x51,0x71,0x03,

// T (84): w=7, h=8
0x06,0x07,
0x03,0x81,0xF9,0x8F,0x01,0x01,0x03,

// U (85): w=7, h=8
0x06,0x0E,
0x79,0x87,0x81,0x80,0x60,0x1F,0x01,

// V (86): w=7, h=8
0x06,0x07,
0x01,0x3F,0xC0,0x60,0x18,0x07,0x01,

// W (87): w=10, h=8
0x09,0x0D,
0x01,0xFF,0x60,0x18,0x06,0xFF,0x60,0x18,0x07,0x01,

// X (88): w=8, h=8
0x07,0x01,
0x80,0xC0,0xA1,0x1F,0xB8,0xC4,0x83,0x01,

// Y (89): w=7, h=8
0x06,0x07,
0x01,0x87,0xF9,0x88,0x05,0x03,0x01,

// Z (90): w=7, h=8
0x06,0x08,
0x80,0xC2,0xB1,0x99,0x8D,0xC3,0x01,

// bracketleft (91): w=4, h=9
0x23,0x2E,
0xC0,0x3E,0x01,0x01,
0x01,0x01,0x00,0x00,

// backslash (92): w=5, h=9
0x24,0x08,
0x01,0x06,0x38,0xC0,0x00,
0x00,0x00,0x00,0x00,0x01,

// bracketright (93): w=4, h=9
0x23,0x29,
0x00,0x00,0xF9,0x07,
0x01,0x01,0x00,0x00,

// asciicircum (94): w=7, h=3
0x06,0x36,
0x04,0x02,0x01,0x01,0x01,0x02,0x04,

// underscore (95): w=6, h=1
0x85,0x0A,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// quoteleft (96): w=2, h=3
0x01,0x2E,
0x06,0x05,

// a (97): w=5, h=5
0x04,0x69,
0x0C,0x12,0x11,0x19,0x17,

// b (98): w=5, h=8
0x04,0x09,
0x61,0x9F,0x88,0x48,0x30,

// c (99): w=4, h=5
0x03,0x68,
0x0C,0x12,0x11,0x0B,

// d (100): w=6, h=8
0x05,0x08,
0x60,0x90,0x88,0x48,0xBD,0x83,

// e (101): w=4, h=5
0x03,0x69,
0x0C,0x16,0x13,0x0A,

// f (102): w=6, h=11
0xA5,0x00,0x24,
0x00,0x00,0xE8,0x1E,0x09,0x03,
0x04,0x06,0x01,0x00,0x00,0x00,

// g (103): w=6, h=8
0x05,0x68,
0x60,0xA6,0x99,0xA9,0x66,0x01,

// h (104): w=6, h=8
0x05,0x08,
0x80,0x7D,0x13,0x48,0xB8,0x80,

// i (105): w=2, h=8
0x01,0x0E,
0xF8,0x89,

// j (106): w=4, h=11
0x23,0x02,
0x00,0x00,0xE8,0x19,
0x04,0x06,0x01,0x00,

// k (107): w=6, h=8
0x05,0x08,
0x80,0x79,0x27,0x70,0x88,0x88,

// l (108): w=2, h=8
0x01,0x09,
0xF1,0x8F,

// m (109): w=9, h=5
0x08,0x68,
0x19,0x07,0x02,0x11,0x0F,0x02,0x19,0x17,0x10,

// n (110): w=6, h=5
0x05,0x68,
0x19,0x07,0x02,0x19,0x17,0x10,

// o (111): w=5, h=5
0x04,0x69,
0x0C,0x12,0x11,0x09,0x06,

// p (112): w=6, h=8
0x05,0x62,
0x80,0xFD,0x93,0x11,0x09,0x07,

// q (113): w=5, h=8
0x04,0x69,
0x0C,0x12,0x91,0xF9,0x87,

// r (114): w=4, h=5
0x03,0x68,
0x19,0x07,0x01,0x03,

// s (115): w=4, h=5
0x03,0x68,
0x08,0x12,0x15,0x09,

// t (116): w=3, h=6
0x02,0x4E,
0x3E,0x23,0x02,

// u (117): w=5, h=5
0x04,0x69,
0x1D,0x13,0x10,0x1C,0x13,

// v (118): w=5, h=5
0x04,0x68,
0x01,0x1F,0x10,0x0C,0x03,

// w (119): w=8, h=5
0x07,0x68,
0x01,0x1F,0x08,0x04,0x1F,0x10,0x0C,0x03,

// x (120): w=6, h=5
0x05,0x62,
0x10,0x19,0x07,0x1E,0x11,0x01,

// y (121): w=7, h=8
0x06,0x62,
0xC0,0x81,0x43,0x3C,0x08,0x06,0x01,

// z (122): w=5, h=5
0x04,0x68,
0x10,0x1B,0x15,0x1B,0x09,

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
// 786 bytes
// 976 bytes with FAST_FONT_INDEX
