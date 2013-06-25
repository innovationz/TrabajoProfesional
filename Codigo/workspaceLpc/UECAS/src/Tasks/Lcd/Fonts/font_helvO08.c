#include "fonts.h"			// for FAST_FONT_INDEX

// helvO08 = "Helvetica Oblique"

const unsigned char font_helvO08[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC3,0x00,
0xC8,0x00,
0xCD,0x00,
0xD6,0x00,
0xE4,0x00,
0xED,0x00,
0xF6,0x00,
0xF9,0x00,
0x03,0x01,
0x0D,0x01,
0x13,0x01,
0x19,0x01,
0x1D,0x01,
0x23,0x01,
0x26,0x01,
0x2C,0x01,
0x34,0x01,
0x39,0x01,
0x41,0x01,
0x49,0x01,
0x51,0x01,
0x59,0x01,
0x61,0x01,
0x68,0x01,
0x70,0x01,
0x78,0x01,
0x7C,0x01,
0x81,0x01,
0x87,0x01,
0x8E,0x01,
0x94,0x01,
0x9B,0x01,
0xB1,0x01,
0xBA,0x01,
0xC3,0x01,
0xCC,0x01,
0xD5,0x01,
0xDE,0x01,
0xE7,0x01,
0xF1,0x01,
0xFB,0x01,
0x00,0x02,
0x08,0x02,
0x11,0x02,
0x17,0x02,
0x21,0x02,
0x2B,0x02,
0x35,0x02,
0x3E,0x02,
0x50,0x02,
0x59,0x02,
0x62,0x02,
0x69,0x02,
0x73,0x02,
0x7B,0x02,
0x86,0x02,
0x90,0x02,
0x99,0x02,
0xA2,0x02,
0xB0,0x02,
0xB4,0x02,
0xC3,0x02,
0xC9,0x02,
0xD2,0x02,
0xD6,0x02,
0xDD,0x02,
0xE4,0x02,
0xEB,0x02,
0xF3,0x02,
0xFA,0x02,
0x00,0x03,
0x08,0x03,
0x10,0x03,
0x15,0x03,
0x1F,0x03,
0x26,0x03,
0x2B,0x03,
0x35,0x03,
0x3D,0x03,
0x45,0x03,
0x4D,0x03,
0x54,0x03,
0x5B,0x03,
0x62,0x03,
0x68,0x03,
0x6F,0x03,
0x76,0x03,
0x7F,0x03,
0x87,0x03,
0x8E,0x03,
0x95,0x03,
0x9F,0x03,
0xA9,0x03,
0xB3,0x03,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x00,0xEA,
0x00,

// exclam (33): w=3, h=8
0x02,0x0E,
0x80,0x38,0x07,

// quotedbl (34): w=3, h=3
0x02,0x0E,
0x07,0x00,0x07,

// numbersign (35): w=7, h=7
0x06,0x28,
0x10,0x74,0x1C,0x77,0x1C,0x17,0x04,

// dollar (36): w=6, h=9
0x25,0x08,
0x40,0x86,0xF9,0x8F,0x71,0x02,
0x00,0x03,0x00,0x00,0x00,0x00,

// percent (37): w=7, h=8
0x06,0x0F,
0x86,0x45,0x25,0xDB,0xA4,0xA2,0x61,

// ampersand (38): w=7, h=8
0x06,0x09,
0x60,0x90,0x8E,0x99,0x69,0xA6,0x10,

// quotesingle (39): w=1, h=3
0x00,0x0E,
0x07,

// parenleft (40): w=4, h=10
0x23,0x08,
0xF0,0x0C,0x02,0x01,
0x01,0x02,0x00,0x00,

// parenright (41): w=4, h=10
0x23,0x03,
0x00,0x00,0xC1,0x3E,
0x02,0x01,0x00,0x00,

// asterisk (42): w=4, h=3
0x03,0x0D,
0x04,0x03,0x06,0x01,

// plus (43): w=4, h=5
0x03,0x4F,
0x04,0x1C,0x07,0x04,

// comma (44): w=2, h=3
0x01,0xE9,
0x04,0x03,

// hyphen (45): w=4, h=1
0x03,0x8F,
0x01,0x01,0x01,0x01,

// period (46): w=1, h=1
0x00,0xEF,
0x01,

// slash (47): w=4, h=8
0x03,0x07,
0xC0,0x30,0x0C,0x03,

// zero (48): w=6, h=8
0x05,0x08,
0x78,0x86,0x83,0xC1,0x61,0x1E,

// one (49): w=3, h=8
0x02,0x15,
0xE2,0x1E,0x03,

// two (50): w=6, h=8
0x05,0x08,
0xC0,0xA2,0x91,0x91,0x89,0x06,

// three (51): w=6, h=8
0x05,0x08,
0x40,0x82,0x89,0x89,0x79,0x06,

// four (52): w=6, h=8
0x05,0x08,
0x20,0x30,0x28,0xE4,0x3A,0x07,

// five (53): w=6, h=8
0x05,0x08,
0x60,0x8C,0x8B,0x89,0x49,0x31,

// six (54): w=6, h=8
0x05,0x08,
0x70,0x8E,0x89,0x89,0x71,0x02,

// seven (55): w=5, h=8
0x04,0x0E,
0xC1,0x31,0x09,0x05,0x03,

// eight (56): w=6, h=8
0x05,0x08,
0x70,0x8E,0x89,0x89,0x79,0x06,

// nine (57): w=6, h=8
0x05,0x08,
0x40,0x8E,0x91,0x91,0x71,0x1E,

// colon (58): w=2, h=6
0x01,0x4E,
0x20,0x01,

// semicolon (59): w=3, h=8
0x02,0x48,
0x80,0x60,0x01,

// less (60): w=4, h=5
0x03,0x4F,
0x04,0x0A,0x12,0x01,

// equal (61): w=5, h=3
0x04,0x6F,
0x04,0x05,0x05,0x05,0x01,

// greater (62): w=4, h=5
0x03,0x4F,
0x10,0x09,0x0A,0x04,

// question (63): w=5, h=8
0x04,0x0E,
0x80,0x32,0x09,0x09,0x06,

// at (64): w=10, h=9
0x29,0x09,
0x70,0x8C,0x32,0x4A,0x45,0x45,0x39,0x45,0x42,0x3C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// A (65): w=7, h=8
0x06,0x03,
0x80,0x60,0x30,0x2C,0x22,0x3F,0xE0,

// B (66): w=7, h=8
0x06,0x08,
0xE0,0x9C,0x8B,0x89,0xC9,0x79,0x06,

// C (67): w=7, h=8
0x06,0x09,
0x70,0x8C,0x82,0x81,0x81,0x41,0x22,

// D (68): w=7, h=8
0x06,0x09,
0xE0,0x98,0x87,0x81,0x41,0x31,0x0E,

// E (69): w=7, h=8
0x06,0x08,
0xE0,0x9C,0x8B,0x89,0x89,0x09,0x01,

// F (70): w=7, h=8
0x06,0x07,
0xE0,0x1C,0x0B,0x09,0x09,0x01,0x01,

// G (71): w=8, h=8
0x07,0x08,
0x70,0x8C,0x82,0x81,0x91,0x51,0x31,0x02,

// H (72): w=8, h=8
0x07,0x08,
0xE0,0x1C,0x0B,0x08,0x08,0xE8,0x1C,0x03,

// I (73): w=3, h=8
0x02,0x08,
0xE0,0x1C,0x03,

// J (74): w=6, h=8
0x05,0x02,
0x60,0x80,0x80,0x60,0x1C,0x03,

// K (75): w=7, h=8
0x06,0x08,
0xE0,0x1C,0x0B,0x18,0x64,0x82,0x01,

// L (76): w=4, h=8
0x03,0x09,
0xE0,0x9C,0x83,0x80,

// M (77): w=8, h=8
0x07,0x09,
0xE0,0x1C,0x07,0xF8,0x20,0x18,0xE6,0x1F,

// N (78): w=8, h=8
0x07,0x08,
0xE0,0x1C,0x03,0x1C,0x20,0xC0,0x3C,0x03,

// O (79): w=8, h=8
0x07,0x08,
0x60,0x98,0x86,0x81,0x81,0x61,0x19,0x06,

// P (80): w=7, h=8
0x06,0x08,
0xE0,0x1C,0x0B,0x09,0x09,0x09,0x06,

// Q (81): w=8, h=9
0x27,0x08,
0x60,0x98,0x86,0xA1,0xC1,0xE1,0x19,0x06,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,

// R (82): w=7, h=8
0x06,0x08,
0xE0,0x1C,0x0B,0x09,0xC9,0x39,0x06,

// S (83): w=7, h=8
0x06,0x08,
0x60,0x84,0x8A,0x89,0x49,0x31,0x02,

// T (84): w=5, h=8
0x04,0x0D,
0xE1,0x1D,0x03,0x01,0x01,

// U (85): w=8, h=8
0x07,0x08,
0x60,0x9C,0x83,0x80,0x80,0x60,0x1C,0x03,

// V (86): w=6, h=8
0x05,0x0E,
0x7F,0x80,0x40,0x30,0x0C,0x03,

// W (87): w=9, h=8
0x08,0x0E,
0x1F,0xE0,0x30,0x0C,0x1F,0xE0,0x30,0x0C,0x03,

// X (88): w=8, h=8
0x07,0x02,
0x80,0x40,0x23,0x1C,0x38,0xC4,0x02,0x01,

// Y (89): w=7, h=8
0x06,0x0D,
0x03,0xEC,0x10,0x08,0x04,0x02,0x01,

// Z (90): w=7, h=8
0x06,0x08,
0xC0,0xA0,0x91,0x89,0x85,0x03,0x01,

// bracketleft (91): w=6, h=10
0x25,0x01,
0x00,0xE0,0x1C,0x03,0x01,0x01,
0x03,0x02,0x02,0x00,0x00,0x00,

// backslash (92): w=2, h=8
0x01,0x0E,
0x0F,0xF0,

// bracketright (93): w=6, h=10
0xA5,0x00,0x25,
0x00,0x00,0x00,0xE1,0x1D,0x03,
0x02,0x02,0x03,0x00,0x00,0x00,

// asciicircum (94): w=4, h=4
0x03,0x0F,
0x08,0x04,0x03,0x0C,

// underscore (95): w=6, h=1
0x85,0x09,0x36,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=1
0x01,0x0E,
0x00,0x03,

// a (97): w=5, h=6
0x04,0x48,
0x18,0x25,0x25,0x1D,0x26,

// b (98): w=5, h=8
0x04,0x08,
0xE0,0x9C,0x87,0x44,0x38,

// c (99): w=5, h=6
0x04,0x48,
0x1C,0x22,0x21,0x11,0x02,

// d (100): w=6, h=8
0x05,0x07,
0x70,0x88,0x84,0xE4,0x1C,0x03,

// e (101): w=5, h=6
0x04,0x48,
0x1C,0x26,0x25,0x15,0x03,

// f (102): w=4, h=8
0x03,0x0D,
0xE4,0x1E,0x05,0x01,

// g (103): w=6, h=8
0x05,0x42,
0x40,0x9C,0xA2,0x61,0x39,0x07,

// h (104): w=6, h=8
0x05,0x08,
0xE0,0x1C,0x0B,0x04,0xE4,0x18,

// i (105): w=3, h=8
0x02,0x07,
0xE0,0x1C,0x01,

// j (106): w=4, h=10
0x23,0x01,
0x00,0xE0,0x1C,0x01,
0x02,0x01,0x00,0x00,

// k (107): w=5, h=8
0x04,0x08,
0xE0,0x1C,0x33,0xC8,0x04,

// l (108): w=3, h=8
0x02,0x07,
0xE0,0x1C,0x03,

// m (109): w=8, h=6
0x07,0x48,
0x38,0x07,0x01,0x39,0x06,0x01,0x39,0x06,

// n (110): w=6, h=6
0x05,0x48,
0x38,0x07,0x02,0x01,0x39,0x06,

// o (111): w=6, h=6
0x05,0x48,
0x18,0x26,0x21,0x21,0x19,0x06,

// p (112): w=6, h=8
0x05,0x42,
0xC0,0x38,0x27,0x21,0x11,0x0E,

// q (113): w=5, h=8
0x04,0x48,
0x1C,0x22,0xE1,0x39,0x07,

// r (114): w=5, h=6
0x04,0x47,
0x38,0x07,0x02,0x01,0x01,

// s (115): w=5, h=6
0x04,0x48,
0x10,0x22,0x25,0x19,0x02,

// t (116): w=4, h=8
0x03,0x0D,
0xE4,0x9C,0x07,0x04,

// u (117): w=5, h=6
0x04,0x48,
0x1C,0x23,0x20,0x38,0x07,

// v (118): w=5, h=6
0x04,0x4E,
0x0F,0x30,0x18,0x06,0x01,

// w (119): w=7, h=6
0x06,0x4E,
0x0F,0x30,0x08,0x0F,0x30,0x08,0x07,

// x (120): w=6, h=6
0x05,0x48,
0x20,0x10,0x0B,0x0C,0x32,0x01,

// y (121): w=5, h=8
0x04,0x48,
0x80,0x4F,0x30,0x0C,0x03,

// z (122): w=5, h=6
0x04,0x48,
0x20,0x31,0x29,0x25,0x03,

// braceleft (123): w=4, h=10
0x23,0x0D,
0x90,0x6C,0x02,0x01,
0x01,0x02,0x00,0x00,

// bar (124): w=4, h=10
0x23,0x02,
0x00,0xE0,0x1C,0x03,
0x03,0x00,0x00,0x00,

// braceright (125): w=4, h=10
0x23,0x03,
0x00,0x00,0xE9,0x16,
0x02,0x01,0x00,0x00,

// asciitilde (126): w=6, h=2
0x05,0x6E,
0x02,0x01,0x01,0x02,0x02,0x01

};
// 765 bytes
// 955 bytes with FAST_FONT_INDEX
