#include "fonts.h"			// for FAST_FONT_INDEX

// courR12 = "Courier"

const unsigned char font_courR12[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xC9,0x00,
0xCF,0x00,
0xDF,0x00,
0xEB,0x00,
0xFB,0x00,
0x09,0x01,
0x0D,0x01,
0x16,0x01,
0x1F,0x01,
0x28,0x01,
0x38,0x01,
0x3E,0x01,
0x47,0x01,
0x4C,0x01,
0x5A,0x01,
0x6A,0x01,
0x7A,0x01,
0x8A,0x01,
0x9A,0x01,
0xAA,0x01,
0xBA,0x01,
0xCA,0x01,
0xD8,0x01,
0xE6,0x01,
0xF6,0x01,
0xFB,0x01,
0x04,0x02,
0x16,0x02,
0x20,0x02,
0x32,0x02,
0x40,0x02,
0x54,0x02,
0x68,0x02,
0x7A,0x02,
0x8C,0x02,
0x9E,0x02,
0xAE,0x02,
0xBE,0x02,
0xD2,0x02,
0xE4,0x02,
0xF4,0x02,
0x06,0x03,
0x18,0x03,
0x2A,0x03,
0x3E,0x03,
0x52,0x03,
0x64,0x03,
0x76,0x03,
0x88,0x03,
0x9A,0x03,
0xAA,0x03,
0xBA,0x03,
0xCE,0x03,
0xE2,0x03,
0xF6,0x03,
0x0A,0x04,
0x1E,0x04,
0x2E,0x04,
0x37,0x04,
0x45,0x04,
0x4E,0x04,
0x57,0x04,
0x64,0x04,
0x6A,0x04,
0x73,0x04,
0x85,0x04,
0x8E,0x04,
0xA0,0x04,
0xA9,0x04,
0xB9,0x04,
0xCB,0x04,
0xDD,0x04,
0xED,0x04,
0xF9,0x04,
0x0B,0x05,
0x1B,0x05,
0x26,0x05,
0x30,0x05,
0x39,0x05,
0x4B,0x05,
0x5D,0x05,
0x67,0x05,
0x6F,0x05,
0x81,0x05,
0x8B,0x05,
0x96,0x05,
0xA1,0x05,
0xAA,0x05,
0xBE,0x05,
0xC6,0x05,
0xCF,0x05,
0xD4,0x05,
0xDD,0x05,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0A,0x4E,
0x00,

// exclam (33): w=1, h=11
0xA0,0x00,0x8A,
0xFF,
0x06,

// quotedbl (34): w=4, h=5
0x03,0x1D,
0x1F,0x00,0x00,0x1F,

// numbersign (35): w=7, h=12
0x26,0x10,
0x90,0x90,0xFF,0x90,0xFF,0x90,0x90,
0x00,0x00,0x0F,0x00,0x0F,0x00,0x00,

// dollar (36): w=5, h=12
0x24,0x17,
0x1C,0x22,0x23,0x22,0xC6,
0x03,0x02,0x1E,0x02,0x01,

// percent (37): w=7, h=11
0x26,0x10,
0x46,0x49,0x29,0xA9,0xA6,0x90,0x10,
0x00,0x00,0x03,0x04,0x04,0x04,0x03,

// ampersand (38): w=6, h=9
0x25,0x51,
0xE0,0x16,0x19,0x21,0xC2,0x30,
0x00,0x01,0x01,0x01,0x00,0x01,

// quotesingle (39): w=1, h=5
0x80,0x00,0x8A,
0x1F,

// parenleft (40): w=3, h=13
0xA2,0x00,0x88,
0xF0,0x0E,0x01,
0x01,0x0E,0x10,

// parenright (41): w=3, h=13
0xA2,0x00,0x6A,
0x01,0x0E,0xF0,
0x10,0x0E,0x01,

// asterisk (42): w=7, h=6
0x06,0x10,
0x04,0x24,0x1C,0x0F,0x1C,0x24,0x04,

// plus (43): w=7, h=9
0x26,0x50,
0x10,0x10,0x10,0xFF,0x10,0x10,0x10,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// comma (44): w=3, h=4
0x82,0x09,0x6A,
0x08,0x07,0x03,

// hyphen (45): w=7, h=1
0x06,0xD0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x09,0x7A,
0x03,0x03,

// slash (47): w=6, h=13
0x25,0x16,
0x00,0x00,0x80,0x70,0x0C,0x03,
0x18,0x06,0x01,0x00,0x00,0x00,

// zero (48): w=7, h=11
0x26,0x10,
0xF8,0x06,0x01,0x01,0x01,0x06,0xF8,
0x00,0x03,0x04,0x04,0x04,0x03,0x00,

// one (49): w=7, h=11
0x26,0x10,
0x04,0x04,0x02,0xFF,0x00,0x00,0x00,
0x04,0x04,0x04,0x07,0x04,0x04,0x04,

// two (50): w=7, h=11
0x26,0x10,
0x04,0x02,0x01,0x81,0x41,0x22,0x1C,
0x04,0x06,0x05,0x04,0x04,0x04,0x06,

// three (51): w=7, h=11
0x26,0x10,
0x04,0x02,0x01,0x11,0x11,0x2A,0xC4,
0x01,0x02,0x04,0x04,0x04,0x02,0x01,

// four (52): w=7, h=11
0x26,0x10,
0xC0,0xA0,0x98,0x84,0x83,0xFF,0x80,
0x00,0x00,0x00,0x04,0x04,0x07,0x04,

// five (53): w=7, h=11
0x26,0x10,
0x00,0x3F,0x11,0x11,0x11,0x21,0xC1,
0x01,0x02,0x04,0x04,0x04,0x02,0x01,

// six (54): w=7, h=11
0x26,0x15,
0xF8,0x26,0x12,0x11,0x11,0x21,0xC0,
0x01,0x02,0x04,0x04,0x04,0x02,0x01,

// seven (55): w=6, h=11
0x25,0x11,
0x03,0x01,0x01,0xC1,0x39,0x07,
0x00,0x00,0x06,0x01,0x00,0x00,

// eight (56): w=6, h=11
0x25,0x16,
0xCC,0x32,0x11,0x11,0x32,0xCC,
0x01,0x02,0x04,0x04,0x02,0x01,

// nine (57): w=7, h=11
0x26,0x10,
0x0C,0x12,0x21,0x21,0x21,0x12,0xFC,
0x00,0x04,0x04,0x04,0x02,0x03,0x00,

// colon (58): w=2, h=7
0x81,0x04,0x7A,
0x63,0x63,

// semicolon (59): w=3, h=9
0xA2,0x04,0x6A,
0x00,0xE3,0x63,
0x01,0x00,0x00,

// less (60): w=8, h=9
0x27,0x4F,
0x10,0x28,0x28,0x44,0x44,0x82,0x82,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,

// equal (61): w=8, h=4
0x07,0x8F,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=8, h=9
0x27,0x4F,
0x01,0x82,0x82,0x44,0x44,0x28,0x28,0x10,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=6, h=10
0x25,0x36,
0x06,0x01,0x61,0x11,0x11,0x0E,
0x00,0x00,0x03,0x00,0x00,0x00,

// at (64): w=9, h=12
0x28,0x09,
0xF8,0x06,0xE1,0x11,0x11,0xF1,0x01,0x06,0xF8,
0x01,0x06,0x08,0x09,0x09,0x09,0x09,0x05,0x00,

// A (65): w=9, h=10
0x28,0x29,
0x00,0x81,0x79,0x47,0x41,0x46,0x78,0x80,0x00,
0x02,0x03,0x02,0x00,0x00,0x00,0x02,0x03,0x02,

// B (66): w=8, h=10
0x27,0x2F,
0x01,0xFF,0x11,0x11,0x11,0x11,0x2A,0xC4,
0x02,0x03,0x02,0x02,0x02,0x02,0x01,0x00,

// C (67): w=8, h=10
0x27,0x2F,
0x78,0x86,0x02,0x01,0x01,0x01,0x02,0x87,
0x00,0x01,0x01,0x02,0x02,0x02,0x01,0x01,

// D (68): w=8, h=10
0x27,0x2F,
0x01,0xFF,0x01,0x01,0x01,0x02,0x86,0x78,
0x02,0x03,0x02,0x02,0x02,0x01,0x01,0x00,

// E (69): w=7, h=10
0x26,0x30,
0x01,0xFF,0x11,0x11,0x39,0x01,0x87,
0x02,0x03,0x02,0x02,0x02,0x02,0x03,

// F (70): w=7, h=10
0x26,0x30,
0x01,0xFF,0x11,0x11,0x39,0x01,0x07,
0x02,0x03,0x02,0x02,0x00,0x00,0x00,

// G (71): w=9, h=10
0x28,0x2E,
0x78,0x86,0x02,0x01,0x01,0x21,0x22,0xE7,0x20,
0x00,0x01,0x01,0x02,0x02,0x02,0x02,0x01,0x00,

// H (72): w=8, h=10
0x27,0x2F,
0x01,0xFF,0x11,0x10,0x10,0x11,0xFF,0x01,
0x02,0x03,0x02,0x00,0x00,0x02,0x03,0x02,

// I (73): w=7, h=10
0x26,0x30,
0x01,0x01,0x01,0xFF,0x01,0x01,0x01,
0x02,0x02,0x02,0x03,0x02,0x02,0x02,

// J (74): w=8, h=10
0x27,0x2F,
0xC0,0x00,0x01,0x01,0x01,0xFF,0x01,0x01,
0x01,0x02,0x02,0x02,0x02,0x01,0x00,0x00,

// K (75): w=8, h=10
0x27,0x2F,
0x01,0xFF,0x21,0x31,0x28,0xC5,0x03,0x01,
0x02,0x03,0x02,0x02,0x00,0x00,0x03,0x02,

// L (76): w=8, h=10
0x27,0x2F,
0x01,0x01,0xFF,0x01,0x01,0x00,0x00,0xC0,
0x02,0x02,0x03,0x02,0x02,0x02,0x02,0x03,

// M (77): w=9, h=10
0x28,0x29,
0x01,0xFF,0x06,0x18,0x60,0x18,0x06,0xFF,0x01,
0x02,0x03,0x02,0x00,0x00,0x00,0x02,0x03,0x02,

// N (78): w=9, h=10
0x28,0x29,
0x01,0xFF,0x03,0x0C,0x30,0xC1,0x01,0xFF,0x01,
0x02,0x03,0x02,0x02,0x00,0x00,0x03,0x03,0x00,

// O (79): w=8, h=10
0x27,0x2F,
0x78,0x86,0x01,0x01,0x01,0x01,0x86,0x78,
0x00,0x01,0x02,0x02,0x02,0x02,0x01,0x00,

// P (80): w=8, h=10
0x27,0x2F,
0x01,0xFF,0x21,0x21,0x21,0x21,0x12,0x0C,
0x02,0x03,0x02,0x02,0x02,0x00,0x00,0x00,

// Q (81): w=8, h=12
0x27,0x2F,
0x78,0x86,0x01,0x01,0x01,0x01,0x86,0x78,
0x00,0x01,0x0A,0x06,0x0A,0x0A,0x09,0x04,

// R (82): w=8, h=10
0x27,0x2F,
0x01,0xFF,0x21,0x21,0x21,0x52,0x8C,0x00,
0x02,0x03,0x02,0x02,0x00,0x00,0x03,0x02,

// S (83): w=7, h=10
0x26,0x30,
0x8C,0x12,0x11,0x11,0x21,0x22,0xC7,
0x03,0x01,0x02,0x02,0x02,0x01,0x00,

// T (84): w=7, h=10
0x26,0x30,
0x0F,0x01,0x01,0xFF,0x01,0x01,0x0F,
0x00,0x02,0x02,0x03,0x02,0x02,0x00,

// U (85): w=9, h=10
0x28,0x29,
0x01,0xFF,0x01,0x01,0x00,0x01,0x01,0xFF,0x01,
0x00,0x00,0x01,0x02,0x02,0x02,0x01,0x00,0x00,

// V (86): w=9, h=10
0x28,0x29,
0x01,0x07,0x39,0xC0,0x00,0xC0,0x39,0x07,0x01,
0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,

// W (87): w=9, h=10
0x28,0x29,
0x01,0x7F,0x81,0x71,0x0C,0x71,0x81,0x7F,0x01,
0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,

// X (88): w=9, h=10
0x28,0x29,
0x01,0x03,0x85,0x48,0x30,0x48,0x85,0x03,0x01,
0x02,0x03,0x02,0x00,0x00,0x00,0x02,0x03,0x02,

// Y (89): w=9, h=10
0x28,0x29,
0x01,0x03,0x0D,0x10,0xE0,0x10,0x0D,0x03,0x01,
0x00,0x00,0x02,0x02,0x03,0x02,0x02,0x00,0x00,

// Z (90): w=7, h=10
0x26,0x30,
0x07,0x81,0x41,0x31,0x09,0x05,0x83,
0x03,0x02,0x02,0x02,0x02,0x02,0x03,

// bracketleft (91): w=3, h=13
0xA2,0x00,0x88,
0xFF,0x01,0x01,
0x1F,0x10,0x10,

// backslash (92): w=6, h=13
0x25,0x16,
0x03,0x0C,0x70,0x80,0x00,0x00,
0x00,0x00,0x00,0x01,0x06,0x18,

// bracketright (93): w=3, h=13
0xA2,0x00,0x6A,
0x01,0x01,0xFF,
0x10,0x10,0x1F,

// asciicircum (94): w=7, h=4
0x06,0x10,
0x08,0x04,0x02,0x01,0x02,0x04,0x08,

// underscore (95): w=10, h=1
0x89,0x0D,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=3
0x82,0x00,0x6A,
0x01,0x02,0x04,

// a (97): w=7, h=7
0x06,0x90,
0x30,0x4A,0x49,0x49,0x49,0x3E,0x40,

// b (98): w=8, h=10
0x27,0x2A,
0x01,0xFF,0x10,0x08,0x08,0x08,0x10,0xE0,
0x02,0x03,0x01,0x02,0x02,0x02,0x01,0x00,

// c (99): w=7, h=7
0x06,0x90,
0x1C,0x22,0x41,0x41,0x41,0x42,0x27,

// d (100): w=8, h=10
0x27,0x2F,
0xE0,0x10,0x08,0x08,0x08,0x11,0xFF,0x00,
0x00,0x01,0x02,0x02,0x02,0x01,0x03,0x02,

// e (101): w=7, h=7
0x06,0x90,
0x1C,0x2A,0x49,0x49,0x49,0x4A,0x2C,

// f (102): w=7, h=10
0x26,0x35,
0x08,0x08,0xFE,0x09,0x09,0x09,0x02,
0x02,0x02,0x03,0x02,0x02,0x02,0x00,

// g (103): w=8, h=10
0x27,0x8F,
0x1C,0x22,0x41,0x41,0x41,0x22,0xFF,0x01,
0x00,0x00,0x02,0x02,0x02,0x02,0x01,0x00,

// h (104): w=8, h=10
0x27,0x2F,
0x01,0xFF,0x10,0x08,0x08,0x08,0xF0,0x00,
0x02,0x03,0x02,0x00,0x00,0x02,0x03,0x02,

// i (105): w=7, h=10
0x26,0x30,
0x00,0x08,0x08,0xFB,0x00,0x00,0x00,
0x02,0x02,0x02,0x03,0x02,0x02,0x02,

// j (106): w=5, h=13
0x24,0x37,
0x08,0x08,0x08,0x0B,0xF8,
0x10,0x10,0x10,0x10,0x0F,

// k (107): w=8, h=10
0x27,0x2F,
0x01,0xFF,0x40,0x40,0xA8,0x18,0x08,0x08,
0x02,0x03,0x00,0x00,0x02,0x03,0x02,0x02,

// l (108): w=7, h=10
0x26,0x30,
0x00,0x01,0x01,0xFF,0x00,0x00,0x00,
0x02,0x02,0x02,0x03,0x02,0x02,0x02,

// m (109): w=9, h=7
0x08,0x89,
0x41,0x7F,0x42,0x01,0x7F,0x42,0x01,0x7F,0x40,

// n (110): w=8, h=7
0x07,0x8F,
0x41,0x7F,0x42,0x01,0x01,0x41,0x7E,0x40,

// o (111): w=7, h=7
0x06,0x90,
0x1C,0x22,0x41,0x41,0x41,0x22,0x1C,

// p (112): w=8, h=10
0x27,0x8F,
0x01,0xFF,0x22,0x41,0x41,0x41,0x22,0x1C,
0x02,0x03,0x02,0x02,0x00,0x00,0x00,0x00,

// q (113): w=8, h=10
0x27,0x8F,
0x1C,0x22,0x41,0x41,0x41,0x22,0xFF,0x01,
0x00,0x00,0x00,0x00,0x02,0x02,0x03,0x02,

// r (114): w=8, h=7
0x07,0x8F,
0x41,0x41,0x7F,0x42,0x41,0x41,0x01,0x02,

// s (115): w=6, h=7
0x05,0x96,
0x66,0x49,0x49,0x49,0x49,0x33,

// t (116): w=8, h=9
0x27,0x4A,
0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x80,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// u (117): w=8, h=7
0x07,0x8F,
0x01,0x3F,0x40,0x40,0x40,0x21,0x7F,0x40,

// v (118): w=9, h=7
0x08,0x89,
0x01,0x03,0x0D,0x31,0x40,0x31,0x0D,0x03,0x01,

// w (119): w=9, h=7
0x08,0x89,
0x01,0x07,0x79,0x20,0x1C,0x20,0x79,0x07,0x01,

// x (120): w=7, h=7
0x06,0x90,
0x41,0x63,0x55,0x08,0x55,0x63,0x41,

// y (121): w=9, h=10
0x28,0x89,
0x01,0x03,0x0D,0x30,0xC0,0x30,0x0D,0x03,0x01,
0x00,0x02,0x02,0x03,0x02,0x00,0x00,0x00,0x00,

// z (122): w=6, h=7
0x05,0x96,
0x63,0x51,0x49,0x45,0x43,0x61,

// braceleft (123): w=3, h=13
0xA2,0x00,0x79,
0x40,0xBE,0x01,
0x00,0x0F,0x10,

// bar (124): w=1, h=12
0xA0,0x01,0x8A,
0xFF,
0x0F,

// braceright (125): w=3, h=13
0xA2,0x00,0x79,
0x01,0xBE,0x40,
0x10,0x0F,0x00,

// asciitilde (126): w=7, h=3
0x06,0xB0,
0x02,0x01,0x01,0x02,0x04,0x04,0x02

};
// 1320 bytes
// 1510 bytes with FAST_FONT_INDEX
