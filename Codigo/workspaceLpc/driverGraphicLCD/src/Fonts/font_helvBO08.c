#include "fonts.h"			// for FAST_FONT_INDEX

// helvBO08 = "Helvetica Bold Oblique"

const unsigned char font_helvBO08[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC3,0x00,
0xC9,0x00,
0xD0,0x00,
0xD9,0x00,
0xE7,0x00,
0xF1,0x00,
0xFA,0x00,
0xFF,0x00,
0x0B,0x01,
0x17,0x01,
0x1D,0x01,
0x24,0x01,
0x28,0x01,
0x2E,0x01,
0x32,0x01,
0x3A,0x01,
0x42,0x01,
0x48,0x01,
0x50,0x01,
0x58,0x01,
0x60,0x01,
0x68,0x01,
0x70,0x01,
0x77,0x01,
0x7F,0x01,
0x87,0x01,
0x8C,0x01,
0x91,0x01,
0x98,0x01,
0x9F,0x01,
0xA6,0x01,
0xAE,0x01,
0xC2,0x01,
0xCB,0x01,
0xD4,0x01,
0xDD,0x01,
0xE7,0x01,
0xF0,0x01,
0xF9,0x01,
0x03,0x02,
0x0D,0x02,
0x13,0x02,
0x1C,0x02,
0x26,0x02,
0x2D,0x02,
0x3A,0x02,
0x45,0x02,
0x4F,0x02,
0x59,0x02,
0x6B,0x02,
0x75,0x02,
0x7F,0x02,
0x87,0x02,
0x91,0x02,
0x9A,0x02,
0xA6,0x02,
0xB0,0x02,
0xBA,0x02,
0xC4,0x02,
0xD2,0x02,
0xD6,0x02,
0xE4,0x02,
0xEB,0x02,
0xF4,0x02,
0xF8,0x02,
0x00,0x03,
0x08,0x03,
0x0F,0x03,
0x18,0x03,
0x20,0x03,
0x27,0x03,
0x2F,0x03,
0x37,0x03,
0x3D,0x03,
0x49,0x03,
0x51,0x03,
0x57,0x03,
0x62,0x03,
0x6A,0x03,
0x72,0x03,
0x7B,0x03,
0x83,0x03,
0x8A,0x03,
0x92,0x03,
0x99,0x03,
0xA1,0x03,
0xA8,0x03,
0xB1,0x03,
0xBA,0x03,
0xC2,0x03,
0xCA,0x03,
0xD8,0x03,
0xE2,0x03,
0xF0,0x03,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x00,0xEA,
0x00,

// exclam (33): w=4, h=8
0x03,0x0D,
0x80,0xBC,0x0F,0x03,

// quotedbl (34): w=5, h=3
0x04,0x13,
0x06,0x03,0x00,0x06,0x03,

// numbersign (35): w=7, h=7
0x06,0x28,
0x10,0x74,0x1C,0x77,0x1C,0x17,0x04,

// dollar (36): w=6, h=9
0x25,0x08,
0x40,0xCE,0xFB,0xDF,0x73,0x02,
0x00,0x03,0x00,0x00,0x00,0x00,

// percent (37): w=8, h=8
0x07,0x0E,
0x80,0x42,0x27,0x55,0xEA,0xA4,0x42,0x01,

// ampersand (38): w=7, h=8
0x06,0x09,
0x60,0xF0,0x9E,0xDB,0x7D,0xE7,0xB0,

// quotesingle (39): w=3, h=3
0x02,0x12,
0x04,0x03,0x01,

// parenleft (40): w=5, h=10
0x24,0x0D,
0x70,0xFC,0x0E,0x03,0x01,
0x00,0x01,0x03,0x00,0x00,

// parenright (41): w=5, h=10
0x24,0x03,
0x00,0x00,0xC3,0xFE,0x38,
0x02,0x03,0x01,0x00,0x00,

// asterisk (42): w=4, h=4
0x03,0x14,
0x0A,0x06,0x0F,0x02,

// plus (43): w=5, h=5
0x04,0x4E,
0x04,0x1C,0x1F,0x07,0x04,

// comma (44): w=2, h=4
0x01,0xC9,
0x0B,0x07,

// hyphen (45): w=4, h=1
0x03,0x8E,
0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x01,0xC9,
0x03,0x03,

// slash (47): w=6, h=8
0x05,0x07,
0x80,0xE0,0x38,0x0E,0x03,0x01,

// zero (48): w=6, h=8
0x05,0x08,
0x78,0xFE,0x83,0xC1,0x7F,0x1E,

// one (49): w=4, h=8
0x03,0x0F,
0xE2,0xFE,0x1F,0x03,

// two (50): w=6, h=8
0x05,0x08,
0xC0,0xE2,0xB3,0x99,0x9F,0x0E,

// three (51): w=6, h=8
0x05,0x08,
0x40,0xC2,0x8B,0xF9,0x7F,0x06,

// four (52): w=6, h=8
0x05,0x08,
0x30,0x28,0xE4,0xFA,0x3F,0x07,

// five (53): w=6, h=8
0x05,0x08,
0x40,0xCC,0x8F,0xFB,0x71,0x01,

// six (54): w=6, h=8
0x05,0x08,
0x78,0xFE,0x8F,0xF9,0x73,0x02,

// seven (55): w=5, h=8
0x04,0x0E,
0xC1,0xF1,0x3D,0x0F,0x03,

// eight (56): w=6, h=8
0x05,0x08,
0x70,0xFE,0x8F,0xF9,0x7F,0x06,

// nine (57): w=6, h=8
0x05,0x08,
0x40,0xCE,0x9F,0xF1,0x7F,0x1E,

// colon (58): w=3, h=6
0x02,0x48,
0x30,0x33,0x03,

// semicolon (59): w=3, h=8
0x02,0x48,
0xB0,0x73,0x03,

// less (60): w=5, h=5
0x04,0x4E,
0x04,0x0E,0x1A,0x13,0x01,

// equal (61): w=5, h=3
0x04,0x69,
0x04,0x05,0x05,0x05,0x01,

// greater (62): w=5, h=5
0x04,0x4F,
0x10,0x19,0x0B,0x0E,0x04,

// question (63): w=6, h=8
0x05,0x0D,
0x80,0xB2,0x3B,0x09,0x0F,0x06,

// at (64): w=9, h=9
0x28,0x09,
0x78,0x86,0x72,0x49,0x25,0x7D,0x45,0x22,0x1C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// A (65): w=7, h=8
0x06,0x09,
0xC0,0xF0,0x3C,0x2E,0x23,0xFF,0xFC,

// B (66): w=7, h=8
0x06,0x08,
0xE0,0xFC,0x9F,0x8B,0xC9,0x7D,0x37,

// C (67): w=7, h=8
0x06,0x08,
0x70,0xFC,0x8E,0x83,0xC1,0x67,0x06,

// D (68): w=8, h=8
0x07,0x08,
0xE0,0xFC,0x9F,0x83,0xC1,0x71,0x3F,0x0E,

// E (69): w=7, h=8
0x06,0x07,
0xE0,0xFC,0x9F,0x8B,0x89,0x09,0x01,

// F (70): w=7, h=8
0x06,0x06,
0xE0,0xFC,0x1F,0x0B,0x09,0x01,0x01,

// G (71): w=8, h=8
0x07,0x08,
0x70,0xFC,0x8E,0x83,0xD1,0xF1,0x33,0x12,

// H (72): w=8, h=8
0x07,0x07,
0xE0,0xFC,0x1F,0x0B,0xE8,0xFC,0x1F,0x03,

// I (73): w=4, h=8
0x03,0x07,
0xE0,0xFC,0x1F,0x03,

// J (74): w=7, h=8
0x06,0x07,
0x60,0xE0,0x80,0xE0,0x7C,0x1F,0x03,

// K (75): w=8, h=8
0x07,0x08,
0xE0,0xFC,0x1F,0x1B,0x3C,0xE6,0xC3,0x01,

// L (76): w=5, h=8
0x04,0x09,
0xE0,0xFC,0x9F,0x83,0x80,

// M (77): w=11, h=8
0x0A,0x07,
0xE0,0xFC,0x1F,0x07,0xFC,0x70,0x18,0xEC,0xFE,0x1F,
0x03,

// N (78): w=9, h=8
0x08,0x07,
0xE0,0xFC,0x1F,0x0F,0x38,0xE0,0xFC,0x1F,0x03,

// O (79): w=8, h=8
0x07,0x08,
0x70,0xFC,0x8E,0x83,0xC1,0x71,0x3F,0x0E,

// P (80): w=8, h=8
0x07,0x07,
0xE0,0xFC,0x1F,0x13,0x11,0x19,0x0F,0x06,

// Q (81): w=8, h=9
0x27,0x08,
0x70,0xFC,0x8E,0xA3,0xC1,0xF1,0x3F,0x0E,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,

// R (82): w=8, h=8
0x07,0x08,
0xE0,0xFC,0x1F,0x0B,0xC9,0xF9,0x37,0x06,

// S (83): w=8, h=8
0x07,0x07,
0x60,0xE0,0x8E,0x9F,0xF9,0x71,0x03,0x02,

// T (84): w=6, h=8
0x05,0x0D,
0xE1,0xFD,0x1F,0x03,0x01,0x01,

// U (85): w=8, h=8
0x07,0x07,
0x60,0xFC,0x9F,0x83,0xE0,0x7C,0x1F,0x03,

// V (86): w=7, h=8
0x06,0x13,
0x3F,0xFF,0xC0,0x70,0x3C,0x0F,0x03,

// W (87): w=10, h=8
0x09,0x0D,
0x1F,0xFF,0xE0,0x38,0x07,0xFF,0xE0,0x3C,0x0F,0x03,

// X (88): w=8, h=8
0x07,0x07,
0xC0,0xE7,0x3F,0x18,0xFC,0xE6,0x03,0x01,

// Y (89): w=8, h=8
0x07,0x0C,
0x03,0xCF,0xFC,0x38,0x0C,0x06,0x03,0x01,

// Z (90): w=8, h=8
0x07,0x07,
0xC0,0xE0,0xB1,0x99,0x99,0x8D,0x07,0x03,

// bracketleft (91): w=6, h=10
0x25,0x01,
0x00,0xE0,0xFC,0x1F,0x03,0x01,
0x03,0x03,0x02,0x00,0x00,0x00,

// backslash (92): w=2, h=8
0x01,0x15,
0x0F,0xF0,

// bracketright (93): w=6, h=10
0x25,0x01,
0x00,0x00,0xE0,0xFD,0x1F,0x03,
0x02,0x03,0x03,0x00,0x00,0x00,

// asciicircum (94): w=5, h=4
0x04,0x0E,
0x08,0x0C,0x06,0x03,0x0F,

// underscore (95): w=6, h=1
0x85,0x09,0x36,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=1
0x01,0x13,
0x00,0x03,

// a (97): w=6, h=6
0x05,0x48,
0x18,0x3A,0x25,0x1D,0x3F,0x26,

// b (98): w=6, h=8
0x05,0x08,
0xE0,0xFC,0x8F,0xC7,0x7C,0x18,

// c (99): w=5, h=6
0x04,0x48,
0x1C,0x3E,0x23,0x31,0x13,

// d (100): w=7, h=8
0x06,0x07,
0x60,0xF8,0x8C,0xC4,0xFC,0x1F,0x03,

// e (101): w=6, h=6
0x05,0x48,
0x18,0x3E,0x27,0x35,0x17,0x06,

// f (102): w=5, h=8
0x04,0x06,
0xE4,0xFE,0x1F,0x05,0x01,

// g (103): w=6, h=8
0x05,0x48,
0x98,0xBE,0xE3,0x71,0x3F,0x07,

// h (104): w=6, h=8
0x05,0x08,
0xE0,0xFC,0x0F,0xE7,0xFC,0x18,

// i (105): w=4, h=8
0x03,0x07,
0xE0,0xFC,0x1D,0x01,

// j (106): w=5, h=10
0x24,0x01,
0x00,0xE0,0xFC,0x1D,0x01,
0x02,0x03,0x01,0x00,0x00,

// k (107): w=6, h=8
0x05,0x08,
0xE0,0xFC,0x1F,0x7B,0xEC,0x84,

// l (108): w=4, h=8
0x03,0x07,
0xE0,0xFC,0x1F,0x03,

// m (109): w=9, h=6
0x08,0x48,
0x38,0x3F,0x06,0x39,0x3F,0x06,0x39,0x3F,0x06,

// n (110): w=6, h=6
0x05,0x48,
0x38,0x3F,0x03,0x39,0x3F,0x06,

// o (111): w=6, h=6
0x05,0x48,
0x1C,0x3E,0x23,0x31,0x1F,0x0E,

// p (112): w=7, h=8
0x06,0x42,
0xC0,0xF8,0x3F,0x23,0x31,0x1F,0x06,

// q (113): w=6, h=8
0x05,0x48,
0x18,0x3E,0xE3,0xF1,0x3F,0x07,

// r (114): w=5, h=6
0x04,0x47,
0x38,0x3F,0x06,0x03,0x01,

// s (115): w=6, h=6
0x05,0x48,
0x10,0x32,0x27,0x3D,0x1B,0x02,

// t (116): w=5, h=8
0x04,0x07,
0x64,0xFC,0x9F,0x07,0x04,

// u (117): w=6, h=6
0x05,0x48,
0x1C,0x3F,0x23,0x18,0x3F,0x07,

// v (118): w=5, h=6
0x04,0x4E,
0x1F,0x3F,0x10,0x0F,0x07,

// w (119): w=7, h=6
0x06,0x4E,
0x3F,0x3F,0x10,0x3F,0x30,0x0F,0x07,

// x (120): w=7, h=6
0x06,0x41,
0x20,0x31,0x1B,0x0E,0x3E,0x33,0x01,

// y (121): w=6, h=8
0x05,0x48,
0x80,0xC7,0x7F,0x38,0x0F,0x07,

// z (122): w=6, h=6
0x05,0x47,
0x30,0x39,0x2D,0x25,0x27,0x03,

// braceleft (123): w=6, h=10
0x25,0x07,
0x10,0xF0,0xEC,0x0E,0x03,0x01,
0x00,0x01,0x03,0x02,0x00,0x00,

// bar (124): w=4, h=10
0x23,0x08,
0x00,0xE0,0x1C,0x03,
0x03,0x00,0x00,0x00,

// braceright (125): w=6, h=10
0x25,0x02,
0x00,0x00,0xE1,0xEF,0x1E,0x10,
0x02,0x03,0x01,0x00,0x00,0x00,

// asciitilde (126): w=5, h=2
0x04,0x6E,
0x02,0x01,0x03,0x02,0x01

};
// 825 bytes
// 1015 bytes with FAST_FONT_INDEX
