#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_7x14[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xC8,0x00,
0xCD,0x00,
0xD9,0x00,
0xE7,0x00,
0xF5,0x00,
0x03,0x01,
0x06,0x01,
0x10,0x01,
0x1A,0x01,
0x21,0x01,
0x28,0x01,
0x2D,0x01,
0x34,0x01,
0x3A,0x01,
0x48,0x01,
0x56,0x01,
0x62,0x01,
0x70,0x01,
0x7E,0x01,
0x8C,0x01,
0x9A,0x01,
0xA8,0x01,
0xB6,0x01,
0xC4,0x01,
0xD2,0x01,
0xD7,0x01,
0xDB,0x01,
0xE7,0x01,
0xEF,0x01,
0xFB,0x01,
0x09,0x02,
0x17,0x02,
0x25,0x02,
0x33,0x02,
0x41,0x02,
0x4F,0x02,
0x5D,0x02,
0x6B,0x02,
0x79,0x02,
0x87,0x02,
0x93,0x02,
0xA1,0x02,
0xAF,0x02,
0xBD,0x02,
0xCB,0x02,
0xD9,0x02,
0xE7,0x02,
0xF5,0x02,
0x03,0x03,
0x11,0x03,
0x1F,0x03,
0x2F,0x03,
0x3D,0x03,
0x4B,0x03,
0x57,0x03,
0x65,0x03,
0x71,0x03,
0x7F,0x03,
0x89,0x03,
0x97,0x03,
0xA1,0x03,
0xA9,0x03,
0xB2,0x03,
0xB7,0x03,
0xBF,0x03,
0xCD,0x03,
0xD5,0x03,
0xE3,0x03,
0xEB,0x03,
0xF9,0x03,
0x07,0x04,
0x15,0x04,
0x21,0x04,
0x2D,0x04,
0x3B,0x04,
0x47,0x04,
0x4E,0x04,
0x56,0x04,
0x5E,0x04,
0x6C,0x04,
0x7A,0x04,
0x82,0x04,
0x8A,0x04,
0x98,0x04,
0xA0,0x04,
0xA7,0x04,
0xAE,0x04,
0xB6,0x04,
0xC4,0x04,
0xCC,0x04,
0xD6,0x04,
0xDA,0x04,
0xE4,0x04,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0B,0xA5,
0x00,

// exclam (33): w=1, h=10
0x20,0x1D,
0x7F,
0x03,

// quotedbl (34): w=3, h=3
0x02,0x16,
0x0F,0x00,0x0F,

// numbersign (35): w=5, h=10
0x24,0x0F,
0x48,0xFF,0x48,0xFF,0x48,
0x00,0x03,0x00,0x03,0x00,

// dollar (36): w=6, h=11
0x25,0x09,
0x8C,0x12,0x22,0xFF,0x22,0xCC,
0x01,0x02,0x02,0x07,0x02,0x01,

// percent (37): w=6, h=10
0x25,0x09,
0x06,0x89,0xE9,0x5E,0x44,0x83,
0x03,0x00,0x01,0x02,0x02,0x01,

// ampersand (38): w=6, h=10
0x25,0x09,
0xC0,0x2E,0x31,0x51,0x8E,0x60,
0x01,0x02,0x02,0x01,0x01,0x02,

// quotesingle (39): w=1, h=3
0x00,0x1D,
0x0F,

// parenleft (40): w=4, h=12
0x23,0x15,
0xF8,0x06,0x01,0x00,
0x00,0x03,0x04,0x18,

// parenright (41): w=4, h=12
0x23,0x10,
0x00,0x01,0x06,0xF8,
0x18,0x04,0x03,0x00,

// asterisk (42): w=5, h=7
0x04,0x4F,
0x22,0x14,0x7F,0x14,0x22,

// plus (43): w=5, h=7
0x04,0x4F,
0x08,0x08,0x7F,0x08,0x08,

// comma (44): w=2, h=4
0x81,0x08,0x68,
0x09,0x07,

// hyphen (45): w=5, h=1
0x04,0xAF,
0x01,0x01,0x01,0x01,0x01,

// period (46): w=3, h=3
0x82,0x08,0x67,
0x02,0x07,0x02,

// slash (47): w=6, h=12
0x25,0x09,
0x00,0x00,0xC0,0x38,0x06,0x01,
0x1C,0x03,0x00,0x00,0x00,0x00,

// zero (48): w=6, h=10
0x25,0x09,
0xFC,0x02,0x01,0x01,0x02,0xFC,
0x00,0x01,0x02,0x02,0x01,0x00,

// one (49): w=5, h=10
0x24,0x0F,
0x04,0x02,0xFF,0x00,0x00,
0x02,0x02,0x03,0x02,0x02,

// two (50): w=6, h=10
0x25,0x09,
0x06,0x01,0x81,0x41,0x31,0x0E,
0x02,0x03,0x02,0x02,0x02,0x02,

// three (51): w=6, h=10
0x25,0x09,
0x81,0x01,0x11,0x19,0x15,0xE3,
0x01,0x02,0x02,0x02,0x02,0x01,

// four (52): w=6, h=10
0x25,0x09,
0xC0,0xB0,0x8C,0x82,0xFF,0x80,
0x00,0x00,0x00,0x00,0x03,0x00,

// five (53): w=6, h=10
0x25,0x09,
0x9F,0x09,0x09,0x09,0x09,0xF1,
0x01,0x02,0x02,0x02,0x02,0x01,

// six (54): w=6, h=10
0x25,0x09,
0xFC,0x22,0x11,0x11,0x11,0xE0,
0x01,0x02,0x02,0x02,0x02,0x01,

// seven (55): w=6, h=10
0x25,0x09,
0x01,0x01,0xC1,0x31,0x0D,0x03,
0x00,0x03,0x00,0x00,0x00,0x00,

// eight (56): w=6, h=10
0x25,0x09,
0xC6,0x29,0x11,0x11,0x29,0xC6,
0x01,0x02,0x02,0x02,0x02,0x01,

// nine (57): w=6, h=10
0x25,0x09,
0x9E,0x21,0x21,0x21,0x11,0xFE,
0x01,0x02,0x02,0x02,0x01,0x00,

// colon (58): w=3, h=8
0x02,0x56,
0x42,0xE7,0x42,

// semicolon (59): w=2, h=8
0x01,0x77,
0x93,0x73,

// less (60): w=5, h=9
0x24,0x2F,
0x10,0x28,0x44,0x82,0x01,
0x00,0x00,0x00,0x00,0x01,

// equal (61): w=6, h=4
0x05,0x69,
0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=5, h=9
0x24,0x2F,
0x01,0x82,0x44,0x28,0x10,
0x01,0x00,0x00,0x00,0x00,

// question (63): w=6, h=10
0x25,0x09,
0x06,0x01,0x01,0x71,0x09,0x06,
0x00,0x00,0x00,0x03,0x00,0x00,

// at (64): w=6, h=10
0x25,0x09,
0xFC,0x02,0x79,0x85,0x85,0xFE,
0x00,0x01,0x02,0x02,0x02,0x02,

// A (65): w=6, h=10
0x25,0x09,
0xFC,0x22,0x21,0x21,0x22,0xFC,
0x03,0x00,0x00,0x00,0x00,0x03,

// B (66): w=6, h=10
0x25,0x09,
0xFF,0x11,0x11,0x11,0x2A,0xC4,
0x03,0x02,0x02,0x02,0x01,0x00,

// C (67): w=6, h=10
0x25,0x09,
0xFE,0x01,0x01,0x01,0x01,0x86,
0x01,0x02,0x02,0x02,0x02,0x01,

// D (68): w=6, h=10
0x25,0x09,
0xFF,0x01,0x01,0x01,0x02,0xFC,
0x03,0x02,0x02,0x02,0x01,0x00,

// E (69): w=6, h=10
0x25,0x09,
0xFF,0x11,0x11,0x11,0x01,0x01,
0x03,0x02,0x02,0x02,0x02,0x02,

// F (70): w=6, h=10
0x25,0x09,
0xFF,0x11,0x11,0x11,0x01,0x01,
0x03,0x00,0x00,0x00,0x00,0x00,

// G (71): w=6, h=10
0x25,0x09,
0xFE,0x01,0x01,0x21,0x21,0xE6,
0x01,0x02,0x02,0x02,0x01,0x03,

// H (72): w=6, h=10
0x25,0x09,
0xFF,0x10,0x10,0x10,0x10,0xFF,
0x03,0x00,0x00,0x00,0x00,0x03,

// I (73): w=5, h=10
0x24,0x0F,
0x01,0x01,0xFF,0x01,0x01,
0x02,0x02,0x03,0x02,0x02,

// J (74): w=6, h=10
0x25,0x09,
0x80,0x00,0x00,0x01,0xFF,0x01,
0x01,0x02,0x02,0x02,0x01,0x00,

// K (75): w=6, h=10
0x25,0x09,
0xFF,0x10,0x28,0x44,0x82,0x01,
0x03,0x00,0x00,0x00,0x00,0x03,

// L (76): w=6, h=10
0x25,0x09,
0xFF,0x00,0x00,0x00,0x00,0x00,
0x03,0x02,0x02,0x02,0x02,0x02,

// M (77): w=6, h=10
0x25,0x09,
0xFF,0x06,0x18,0x18,0x06,0xFF,
0x03,0x00,0x00,0x00,0x00,0x03,

// N (78): w=6, h=10
0x25,0x09,
0xFF,0x0C,0x10,0x20,0xC0,0xFF,
0x03,0x00,0x00,0x00,0x00,0x03,

// O (79): w=6, h=10
0x25,0x09,
0xFE,0x01,0x01,0x01,0x01,0xFE,
0x01,0x02,0x02,0x02,0x02,0x01,

// P (80): w=6, h=10
0x25,0x09,
0xFF,0x21,0x21,0x21,0x21,0x1E,
0x03,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=6, h=12
0x25,0x09,
0xFE,0x41,0x41,0x81,0x01,0xFE,
0x01,0x02,0x02,0x02,0x07,0x09,

// R (82): w=6, h=10
0x25,0x09,
0xFF,0x21,0x21,0x61,0xA1,0x1E,
0x03,0x00,0x00,0x00,0x00,0x03,

// S (83): w=6, h=10
0x25,0x09,
0x8E,0x11,0x11,0x21,0x21,0xC6,
0x01,0x02,0x02,0x02,0x02,0x01,

// T (84): w=7, h=10
0x26,0x08,
0x01,0x01,0x01,0xFF,0x01,0x01,0x01,
0x00,0x00,0x00,0x03,0x00,0x00,0x00,

// U (85): w=6, h=10
0x25,0x09,
0xFF,0x00,0x00,0x00,0x00,0xFF,
0x01,0x02,0x02,0x02,0x02,0x01,

// V (86): w=6, h=10
0x25,0x09,
0x0F,0x70,0x80,0x80,0x70,0x0F,
0x00,0x00,0x03,0x03,0x00,0x00,

// W (87): w=5, h=10
0x24,0x0F,
0xFF,0x00,0xC0,0x00,0xFF,
0x01,0x02,0x01,0x02,0x01,

// X (88): w=6, h=10
0x25,0x09,
0x03,0xCC,0x30,0x30,0xCC,0x03,
0x03,0x00,0x00,0x00,0x00,0x03,

// Y (89): w=5, h=10
0x24,0x0F,
0x07,0x18,0xE0,0x18,0x07,
0x00,0x00,0x03,0x00,0x00,

// Z (90): w=6, h=10
0x25,0x09,
0x01,0xC1,0x21,0x19,0x05,0x03,
0x03,0x02,0x02,0x02,0x02,0x02,

// bracketleft (91): w=4, h=12
0x23,0x15,
0xFF,0x00,0x00,0x00,
0x1F,0x18,0x18,0x18,

// backslash (92): w=6, h=12
0x25,0x09,
0x01,0x06,0x38,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x1C,

// bracketright (93): w=4, h=12
0x23,0x10,
0x00,0x00,0x00,0xFF,
0x18,0x18,0x18,0x1F,

// asciicircum (94): w=6, h=2
0x05,0x09,
0x06,0x01,0x00,0x00,0x01,0x06,

// underscore (95): w=6, h=1
0x85,0x0B,0x46,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=2
0x02,0x16,
0x00,0x01,0x06,

// a (97): w=6, h=7
0x05,0x69,
0x32,0x49,0x49,0x49,0x49,0x7E,

// b (98): w=6, h=10
0x25,0x09,
0xFF,0x10,0x08,0x08,0x08,0xF0,
0x03,0x01,0x02,0x02,0x02,0x01,

// c (99): w=6, h=7
0x05,0x69,
0x3E,0x41,0x41,0x41,0x41,0x22,

// d (100): w=6, h=10
0x25,0x09,
0xF0,0x08,0x08,0x08,0x10,0xFF,
0x01,0x02,0x02,0x02,0x01,0x03,

// e (101): w=6, h=7
0x05,0x69,
0x3E,0x49,0x49,0x49,0x49,0x2E,

// f (102): w=6, h=10
0x25,0x09,
0x10,0x10,0xFE,0x11,0x11,0x02,
0x00,0x00,0x03,0x00,0x00,0x00,

// g (103): w=6, h=9
0x25,0x69,
0xCE,0x31,0x51,0x51,0x4E,0x81,
0x00,0x01,0x01,0x01,0x01,0x00,

// h (104): w=6, h=10
0x25,0x09,
0xFF,0x10,0x08,0x08,0x08,0xF0,
0x03,0x00,0x00,0x00,0x00,0x03,

// i (105): w=5, h=10
0x24,0x0F,
0x00,0x08,0xFB,0x00,0x00,
0x02,0x02,0x03,0x02,0x02,

// j (106): w=5, h=12
0x24,0x0F,
0x00,0x00,0x00,0x08,0xFB,
0x06,0x08,0x08,0x08,0x07,

// k (107): w=6, h=10
0x25,0x09,
0xFF,0x40,0x60,0x90,0x08,0x00,
0x03,0x00,0x00,0x00,0x01,0x02,

// l (108): w=5, h=10
0x24,0x0F,
0x00,0x01,0xFF,0x00,0x00,
0x02,0x02,0x03,0x02,0x02,

// m (109): w=5, h=7
0x04,0x6F,
0x7F,0x01,0x3E,0x01,0x7E,

// n (110): w=6, h=7
0x05,0x69,
0x7F,0x02,0x01,0x01,0x01,0x7E,

// o (111): w=6, h=7
0x05,0x69,
0x3E,0x41,0x41,0x41,0x41,0x3E,

// p (112): w=6, h=9
0x25,0x69,
0xFF,0x22,0x41,0x41,0x41,0x3E,
0x01,0x00,0x00,0x00,0x00,0x00,

// q (113): w=6, h=9
0x25,0x69,
0x3E,0x41,0x41,0x41,0x22,0xFF,
0x00,0x00,0x00,0x00,0x00,0x01,

// r (114): w=6, h=7
0x05,0x69,
0x7F,0x02,0x01,0x01,0x01,0x06,

// s (115): w=6, h=7
0x05,0x69,
0x22,0x45,0x49,0x49,0x51,0x22,

// t (116): w=6, h=10
0x25,0x09,
0x08,0x08,0xFF,0x08,0x08,0x00,
0x00,0x00,0x01,0x02,0x02,0x01,

// u (117): w=6, h=7
0x05,0x69,
0x3F,0x40,0x40,0x40,0x20,0x7F,

// v (118): w=5, h=7
0x04,0x6F,
0x07,0x18,0x60,0x18,0x07,

// w (119): w=5, h=7
0x04,0x6F,
0x3F,0x40,0x3C,0x40,0x3F,

// x (120): w=6, h=7
0x05,0x69,
0x63,0x14,0x08,0x08,0x14,0x63,

// y (121): w=6, h=9
0x25,0x69,
0x9F,0x20,0x20,0x20,0x10,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,

// z (122): w=6, h=7
0x05,0x69,
0x41,0x61,0x59,0x45,0x43,0x41,

// braceleft (123): w=4, h=12
0x23,0x15,
0x20,0xDF,0x00,0x00,
0x00,0x07,0x18,0x18,

// bar (124): w=1, h=12
0x20,0x1D,
0xFF,
0x1F,

// braceright (125): w=4, h=12
0x23,0x10,
0x00,0x00,0xDF,0x20,
0x18,0x18,0x07,0x00,

// asciitilde (126): w=6, h=3
0x05,0x09,
0x03,0x00,0x01,0x02,0x0C,0x03

};
// 1070 bytes
// 1260 bytes with FAST_FONT_INDEX