#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_6x9[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xC7,0x00,
0xCC,0x00,
0xD3,0x00,
0xDA,0x00,
0xE2,0x00,
0xE9,0x00,
0xEC,0x00,
0xF0,0x00,
0xF4,0x00,
0xFB,0x00,
0x02,0x01,
0x06,0x01,
0x0D,0x01,
0x11,0x01,
0x17,0x01,
0x1D,0x01,
0x22,0x01,
0x28,0x01,
0x2E,0x01,
0x35,0x01,
0x3B,0x01,
0x41,0x01,
0x47,0x01,
0x4D,0x01,
0x53,0x01,
0x57,0x01,
0x5B,0x01,
0x62,0x01,
0x69,0x01,
0x70,0x01,
0x76,0x01,
0x7D,0x01,
0x84,0x01,
0x8B,0x01,
0x91,0x01,
0x97,0x01,
0x9D,0x01,
0xA3,0x01,
0xA9,0x01,
0xAF,0x01,
0xB4,0x01,
0xBB,0x01,
0xC1,0x01,
0xC7,0x01,
0xCE,0x01,
0xD4,0x01,
0xDB,0x01,
0xE1,0x01,
0xE7,0x01,
0xED,0x01,
0xF3,0x01,
0xFA,0x01,
0x00,0x02,
0x06,0x02,
0x0D,0x02,
0x14,0x02,
0x1B,0x02,
0x21,0x02,
0x26,0x02,
0x2C,0x02,
0x31,0x02,
0x38,0x02,
0x3F,0x02,
0x43,0x02,
0x49,0x02,
0x4F,0x02,
0x55,0x02,
0x5B,0x02,
0x61,0x02,
0x67,0x02,
0x6D,0x02,
0x73,0x02,
0x78,0x02,
0x7D,0x02,
0x83,0x02,
0x88,0x02,
0x8F,0x02,
0x95,0x02,
0x9B,0x02,
0xA1,0x02,
0xA7,0x02,
0xAD,0x02,
0xB3,0x02,
0xB9,0x02,
0xBF,0x02,
0xC5,0x02,
0xCC,0x02,
0xD2,0x02,
0xD8,0x02,
0xDE,0x02,
0xE3,0x02,
0xE6,0x02,
0xEB,0x02,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x07,0x95,
0x00,

// exclam (33): w=1, h=6
0x00,0x17,
0x2F,

// quotedbl (34): w=3, h=3
0x02,0x10,
0x07,0x00,0x07,

// numbersign (35): w=5, h=7
0x04,0x09,
0x14,0x7F,0x14,0x7F,0x14,

// dollar (36): w=5, h=8
0x04,0x09,
0x26,0x49,0xFF,0x49,0x32,

// percent (37): w=6, h=7
0x05,0x08,
0x01,0x32,0x09,0x24,0xD3,0x20,

// ampersand (38): w=5, h=7
0x04,0x09,
0x36,0x49,0x49,0x36,0x50,

// quotesingle (39): w=1, h=3
0x00,0x17,
0x07,

// parenleft (40): w=2, h=7
0x01,0x16,
0x3E,0x41,

// parenright (41): w=2, h=7
0x01,0x16,
0x41,0x3E,

// asterisk (42): w=5, h=5
0x04,0x29,
0x15,0x0E,0x04,0x0E,0x15,

// plus (43): w=5, h=5
0x04,0x29,
0x04,0x04,0x1F,0x04,0x04,

// comma (44): w=2, h=4
0x01,0x96,
0x09,0x07,

// hyphen (45): w=5, h=1
0x04,0x69,
0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x01,0x96,
0x03,0x03,

// slash (47): w=4, h=6
0x03,0x0F,
0x30,0x08,0x04,0x03,

// zero (48): w=4, h=6
0x03,0x0F,
0x1E,0x21,0x21,0x1E,

// one (49): w=3, h=6
0x02,0x10,
0x22,0x3F,0x20,

// two (50): w=4, h=6
0x03,0x0F,
0x22,0x31,0x29,0x26,

// three (51): w=4, h=6
0x03,0x0F,
0x21,0x25,0x27,0x19,

// four (52): w=5, h=6
0x04,0x09,
0x18,0x14,0x12,0x3F,0x10,

// five (53): w=4, h=6
0x03,0x0F,
0x27,0x25,0x25,0x19,

// six (54): w=4, h=6
0x03,0x0F,
0x1E,0x25,0x25,0x18,

// seven (55): w=4, h=6
0x03,0x0F,
0x01,0x31,0x09,0x07,

// eight (56): w=4, h=6
0x03,0x0F,
0x1A,0x25,0x25,0x1A,

// nine (57): w=4, h=6
0x03,0x0F,
0x06,0x29,0x29,0x1E,

// colon (58): w=2, h=5
0x01,0x36,
0x1B,0x1B,

// semicolon (59): w=2, h=7
0x01,0x36,
0x4B,0x3B,

// less (60): w=5, h=5
0x04,0x29,
0x04,0x0A,0x0A,0x11,0x11,

// equal (61): w=5, h=3
0x04,0x49,
0x05,0x05,0x05,0x05,0x05,

// greater (62): w=5, h=5
0x04,0x29,
0x11,0x11,0x0A,0x0A,0x04,

// question (63): w=4, h=6
0x03,0x0F,
0x01,0x6C,0x04,0x03,

// at (64): w=5, h=6
0x04,0x09,
0x1E,0x21,0x2D,0x2B,0x04,

// A (65): w=5, h=6
0x04,0x09,
0x3C,0x0A,0x09,0x0A,0x3C,

// B (66): w=5, h=6
0x04,0x09,
0x3F,0x25,0x25,0x25,0x1A,

// C (67): w=4, h=6
0x03,0x0F,
0x1E,0x21,0x21,0x12,

// D (68): w=4, h=6
0x03,0x0F,
0x3F,0x21,0x21,0x1E,

// E (69): w=4, h=6
0x03,0x0F,
0x3F,0x25,0x25,0x21,

// F (70): w=4, h=6
0x03,0x0F,
0x3F,0x05,0x05,0x01,

// G (71): w=4, h=6
0x03,0x0F,
0x1E,0x21,0x29,0x1A,

// H (72): w=4, h=6
0x03,0x0F,
0x3F,0x04,0x04,0x3F,

// I (73): w=3, h=6
0x02,0x10,
0x21,0x3F,0x21,

// J (74): w=5, h=6
0x04,0x09,
0x10,0x20,0x21,0x1F,0x01,

// K (75): w=4, h=6
0x03,0x0F,
0x3F,0x04,0x0A,0x31,

// L (76): w=4, h=6
0x03,0x0F,
0x3F,0x20,0x20,0x20,

// M (77): w=5, h=6
0x04,0x09,
0x3F,0x02,0x0C,0x02,0x3F,

// N (78): w=4, h=6
0x03,0x0F,
0x3F,0x02,0x04,0x3F,

// O (79): w=5, h=6
0x04,0x09,
0x1E,0x21,0x21,0x21,0x1E,

// P (80): w=4, h=6
0x03,0x0F,
0x3F,0x09,0x09,0x06,

// Q (81): w=4, h=7
0x03,0x0F,
0x1E,0x29,0x31,0x5E,

// R (82): w=4, h=6
0x03,0x0F,
0x3F,0x09,0x09,0x36,

// S (83): w=4, h=6
0x03,0x0F,
0x12,0x25,0x29,0x12,

// T (84): w=5, h=6
0x04,0x09,
0x01,0x01,0x3F,0x01,0x01,

// U (85): w=4, h=6
0x03,0x0F,
0x1F,0x20,0x20,0x1F,

// V (86): w=4, h=6
0x03,0x0F,
0x0F,0x38,0x38,0x0F,

// W (87): w=5, h=6
0x04,0x09,
0x3F,0x10,0x0C,0x10,0x3F,

// X (88): w=5, h=6
0x04,0x09,
0x21,0x12,0x0C,0x12,0x21,

// Y (89): w=5, h=6
0x04,0x09,
0x03,0x04,0x38,0x04,0x03,

// Z (90): w=4, h=6
0x03,0x0F,
0x31,0x29,0x25,0x23,

// bracketleft (91): w=3, h=6
0x02,0x10,
0x3F,0x21,0x21,

// backslash (92): w=4, h=6
0x03,0x0F,
0x03,0x04,0x08,0x30,

// bracketright (93): w=3, h=6
0x02,0x10,
0x21,0x21,0x3F,

// asciicircum (94): w=5, h=3
0x04,0x09,
0x04,0x02,0x01,0x02,0x04,

// underscore (95): w=5, h=1
0x04,0xE9,
0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=2
0x01,0x16,
0x01,0x02,

// a (97): w=4, h=4
0x03,0x4F,
0x06,0x09,0x09,0x0F,

// b (98): w=4, h=6
0x03,0x0F,
0x3F,0x24,0x24,0x18,

// c (99): w=4, h=4
0x03,0x4F,
0x06,0x09,0x09,0x09,

// d (100): w=4, h=6
0x03,0x0F,
0x18,0x24,0x24,0x3F,

// e (101): w=4, h=4
0x03,0x4F,
0x06,0x0D,0x0B,0x0A,

// f (102): w=4, h=6
0x03,0x0F,
0x08,0x3E,0x09,0x02,

// g (103): w=4, h=6
0x03,0x4F,
0x06,0x29,0x29,0x1E,

// h (104): w=4, h=6
0x03,0x0F,
0x3F,0x04,0x04,0x38,

// i (105): w=3, h=6
0x02,0x10,
0x24,0x3D,0x20,

// j (106): w=3, h=8
0x02,0x10,
0x40,0x84,0x7D,

// k (107): w=4, h=6
0x03,0x0F,
0x3F,0x08,0x14,0x20,

// l (108): w=3, h=6
0x02,0x10,
0x21,0x3F,0x20,

// m (109): w=5, h=4
0x04,0x49,
0x0F,0x01,0x06,0x01,0x0E,

// n (110): w=4, h=4
0x03,0x4F,
0x0F,0x01,0x01,0x0E,

// o (111): w=4, h=4
0x03,0x4F,
0x06,0x09,0x09,0x06,

// p (112): w=4, h=6
0x03,0x4F,
0x3F,0x09,0x09,0x06,

// q (113): w=4, h=6
0x03,0x4F,
0x06,0x09,0x09,0x3F,

// r (114): w=4, h=4
0x03,0x4F,
0x0F,0x02,0x01,0x02,

// s (115): w=4, h=4
0x03,0x4F,
0x0A,0x0B,0x0D,0x05,

// t (116): w=4, h=6
0x03,0x0F,
0x04,0x1F,0x24,0x10,

// u (117): w=4, h=4
0x03,0x4F,
0x07,0x08,0x08,0x0F,

// v (118): w=4, h=4
0x03,0x4F,
0x03,0x0C,0x0C,0x03,

// w (119): w=5, h=4
0x04,0x49,
0x07,0x08,0x06,0x08,0x07,

// x (120): w=4, h=4
0x03,0x4F,
0x09,0x06,0x06,0x09,

// y (121): w=4, h=6
0x03,0x4F,
0x17,0x28,0x28,0x1F,

// z (122): w=4, h=4
0x03,0x4F,
0x09,0x0D,0x0B,0x09,

// braceleft (123): w=3, h=6
0x02,0x10,
0x04,0x1B,0x60,

// bar (124): w=1, h=7
0x00,0x17,
0x7F,

// braceright (125): w=3, h=6
0x02,0x10,
0x60,0x1B,0x04,

// asciitilde (126): w=4, h=2
0x03,0x2F,
0x02,0x01,0x02,0x01

};
// 563 bytes
// 753 bytes with FAST_FONT_INDEX
