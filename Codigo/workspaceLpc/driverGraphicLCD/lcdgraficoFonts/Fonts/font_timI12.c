#include "fonts.h"			// for FAST_FONT_INDEX

// timI12 = "Times Italic"

const unsigned char font_timI12[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCE,0x00,
0xD6,0x00,
0xE8,0x00,
0xFA,0x00,
0x14,0x01,
0x28,0x01,
0x2D,0x01,
0x39,0x01,
0x45,0x01,
0x4C,0x01,
0x60,0x01,
0x66,0x01,
0x6C,0x01,
0x70,0x01,
0x7C,0x01,
0x8C,0x01,
0x9A,0x01,
0xAC,0x01,
0xBC,0x01,
0xCC,0x01,
0xDC,0x01,
0xEC,0x01,
0xFC,0x01,
0x0C,0x02,
0x1C,0x02,
0x21,0x02,
0x2B,0x02,
0x3F,0x02,
0x49,0x02,
0x5D,0x02,
0x69,0x02,
0x85,0x02,
0x9B,0x02,
0xAF,0x02,
0xC5,0x02,
0xDD,0x02,
0xF3,0x02,
0x09,0x03,
0x21,0x03,
0x3B,0x03,
0x49,0x03,
0x59,0x03,
0x6F,0x03,
0x83,0x03,
0xA3,0x03,
0xBF,0x03,
0xD5,0x03,
0xEB,0x03,
0x01,0x04,
0x17,0x04,
0x29,0x04,
0x3D,0x04,
0x53,0x04,
0x69,0x04,
0x89,0x04,
0x9F,0x04,
0xB3,0x04,
0xC7,0x04,
0xD5,0x04,
0xE1,0x04,
0xEF,0x04,
0xF8,0x04,
0x03,0x05,
0x08,0x05,
0x11,0x05,
0x21,0x05,
0x29,0x05,
0x3B,0x05,
0x43,0x05,
0x56,0x05,
0x68,0x05,
0x78,0x05,
0x82,0x05,
0x93,0x05,
0xA3,0x05,
0xAD,0x05,
0xBA,0x05,
0xC3,0x05,
0xCC,0x05,
0xE1,0x05,
0xF1,0x05,
0xF9,0x05,
0x00,0x06,
0x0C,0x06,
0x15,0x06,
0x1E,0x06,
0x2B,0x06,
0x34,0x06,
0x44,0x06,
0x4C,0x06,
0x5A,0x06,
0x66,0x06,
0x74,0x06,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0A,0x48,
0x00,

// exclam (33): w=4, h=11
0x23,0x0A,
0x00,0xE0,0x3C,0x07,
0x06,0x00,0x00,0x00,

// quotedbl (34): w=6, h=4
0x05,0x2E,
0x08,0x06,0x03,0x08,0x06,0x03,

// numbersign (35): w=8, h=11
0x27,0x08,
0x80,0x88,0xF8,0x8F,0x88,0xF8,0x8F,0x08,
0x00,0x07,0x00,0x00,0x07,0x00,0x00,0x00,

// dollar (36): w=8, h=12
0x27,0x08,
0x00,0x00,0x0E,0x9B,0x7D,0x63,0xC2,0x07,
0x07,0x02,0x1C,0x07,0x04,0x02,0x01,0x00,

// percent (37): w=12, h=11
0x2B,0x09,
0x1C,0x22,0x21,0x11,0x8E,0x62,0x1A,0x86,0x41,0x20,
0x20,0xC0,
0x00,0x00,0x00,0x06,0x01,0x00,0x00,0x03,0x04,0x04,
0x02,0x01,

// ampersand (38): w=9, h=11
0x28,0x16,
0x80,0x40,0x20,0xFE,0x91,0x09,0xA6,0x60,0x20,
0x03,0x06,0x04,0x04,0x03,0x03,0x06,0x04,0x02,

// quotesingle (39): w=3, h=4
0x02,0x29,
0x08,0x06,0x03,

// parenleft (40): w=5, h=14
0x24,0x0E,
0xE0,0x18,0x04,0x02,0x01,
0x07,0x18,0x20,0x00,0x00,

// parenright (41): w=5, h=14
0x24,0x09,
0x00,0x00,0x01,0x06,0xF8,
0x20,0x10,0x08,0x06,0x01,

// asterisk (42): w=5, h=6
0x04,0x15,
0x12,0x0C,0x3F,0x0C,0x12,

// plus (43): w=9, h=9
0x28,0x4F,
0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,

// comma (44): w=3, h=4
0x82,0x09,0x46,
0x08,0x04,0x03,

// hyphen (45): w=4, h=1
0x03,0xE9,
0x01,0x01,0x01,0x01,

// period (46): w=1, h=2
0x80,0x09,0x57,
0x03,

// slash (47): w=5, h=11
0x24,0x08,
0x00,0x80,0x70,0x0E,0x01,
0x04,0x03,0x00,0x00,0x00,

// zero (48): w=7, h=11
0x26,0x09,
0xF0,0x0C,0x02,0x01,0x01,0x83,0x7E,
0x03,0x06,0x04,0x04,0x02,0x01,0x00,

// one (49): w=6, h=11
0x25,0x0F,
0x00,0x00,0x80,0xF2,0x1E,0x03,
0x04,0x04,0x07,0x04,0x00,0x00,

// two (50): w=8, h=11
0x27,0x03,
0x00,0x00,0x02,0x81,0x41,0x21,0x13,0x0E,
0x04,0x06,0x05,0x04,0x04,0x04,0x02,0x00,

// three (51): w=7, h=11
0x26,0x09,
0x00,0x00,0x12,0x11,0x31,0xEB,0x06,
0x02,0x04,0x04,0x04,0x02,0x01,0x00,

// four (52): w=7, h=11
0x26,0x09,
0xC0,0xA0,0x90,0x88,0xC4,0xBA,0x8F,
0x00,0x00,0x00,0x06,0x03,0x00,0x00,

// five (53): w=7, h=11
0x26,0x09,
0x00,0x08,0x0C,0x0B,0x19,0xF1,0x01,
0x02,0x04,0x04,0x04,0x02,0x01,0x00,

// six (54): w=7, h=11
0x26,0x0E,
0xF0,0x28,0x14,0x12,0x12,0xE1,0x01,
0x01,0x02,0x04,0x04,0x02,0x01,0x00,

// seven (55): w=7, h=11
0x26,0x0E,
0x02,0x01,0xC1,0x21,0x19,0x05,0x03,
0x06,0x01,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=7, h=11
0x26,0x09,
0x80,0x40,0x2E,0x39,0x71,0xD1,0x0E,
0x03,0x04,0x04,0x04,0x02,0x01,0x00,

// nine (57): w=7, h=11
0x26,0x09,
0x00,0x3C,0x42,0x41,0x41,0xA2,0x7C,
0x04,0x04,0x02,0x02,0x01,0x00,0x00,

// colon (58): w=3, h=7
0x02,0x8F,
0x60,0x00,0x03,

// semicolon (59): w=4, h=9
0x23,0x89,
0x00,0x80,0x60,0x03,
0x01,0x00,0x00,0x00,

// less (60): w=9, h=9
0x28,0x4F,
0x10,0x28,0x28,0x44,0x44,0x82,0x82,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=8, h=4
0x07,0xB0,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=9, h=9
0x28,0x54,
0x01,0x01,0x82,0x82,0x44,0x44,0x28,0x28,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=5, h=11
0x24,0x15,
0x06,0xC1,0x21,0x11,0x0E,
0x06,0x00,0x00,0x00,0x00,

// at (64): w=13, h=14
0x2C,0x0F,
0xE0,0x18,0x04,0x82,0x62,0x11,0x09,0x89,0xF1,0x1A,
0x06,0x0C,0xF0,
0x03,0x0C,0x10,0x13,0x24,0x24,0x22,0x21,0x27,0x14,
0x12,0x01,0x00,

// A (65): w=10, h=11
0x29,0x03,
0x00,0x00,0x80,0x40,0x70,0x48,0x44,0x42,0xFF,0x00,
0x04,0x06,0x05,0x00,0x00,0x00,0x00,0x04,0x07,0x04,

// B (66): w=9, h=11
0x28,0x09,
0x00,0x00,0xE0,0x3D,0x27,0x21,0x61,0xD3,0x0E,
0x04,0x07,0x05,0x04,0x04,0x04,0x02,0x01,0x00,

// C (67): w=10, h=11
0x29,0x0E,
0xE0,0x18,0x04,0x02,0x02,0x01,0x01,0x01,0x02,0x07,
0x01,0x03,0x06,0x04,0x04,0x04,0x04,0x02,0x01,0x00,

// D (68): w=11, h=11
0x2A,0x09,
0x00,0x00,0xE0,0x3D,0x07,0x01,0x01,0x01,0x01,0xC2,
0x3C,
0x04,0x07,0x05,0x04,0x04,0x04,0x02,0x02,0x01,0x00,
0x00,

// E (69): w=10, h=11
0x29,0x08,
0x00,0x00,0xE0,0x3D,0x27,0x21,0x61,0x11,0x01,0x03,
0x04,0x07,0x05,0x04,0x04,0x04,0x04,0x06,0x03,0x00,

// F (70): w=10, h=11
0x29,0x08,
0x00,0x00,0xE0,0x3D,0x27,0x21,0x61,0x11,0x01,0x03,
0x04,0x07,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=11, h=11
0x2A,0x09,
0xE0,0x18,0x04,0x02,0x02,0x01,0x01,0x21,0xE2,0x67,
0x20,
0x01,0x03,0x06,0x04,0x04,0x04,0x04,0x02,0x01,0x00,
0x00,

// H (72): w=12, h=11
0x2B,0x08,
0x00,0x00,0xE0,0x3D,0x27,0x21,0x20,0x20,0xE0,0x3D,
0x07,0x01,
0x04,0x07,0x05,0x00,0x00,0x00,0x04,0x07,0x05,0x00,
0x00,0x00,

// I (73): w=6, h=11
0x25,0x08,
0x00,0x00,0xE0,0x3D,0x07,0x01,
0x04,0x07,0x05,0x00,0x00,0x00,

// J (74): w=7, h=11
0x26,0x08,
0x00,0x00,0x00,0xE0,0x3D,0x07,0x01,
0x03,0x04,0x03,0x01,0x00,0x00,0x00,

// K (75): w=10, h=11
0x29,0x09,
0x00,0x00,0xE0,0x3D,0x27,0xF1,0x88,0x05,0x03,0x01,
0x04,0x07,0x05,0x00,0x00,0x04,0x07,0x06,0x04,0x00,

// L (76): w=9, h=11
0x28,0x08,
0x00,0x00,0xE0,0x3D,0x07,0x01,0x00,0x00,0x00,
0x04,0x07,0x05,0x04,0x04,0x04,0x04,0x06,0x03,

// M (77): w=15, h=11
0x2E,0x07,
0x00,0x00,0xE0,0x1D,0x03,0xFF,0x00,0x80,0x60,0x10,
0x08,0xE4,0x3B,0x07,0x01,
0x04,0x07,0x04,0x00,0x00,0x07,0x03,0x00,0x00,0x04,
0x07,0x05,0x00,0x00,0x00,

// N (78): w=13, h=11
0x2C,0x01,
0x00,0x00,0xE0,0x1D,0x07,0x1C,0x70,0xC0,0x00,0xC0,
0x39,0x07,0x01,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x01,0x07,0x01,
0x00,0x00,0x00,

// O (79): w=10, h=11
0x29,0x0F,
0xF0,0x8C,0x02,0x02,0x01,0x01,0x01,0x02,0xCE,0x78,
0x00,0x03,0x02,0x04,0x04,0x04,0x02,0x03,0x01,0x00,

// P (80): w=10, h=11
0x29,0x08,
0x00,0x00,0xE0,0x3D,0x27,0x21,0x21,0x11,0x11,0x0E,
0x04,0x07,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=10, h=14
0x29,0x0F,
0xE0,0x98,0x04,0x02,0x02,0x01,0x01,0x02,0xCE,0x38,
0x20,0x13,0x1A,0x14,0x34,0x32,0x22,0x21,0x10,0x00,

// R (82): w=10, h=11
0x29,0x08,
0x00,0x00,0xE0,0x3D,0x27,0x61,0xA1,0x11,0x11,0x0E,
0x04,0x07,0x05,0x00,0x00,0x00,0x01,0x07,0x04,0x00,

// S (83): w=8, h=11
0x27,0x08,
0x00,0x00,0x0E,0x1B,0x31,0x61,0xC2,0x07,
0x07,0x02,0x04,0x04,0x04,0x02,0x01,0x00,

// T (84): w=9, h=11
0x28,0x0D,
0x03,0x01,0xE1,0x3D,0x07,0x01,0x01,0x01,0x03,
0x04,0x07,0x05,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=10, h=11
0x29,0x14,
0xE0,0x3D,0x07,0x01,0x00,0x00,0xC0,0x39,0x07,0x01,
0x03,0x04,0x04,0x04,0x04,0x02,0x01,0x00,0x00,0x00,

// V (86): w=10, h=11
0x29,0x0D,
0x01,0x1F,0xF9,0x01,0x80,0x60,0x10,0x0D,0x03,0x01,
0x00,0x00,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=15, h=11
0x2E,0x07,
0x01,0x1F,0xF9,0x80,0x40,0x31,0x1F,0xF9,0x00,0x80,
0x60,0x10,0x0D,0x03,0x01,
0x00,0x00,0x07,0x01,0x00,0x00,0x00,0x07,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,

// X (88): w=10, h=11
0x29,0x08,
0x00,0x01,0x03,0xCF,0x39,0xE0,0x98,0x05,0x03,0x01,
0x04,0x06,0x05,0x00,0x00,0x04,0x07,0x06,0x04,0x00,

// Y (89): w=9, h=11
0x28,0x0D,
0x01,0x07,0x9D,0xE0,0x10,0x08,0x05,0x03,0x01,
0x00,0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=9, h=11
0x28,0x08,
0x00,0x02,0x01,0xC1,0x71,0x19,0x07,0x03,0x01,
0x04,0x06,0x07,0x04,0x04,0x04,0x04,0x02,0x00,

// bracketleft (91): w=6, h=14
0x25,0x08,
0x00,0xC0,0x78,0x0F,0x01,0x01,
0x3C,0x27,0x20,0x00,0x00,0x00,

// backslash (92): w=5, h=11
0x24,0x03,
0x01,0x0E,0x70,0x80,0x00,
0x00,0x00,0x00,0x03,0x04,

// bracketright (93): w=6, h=14
0x25,0x08,
0x00,0x00,0x00,0x81,0xF9,0x0F,
0x20,0x20,0x3C,0x07,0x00,0x00,

// asciicircum (94): w=7, h=7
0x06,0x08,
0x60,0x18,0x06,0x01,0x06,0x18,0x60,

// underscore (95): w=8, h=1
0x87,0x0E,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=2
0x02,0x10,
0x00,0x01,0x06,

// a (97): w=7, h=8
0x06,0x69,
0x78,0x8C,0x82,0x41,0x71,0x9E,0x43,

// b (98): w=7, h=11
0x26,0x09,
0x00,0xE0,0x3D,0x17,0x08,0x88,0xF0,
0x07,0x03,0x04,0x04,0x02,0x01,0x00,

// c (99): w=6, h=8
0x05,0x69,
0x78,0xCE,0x82,0x81,0x41,0x02,

// d (100): w=8, h=11
0x27,0x08,
0xC0,0x60,0x10,0x08,0x88,0xF0,0x1D,0x07,
0x03,0x04,0x04,0x02,0x01,0x03,0x04,0x02,

// e (101): w=6, h=8
0x05,0x6E,
0x78,0xD6,0x92,0x89,0x49,0x06,

// f (102): w=8, h=15
0xA7,0x00,0x24,
0x00,0x00,0x10,0x90,0xF0,0x1E,0x11,0x03,
0x60,0x40,0x3C,0x07,0x00,0x00,0x00,0x00,

// g (103): w=8, h=12
0x27,0x68,
0x00,0x00,0xDE,0xA3,0xA1,0x31,0x1E,0x02,
0x07,0x09,0x08,0x08,0x0D,0x07,0x00,0x00,

// h (104): w=7, h=11
0x26,0x09,
0x00,0xE0,0x7D,0x27,0x10,0xC8,0x78,
0x07,0x01,0x00,0x00,0x07,0x05,0x02,

// i (105): w=4, h=11
0x23,0x0E,
0x00,0xD0,0x78,0x03,
0x07,0x05,0x02,0x00,

// j (106): w=7, h=15
0xA6,0x00,0x16,
0x00,0x00,0x00,0x00,0x00,0xE8,0x3B,
0x20,0x40,0x60,0x38,0x0F,0x01,0x00,

// k (107): w=7, h=11
0x26,0x08,
0x00,0xE0,0xBD,0xC7,0x20,0x18,0x08,
0x07,0x01,0x00,0x01,0x07,0x04,0x02,

// l (108): w=4, h=11
0x23,0x0E,
0x00,0xE0,0x3D,0x07,
0x07,0x05,0x02,0x00,

// m (109): w=11, h=8
0x0A,0x69,
0xE0,0x39,0x0F,0x04,0xE2,0x39,0x0F,0x04,0xE2,0xB9,
0x4F,

// n (110): w=7, h=8
0x06,0x69,
0xE0,0x39,0x0F,0x04,0xE2,0xB9,0x4F,

// o (111): w=7, h=8
0x06,0x69,
0x78,0xCE,0x82,0x81,0x41,0x73,0x1E,

// p (112): w=9, h=12
0xA8,0x03,0x26,
0x00,0x00,0xE0,0x7D,0x87,0x82,0x41,0x31,0x1E,
0x08,0x0F,0x09,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=7, h=12
0x26,0x69,
0x78,0x8C,0x82,0x41,0xF1,0x1E,0x03,
0x00,0x00,0x08,0x0E,0x0B,0x00,0x00,

// r (114): w=6, h=8
0x05,0x68,
0xE0,0x39,0x0F,0x04,0x02,0x03,

// s (115): w=5, h=8
0x04,0x69,
0xC0,0x8E,0x99,0x71,0x03,

// t (116): w=5, h=10
0x24,0x28,
0x80,0x74,0x1C,0x07,0x04,
0x03,0x02,0x01,0x00,0x00,

// u (117): w=7, h=8
0x06,0x69,
0xF0,0x9D,0x47,0x20,0xF0,0x9C,0x47,

// v (118): w=7, h=8
0x06,0x68,
0x01,0x1F,0xF8,0x40,0x20,0x19,0x07,

// w (119): w=11, h=8
0x0A,0x68,
0x02,0x1F,0xF8,0x40,0x30,0x0C,0xFF,0x40,0x20,0x19,
0x07,

// x (120): w=7, h=8
0x06,0x68,
0x80,0x81,0x63,0x1C,0x7E,0x81,0x41,

// y (121): w=7, h=12
0x26,0x63,
0x00,0x01,0x0F,0xF8,0xC0,0x31,0x0F,
0x0C,0x08,0x06,0x01,0x00,0x00,0x00,

// z (122): w=6, h=8
0x05,0x68,
0x82,0xC1,0xB1,0x99,0x85,0x43,

// braceleft (123): w=6, h=14
0x25,0x0E,
0x40,0xC0,0x3C,0x02,0x01,0x01,
0x1C,0x23,0x00,0x00,0x00,0x00,

// bar (124): w=5, h=14
0x24,0x08,
0x00,0x00,0xE0,0x1C,0x03,
0x38,0x07,0x00,0x00,0x00,

// braceright (125): w=6, h=14
0x25,0x04,
0x00,0x00,0x00,0x00,0xF1,0x8E,
0x20,0x20,0x10,0x0F,0x00,0x00,

// asciitilde (126): w=8, h=3
0x07,0xA9,
0x02,0x01,0x01,0x03,0x06,0x04,0x04,0x02

};
// 1472 bytes
// 1662 bytes with FAST_FONT_INDEX
