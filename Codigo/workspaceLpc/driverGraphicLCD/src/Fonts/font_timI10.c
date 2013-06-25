#include "fonts.h"			// for FAST_FONT_INDEX

// timI10 = "Times Italic"

const unsigned char font_timI10[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCE,0x00,
0xD7,0x00,
0xE7,0x00,
0xF7,0x00,
0x0F,0x01,
0x23,0x01,
0x29,0x01,
0x33,0x01,
0x3D,0x01,
0x44,0x01,
0x4D,0x01,
0x52,0x01,
0x57,0x01,
0x5B,0x01,
0x67,0x01,
0x75,0x01,
0x7F,0x01,
0x8D,0x01,
0x9B,0x01,
0xA9,0x01,
0xB7,0x01,
0xC5,0x01,
0xD3,0x01,
0xE1,0x01,
0xEF,0x01,
0xF3,0x01,
0xF8,0x01,
0x00,0x02,
0x09,0x02,
0x11,0x02,
0x1B,0x02,
0x35,0x02,
0x49,0x02,
0x5D,0x02,
0x71,0x02,
0x85,0x02,
0x99,0x02,
0xAD,0x02,
0xC1,0x02,
0xD7,0x02,
0xE3,0x02,
0xF1,0x02,
0x07,0x03,
0x17,0x03,
0x31,0x03,
0x49,0x03,
0x5D,0x03,
0x71,0x03,
0x85,0x03,
0x99,0x03,
0xA9,0x03,
0xB9,0x03,
0xCF,0x03,
0xE3,0x03,
0xFD,0x03,
0x11,0x04,
0x25,0x04,
0x37,0x04,
0x45,0x04,
0x4F,0x04,
0x5D,0x04,
0x66,0x04,
0x71,0x04,
0x75,0x04,
0x7E,0x04,
0x8C,0x04,
0x94,0x04,
0xA4,0x04,
0xAC,0x04,
0xBF,0x04,
0xCF,0x04,
0xDD,0x04,
0xE7,0x04,
0xF6,0x04,
0x06,0x05,
0x10,0x05,
0x1B,0x05,
0x23,0x05,
0x2B,0x05,
0x3E,0x05,
0x4E,0x05,
0x55,0x05,
0x5C,0x05,
0x68,0x05,
0x70,0x05,
0x78,0x05,
0x83,0x05,
0x8C,0x05,
0x9C,0x05,
0xA4,0x05,
0xB2,0x05,
0xBC,0x05,
0xCA,0x05,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x09,0x47,
0x00,

// exclam (33): w=4, h=10
0x23,0x0E,
0x00,0xC0,0x38,0x07,
0x02,0x00,0x00,0x00,

// quotedbl (34): w=7, h=4
0x06,0x07,
0x08,0x06,0x03,0x09,0x06,0x03,0x01,

// numbersign (35): w=7, h=10
0x26,0x08,
0x40,0xC8,0x78,0xCF,0x78,0x4F,0x08,
0x00,0x03,0x00,0x03,0x00,0x00,0x00,

// dollar (36): w=7, h=11
0x26,0x08,
0x80,0x00,0x8E,0x71,0x1F,0xE1,0x06,
0x01,0x02,0x0F,0x02,0x02,0x01,0x00,

// percent (37): w=11, h=10
0x2A,0x09,
0x0C,0x12,0x11,0x89,0x47,0x32,0x8A,0x46,0x23,0x20,
0xC0,
0x00,0x00,0x02,0x01,0x00,0x00,0x01,0x02,0x02,0x01,
0x00,

// ampersand (38): w=9, h=10
0x28,0x0A,
0xC0,0x20,0x10,0x1E,0x79,0x89,0x46,0x30,0x10,
0x01,0x02,0x02,0x02,0x01,0x01,0x03,0x02,0x01,

// quotesingle (39): w=4, h=4
0x03,0x07,
0x08,0x06,0x03,0x01,

// parenleft (40): w=4, h=13
0x23,0x0E,
0xC0,0x38,0x06,0x01,
0x0F,0x10,0x00,0x00,

// parenright (41): w=4, h=13
0x23,0x09,
0x00,0x00,0x81,0x7E,
0x10,0x0C,0x03,0x00,

// asterisk (42): w=5, h=6
0x04,0x0F,
0x12,0x0C,0x3F,0x0C,0x12,

// plus (43): w=7, h=7
0x06,0x70,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// comma (44): w=2, h=3
0x81,0x08,0x56,
0x05,0x03,

// hyphen (45): w=3, h=1
0x02,0xCF,
0x01,0x01,0x01,

// period (46): w=1, h=2
0x80,0x08,0x56,
0x03,

// slash (47): w=5, h=10
0x24,0x02,
0x00,0xC0,0x30,0x0C,0x03,
0x03,0x00,0x00,0x00,0x00,

// zero (48): w=6, h=10
0x25,0x09,
0xF0,0x0C,0x02,0x01,0xC1,0x3E,
0x01,0x02,0x02,0x01,0x00,0x00,

// one (49): w=4, h=10
0x23,0x10,
0x00,0xC0,0x39,0x07,
0x02,0x03,0x02,0x00,

// two (50): w=6, h=10
0x25,0x09,
0x00,0x82,0x41,0x21,0x11,0x0E,
0x03,0x02,0x02,0x02,0x03,0x00,

// three (51): w=6, h=10
0x25,0x09,
0x00,0x00,0x12,0x11,0xE9,0x06,
0x01,0x02,0x02,0x01,0x00,0x00,

// four (52): w=6, h=10
0x25,0x09,
0x60,0x50,0x48,0xE4,0x5A,0x47,
0x00,0x00,0x03,0x00,0x00,0x00,

// five (53): w=6, h=10
0x25,0x09,
0x00,0x0E,0x09,0x19,0xF1,0x01,
0x03,0x02,0x02,0x01,0x00,0x00,

// six (54): w=6, h=10
0x25,0x0E,
0xF0,0x1C,0x12,0x12,0xE1,0x01,
0x01,0x03,0x02,0x01,0x00,0x00,

// seven (55): w=6, h=10
0x25,0x0E,
0x02,0x81,0x61,0x11,0x0D,0x03,
0x03,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=6, h=10
0x25,0x09,
0xC0,0x24,0x1A,0x31,0xC9,0x06,
0x01,0x02,0x02,0x01,0x00,0x00,

// nine (57): w=6, h=10
0x25,0x09,
0x00,0x1C,0x22,0x21,0xD3,0x3E,
0x02,0x02,0x01,0x01,0x00,0x00,

// colon (58): w=2, h=7
0x01,0x6F,
0x60,0x03,

// semicolon (59): w=3, h=8
0x02,0x69,
0xA0,0x60,0x03,

// less (60): w=6, h=8
0x05,0x71,
0x18,0x24,0x24,0x42,0x42,0x81,

// equal (61): w=7, h=3
0x06,0xB0,
0x05,0x05,0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=8
0x05,0x7B,
0x81,0x42,0x42,0x24,0x24,0x18,

// question (63): w=4, h=10
0x23,0x15,
0xC6,0x25,0x11,0x0E,
0x02,0x00,0x00,0x00,

// at (64): w=12, h=13
0x2B,0x09,
0xE0,0x18,0x04,0xC2,0x32,0x11,0x89,0xC9,0x39,0x02,
0x06,0xF8,
0x01,0x06,0x08,0x09,0x12,0x11,0x10,0x11,0x12,0x0A,
0x01,0x00,

// A (65): w=9, h=10
0x28,0x03,
0x00,0x00,0xC0,0x60,0x58,0x44,0x43,0xFF,0x00,
0x02,0x03,0x02,0x00,0x00,0x00,0x02,0x03,0x02,

// B (66): w=9, h=10
0x28,0x02,
0x00,0xC0,0x39,0x17,0x11,0x11,0x31,0xE9,0x06,
0x02,0x03,0x02,0x02,0x02,0x02,0x01,0x00,0x00,

// C (67): w=9, h=10
0x28,0x0D,
0xF0,0x0C,0x02,0x03,0x01,0x01,0x01,0x06,0x01,
0x01,0x03,0x02,0x02,0x02,0x01,0x00,0x00,0x00,

// D (68): w=9, h=10
0x28,0x09,
0x00,0xC0,0x39,0x07,0x01,0x01,0x01,0xC3,0x3E,
0x02,0x03,0x02,0x02,0x02,0x01,0x01,0x00,0x00,

// E (69): w=9, h=10
0x28,0x08,
0x00,0xC0,0x39,0x17,0x11,0x31,0x19,0x01,0x03,
0x02,0x03,0x02,0x02,0x02,0x02,0x02,0x01,0x00,

// F (70): w=9, h=10
0x28,0x08,
0x00,0xC0,0x39,0x17,0x11,0x31,0x09,0x01,0x03,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=9, h=10
0x28,0x0E,
0xF0,0x0C,0x02,0x03,0x01,0x21,0xE1,0x26,0x01,
0x01,0x03,0x02,0x02,0x02,0x01,0x00,0x00,0x00,

// H (72): w=10, h=10
0x29,0x08,
0x00,0xC0,0x39,0x17,0x11,0x10,0xD0,0x39,0x07,0x01,
0x02,0x03,0x02,0x00,0x00,0x02,0x03,0x02,0x00,0x00,

// I (73): w=5, h=10
0x24,0x08,
0x00,0xC0,0x39,0x07,0x01,
0x02,0x03,0x02,0x00,0x00,

// J (74): w=6, h=10
0x25,0x08,
0x00,0x00,0xC0,0x39,0x07,0x01,
0x03,0x02,0x01,0x00,0x00,0x00,

// K (75): w=10, h=10
0x29,0x08,
0x00,0xC0,0x39,0x17,0x31,0x48,0x84,0x03,0x01,0x01,
0x02,0x03,0x02,0x00,0x00,0x00,0x02,0x03,0x02,0x00,

// L (76): w=7, h=10
0x26,0x09,
0x00,0xC0,0x39,0x07,0x01,0x00,0x00,
0x02,0x03,0x02,0x02,0x02,0x02,0x01,

// M (77): w=12, h=10
0x2B,0x08,
0x00,0xC0,0x39,0x07,0xFC,0x80,0x60,0x18,0xC4,0x3B,
0x07,0x01,
0x02,0x03,0x02,0x00,0x03,0x00,0x00,0x02,0x03,0x02,
0x00,0x00,

// N (78): w=11, h=10
0x2A,0x08,
0x00,0xC0,0x39,0x07,0x18,0xE0,0x00,0xC0,0x39,0x07,
0x01,
0x02,0x03,0x02,0x00,0x00,0x00,0x01,0x03,0x00,0x00,
0x00,

// O (79): w=9, h=10
0x28,0x09,
0xF0,0x18,0x06,0x02,0x01,0x01,0x81,0xE2,0x3E,
0x00,0x01,0x02,0x02,0x02,0x01,0x01,0x00,0x00,

// P (80): w=9, h=10
0x28,0x08,
0x00,0xC0,0x39,0x17,0x11,0x11,0x11,0x09,0x06,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=9, h=13
0x28,0x09,
0xF0,0x1C,0x06,0x02,0x01,0x01,0x81,0xE2,0x3C,
0x10,0x09,0x0E,0x12,0x12,0x11,0x11,0x08,0x00,

// R (82): w=9, h=10
0x28,0x08,
0x00,0xC0,0x39,0x17,0x31,0xD1,0x11,0x09,0x06,
0x02,0x03,0x02,0x00,0x00,0x00,0x03,0x02,0x00,

// S (83): w=7, h=10
0x26,0x08,
0x80,0x00,0x0E,0x11,0x21,0xC2,0x07,
0x03,0x01,0x02,0x02,0x02,0x01,0x00,

// T (84): w=7, h=10
0x26,0x0E,
0x03,0xC1,0x39,0x07,0x01,0x01,0x03,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,

// U (85): w=10, h=10
0x29,0x0D,
0xC0,0x39,0x07,0x01,0x01,0x00,0xE0,0x1D,0x03,0x01,
0x01,0x02,0x02,0x02,0x02,0x01,0x00,0x00,0x00,0x00,

// V (86): w=9, h=10
0x28,0x0D,
0x01,0xFF,0x01,0x80,0x60,0x10,0x0D,0x03,0x01,
0x00,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=12, h=10
0x2B,0x07,
0x01,0x1F,0xE1,0x80,0x61,0x1F,0xE1,0x80,0x60,0x1D,
0x03,0x01,
0x00,0x00,0x03,0x01,0x00,0x00,0x03,0x01,0x00,0x00,
0x00,0x00,

// X (88): w=9, h=10
0x28,0x08,
0x00,0x01,0x83,0x4D,0x30,0xC8,0x05,0x03,0x01,
0x02,0x03,0x02,0x00,0x00,0x02,0x03,0x02,0x00,

// Y (89): w=9, h=10
0x28,0x07,
0x01,0x03,0x85,0x78,0x10,0x08,0x05,0x03,0x01,
0x00,0x02,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=8, h=10
0x27,0x08,
0x00,0x83,0x41,0x21,0x11,0x09,0x05,0x03,
0x03,0x02,0x02,0x02,0x02,0x02,0x03,0x00,

// bracketleft (91): w=6, h=13
0x25,0x08,
0x00,0xC0,0x38,0x07,0x01,0x01,
0x1E,0x11,0x10,0x00,0x00,0x00,

// backslash (92): w=4, h=10
0x23,0x08,
0x0F,0x78,0xC0,0x00,
0x00,0x00,0x03,0x02,

// bracketright (93): w=6, h=13
0x25,0x03,
0x00,0x00,0x00,0xC1,0x39,0x07,
0x10,0x10,0x1E,0x01,0x00,0x00,

// asciicircum (94): w=7, h=5
0x06,0x07,
0x10,0x0C,0x02,0x01,0x02,0x0C,0x10,

// underscore (95): w=8, h=1
0x87,0x0D,0x26,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=2
0x01,0x15,
0x01,0x02,

// a (97): w=7, h=7
0x06,0x68,
0x38,0x46,0x22,0x11,0x7B,0x46,0x21,

// b (98): w=6, h=10
0x25,0x09,
0x80,0x70,0x1D,0x13,0x88,0x70,
0x01,0x03,0x02,0x01,0x01,0x00,

// c (99): w=6, h=7
0x05,0x68,
0x38,0x66,0x42,0x41,0x21,0x03,

// d (100): w=7, h=10
0x26,0x08,
0xE0,0x10,0x08,0x88,0x70,0x1D,0x03,
0x01,0x02,0x01,0x03,0x02,0x01,0x00,

// e (101): w=6, h=7
0x05,0x69,
0x38,0x6E,0x4A,0x49,0x25,0x06,

// f (102): w=8, h=13
0xA7,0x00,0x24,
0x00,0x00,0x00,0xC8,0x38,0x0E,0x09,0x03,
0x18,0x10,0x0E,0x01,0x00,0x00,0x00,0x00,

// g (103): w=7, h=10
0x26,0x62,
0x80,0x6C,0x52,0x51,0x89,0x07,0x01,
0x01,0x02,0x02,0x02,0x01,0x00,0x00,

// h (104): w=6, h=10
0x25,0x09,
0x00,0xE0,0x39,0x17,0xC8,0x38,
0x03,0x00,0x00,0x01,0x02,0x01,

// i (105): w=4, h=10
0x23,0x08,
0x80,0x68,0x18,0x01,
0x01,0x02,0x01,0x00,

// j (106): w=6, h=13
0xA5,0x00,0x25,
0x00,0x00,0x00,0xC8,0x38,0x01,
0x18,0x10,0x0E,0x01,0x00,0x00,

// k (107): w=7, h=10
0x26,0x08,
0x00,0xE0,0x39,0xE7,0x20,0x18,0x08,
0x03,0x00,0x00,0x01,0x02,0x01,0x00,

// l (108): w=4, h=10
0x23,0x08,
0x80,0x70,0x0D,0x03,
0x01,0x02,0x01,0x00,

// m (109): w=9, h=7
0x08,0x69,
0x61,0x1D,0x07,0x62,0x19,0x07,0x22,0x59,0x27,

// n (110): w=6, h=7
0x05,0x69,
0x60,0x1D,0x07,0x22,0x59,0x27,

// o (111): w=6, h=7
0x05,0x69,
0x38,0x66,0x42,0x21,0x33,0x0E,

// p (112): w=8, h=10
0xA7,0x03,0x26,
0x00,0x80,0x71,0x4F,0x42,0x21,0x31,0x0E,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// q (113): w=7, h=10
0x26,0x68,
0x30,0x4C,0x42,0xE1,0x19,0x06,0x01,
0x00,0x02,0x03,0x02,0x00,0x00,0x00,

// r (114): w=5, h=7
0x04,0x68,
0x70,0x0D,0x02,0x01,0x01,

// s (115): w=5, h=7
0x04,0x69,
0x60,0x46,0x49,0x31,0x03,

// t (116): w=5, h=9
0x24,0x28,
0xC0,0x34,0x8C,0x07,0x04,
0x01,0x01,0x00,0x00,0x00,

// u (117): w=6, h=7
0x05,0x69,
0x70,0x4D,0x23,0x70,0x4C,0x23,

// v (118): w=6, h=7
0x05,0x68,
0x01,0x7F,0x20,0x10,0x0D,0x03,

// w (119): w=9, h=7
0x08,0x68,
0x01,0x7F,0x20,0x10,0x7F,0x20,0x18,0x07,0x01,

// x (120): w=7, h=7
0x06,0x63,
0x40,0x61,0x13,0x0C,0x34,0x43,0x21,

// y (121): w=7, h=10
0x26,0x63,
0x00,0x01,0x3F,0xC0,0x20,0x19,0x07,
0x03,0x02,0x01,0x00,0x00,0x00,0x00,

// z (122): w=6, h=7
0x05,0x68,
0x60,0x53,0x49,0x45,0x63,0x01,

// braceleft (123): w=6, h=13
0x25,0x08,
0x40,0xC0,0x38,0x06,0x01,0x01,
0x0E,0x11,0x10,0x00,0x00,0x00,

// bar (124): w=4, h=13
0x23,0x08,
0x00,0xC0,0x38,0x07,
0x1C,0x03,0x00,0x00,

// braceright (125): w=6, h=13
0x25,0x03,
0x00,0x00,0x00,0x81,0x71,0x4E,
0x10,0x10,0x0C,0x03,0x00,0x00,

// asciitilde (126): w=6, h=2
0x05,0xAF,
0x02,0x01,0x01,0x02,0x02,0x01

};
// 1300 bytes
// 1490 bytes with FAST_FONT_INDEX
