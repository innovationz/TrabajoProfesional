#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_clB8x16[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xCF,0x00,
0xDD,0x00,
0xE9,0x00,
0xF9,0x00,
0x09,0x01,
0x0E,0x01,
0x18,0x01,
0x22,0x01,
0x2B,0x01,
0x34,0x01,
0x3A,0x01,
0x43,0x01,
0x48,0x01,
0x56,0x01,
0x64,0x01,
0x6C,0x01,
0x7A,0x01,
0x88,0x01,
0x96,0x01,
0xA4,0x01,
0xB2,0x01,
0xC0,0x01,
0xCE,0x01,
0xDC,0x01,
0xE0,0x01,
0xE8,0x01,
0xF1,0x01,
0xFA,0x01,
0x03,0x02,
0x11,0x02,
0x1A,0x02,
0x2C,0x02,
0x3C,0x02,
0x4C,0x02,
0x5C,0x02,
0x6C,0x02,
0x7C,0x02,
0x8C,0x02,
0x9C,0x02,
0xAA,0x02,
0xB8,0x02,
0xC8,0x02,
0xD6,0x02,
0xE6,0x02,
0xF6,0x02,
0x06,0x03,
0x16,0x03,
0x26,0x03,
0x36,0x03,
0x46,0x03,
0x54,0x03,
0x64,0x03,
0x74,0x03,
0x84,0x03,
0x92,0x03,
0xA0,0x03,
0xAE,0x03,
0xB8,0x03,
0xC6,0x03,
0xD0,0x03,
0xD8,0x03,
0xE2,0x03,
0xE7,0x03,
0xF0,0x03,
0x00,0x04,
0x08,0x04,
0x18,0x04,
0x21,0x04,
0x2F,0x04,
0x3F,0x04,
0x4F,0x04,
0x5D,0x04,
0x69,0x04,
0x79,0x04,
0x83,0x04,
0x8C,0x04,
0x95,0x04,
0x9E,0x04,
0xAE,0x04,
0xBE,0x04,
0xC6,0x04,
0xCE,0x04,
0xDC,0x04,
0xE5,0x04,
0xEE,0x04,
0xF7,0x04,
0xFF,0x04,
0x0F,0x05,
0x17,0x05,
0x21,0x05,
0x26,0x05,
0x30,0x05,
#endif // FAST_FONT_INDEX

// C040 (32): w=1, h=1
0x80,0x0D,0xB5,
0x00,

// ! (33): w=2, h=10
0x21,0x1D,
0x7F,0x7F,
0x03,0x03,

// " (34): w=3, h=3
0x02,0x3C,
0x07,0x00,0x07,

// # (35): w=6, h=11
0x25,0x0F,
0x88,0xFF,0x88,0x88,0xFF,0x88,
0x00,0x07,0x00,0x00,0x07,0x00,

// $ (36): w=5, h=11
0x24,0x15,
0x0E,0x11,0xFF,0x21,0xC2,
0x01,0x02,0x0F,0x02,0x01,

// % (37): w=7, h=9
0x26,0x2E,
0x06,0x49,0x26,0x10,0xC8,0x24,0xC0,
0x00,0x00,0x00,0x00,0x00,0x01,0x00,

// & (38): w=7, h=9
0x26,0x2E,
0xE6,0x19,0x11,0x21,0xC1,0xC0,0x20,
0x00,0x01,0x01,0x01,0x00,0x00,0x01,

// ' (39): w=3, h=3
0x02,0x3C,
0x04,0x03,0x01,

// ( (40): w=4, h=12
0x23,0x1B,
0xFC,0xFF,0x03,0x00,
0x01,0x07,0x1E,0x18,

// ) (41): w=4, h=12
0x23,0x16,
0x00,0x03,0xFF,0xFC,
0x18,0x1E,0x07,0x01,

// * (42): w=7, h=7
0x06,0x4E,
0x04,0x44,0x28,0x1F,0x28,0x44,0x04,

// + (43): w=7, h=7
0x06,0x4E,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// , (44): w=3, h=4
0x82,0x08,0x68,
0x08,0x07,0x03,

// - (45): w=7, h=1
0x06,0xAE,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// . (46): w=2, h=2
0x81,0x08,0x78,
0x03,0x03,

// / (47): w=6, h=11
0x25,0x0F,
0x00,0x80,0x60,0x18,0x06,0x01,
0x0E,0x01,0x00,0x00,0x00,0x00,

// 0 (48): w=6, h=10
0x25,0x0F,
0xFE,0xFF,0x01,0x01,0xFF,0xFE,
0x01,0x03,0x02,0x02,0x03,0x01,

// 1 (49): w=3, h=10
0x22,0x1C,
0x02,0xFF,0xFF,
0x00,0x03,0x03,

// 2 (50): w=6, h=10
0x25,0x0F,
0x82,0xC3,0x61,0x31,0x1F,0x0E,
0x03,0x03,0x02,0x02,0x02,0x02,

// 3 (51): w=6, h=10
0x25,0x0F,
0x02,0x03,0x11,0x11,0xFF,0xEE,
0x01,0x03,0x02,0x02,0x03,0x01,

// 4 (52): w=6, h=10
0x25,0x0F,
0xC0,0xB0,0x8C,0xFF,0xFF,0x80,
0x00,0x00,0x02,0x03,0x03,0x02,

// 5 (53): w=6, h=10
0x25,0x0F,
0x1F,0x1F,0x11,0x11,0xF1,0xE1,
0x01,0x03,0x02,0x02,0x03,0x01,

// 6 (54): w=6, h=10
0x25,0x0F,
0xFC,0xFE,0x13,0x11,0xF1,0xE0,
0x01,0x03,0x02,0x02,0x03,0x01,

// 7 (55): w=6, h=10
0x25,0x0F,
0x03,0x03,0xC1,0xF1,0x3F,0x0F,
0x00,0x03,0x03,0x00,0x00,0x00,

// 8 (56): w=6, h=10
0x25,0x0F,
0xEE,0xFF,0x11,0x11,0xFF,0xEE,
0x01,0x03,0x02,0x02,0x03,0x01,

// 9 (57): w=6, h=10
0x25,0x0F,
0x1E,0x3F,0x21,0x21,0xFF,0xFE,
0x00,0x02,0x02,0x03,0x01,0x00,

// : (58): w=2, h=7
0x01,0x7D,
0x63,0x63,

// ; (59): w=3, h=9
0x22,0x77,
0x00,0xE3,0x63,
0x01,0x00,0x00,

// < (60): w=7, h=5
0x06,0x6E,
0x04,0x04,0x0E,0x0A,0x1B,0x11,0x11,

// = (61): w=7, h=4
0x06,0x8E,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// > (62): w=7, h=5
0x06,0x6E,
0x11,0x11,0x1B,0x0A,0x0E,0x04,0x04,

// ? (63): w=6, h=10
0x25,0x0F,
0x06,0x07,0x61,0x71,0x1F,0x0E,
0x00,0x00,0x03,0x03,0x00,0x00,

// @ (64): w=7, h=8
0x06,0x4E,
0x3C,0x42,0x99,0xA5,0x99,0xA2,0x1C,

// A (65): w=8, h=9
0x27,0x28,
0x00,0xE0,0xFC,0x3F,0x27,0x3C,0xE0,0x00,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// B (66): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x11,0x11,0x11,0xFF,0xEE,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// C (67): w=7, h=9
0x26,0x2E,
0x7C,0xFE,0x83,0x01,0x01,0x83,0x82,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// D (68): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x01,0x01,0x83,0xFE,0x7C,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// E (69): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x11,0x11,0x11,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// F (70): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x11,0x11,0x11,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// G (71): w=7, h=9
0x26,0x2E,
0x7C,0xFE,0x83,0x01,0x21,0xE3,0xE2,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,

// H (72): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x10,0x10,0x10,0xFF,0xFF,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// I (73): w=6, h=9
0x25,0x2F,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,

// J (74): w=6, h=9
0x25,0x2F,
0xC0,0xC0,0x01,0x01,0xFF,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,

// K (75): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x38,0x6C,0xC6,0x83,0x01,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// L (76): w=6, h=9
0x25,0x2F,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,

// M (77): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x0C,0x30,0x0C,0xFF,0xFF,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// N (78): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x0C,0x10,0x60,0xFF,0xFF,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// O (79): w=7, h=9
0x26,0x2E,
0x7C,0xFE,0x83,0x01,0x83,0xFE,0x7C,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,

// P (80): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x11,0x11,0x11,0x1F,0x0E,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=7, h=11
0x26,0x2E,
0x7C,0xFE,0x83,0x01,0x83,0xFE,0x7C,
0x00,0x02,0x01,0x03,0x07,0x04,0x02,

// R (82): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x11,0x31,0x71,0xDF,0x8E,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// S (83): w=7, h=9
0x26,0x2E,
0x8E,0x9F,0x11,0x11,0x11,0xF3,0xE2,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// T (84): w=6, h=9
0x25,0x2F,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0x01,0x01,0x00,0x00,

// U (85): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x00,0x00,0x00,0xFF,0xFF,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// V (86): w=7, h=9
0x26,0x2E,
0x0F,0x7F,0xF0,0x80,0xF0,0x7F,0x0F,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,

// W (87): w=7, h=9
0x26,0x2E,
0xFF,0xFF,0x60,0x18,0x60,0xFF,0xFF,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// X (88): w=6, h=9
0x25,0x2F,
0xC7,0xEF,0x38,0x38,0xEF,0xC7,
0x01,0x01,0x00,0x00,0x01,0x01,

// Y (89): w=6, h=9
0x25,0x2F,
0x07,0x0F,0xF8,0xF8,0x0F,0x07,
0x00,0x00,0x01,0x01,0x00,0x00,

// Z (90): w=6, h=9
0x25,0x2F,
0xC1,0xE1,0x31,0x19,0x0F,0x07,
0x01,0x01,0x01,0x01,0x01,0x01,

// [ (91): w=4, h=12
0x23,0x1B,
0xFF,0xFF,0x00,0x00,
0x1F,0x1F,0x18,0x18,

// \ (92): w=6, h=11
0x25,0x0F,
0x01,0x06,0x18,0x60,0x80,0x00,
0x00,0x00,0x00,0x00,0x01,0x0E,

// ] (93): w=4, h=12
0x23,0x16,
0x00,0x00,0xFF,0xFF,
0x18,0x18,0x1F,0x1F,

// ^ (94): w=6, h=3
0x05,0x0F,
0x04,0x06,0x03,0x01,0x02,0x04,

// _ (95): w=7, h=1
0x86,0x0B,0x55,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// ` (96): w=3, h=3
0x02,0x3C,
0x01,0x03,0x04,

// a (97): w=7, h=7
0x06,0x6E,
0x3E,0x7F,0x41,0x41,0x21,0x7F,0x7F,

// b (98): w=7, h=10
0x26,0x0E,
0xFF,0xFF,0x08,0x08,0x08,0xF8,0xF0,
0x03,0x03,0x02,0x02,0x02,0x03,0x01,

// c (99): w=6, h=7
0x05,0x6F,
0x3E,0x7F,0x41,0x41,0x41,0x41,

// d (100): w=7, h=10
0x26,0x0E,
0xF0,0xF8,0x08,0x08,0x08,0xFF,0xFF,
0x01,0x03,0x02,0x02,0x02,0x03,0x03,

// e (101): w=7, h=7
0x06,0x6E,
0x3E,0x7F,0x49,0x49,0x49,0x4F,0x0E,

// f (102): w=6, h=11
0x25,0x14,
0x08,0xFE,0xFF,0x09,0x09,0x01,
0x00,0x07,0x03,0x00,0x00,0x00,

// g (103): w=7, h=10
0x26,0x6E,
0x3E,0x7F,0x41,0x41,0x41,0xFF,0xFF,
0x00,0x02,0x02,0x02,0x02,0x03,0x01,

// h (104): w=7, h=10
0x26,0x0E,
0xFF,0xFF,0x08,0x08,0x08,0xF8,0xF0,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// i (105): w=6, h=10
0x25,0x0F,
0x08,0x08,0xFB,0xFB,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// j (106): w=5, h=13
0x24,0x15,
0x00,0x08,0x08,0xFB,0xFB,
0x10,0x10,0x10,0x1F,0x0F,

// k (107): w=7, h=10
0x26,0x0E,
0xFF,0xFF,0x40,0xE0,0xB0,0x18,0x08,
0x03,0x03,0x00,0x00,0x01,0x03,0x02,

// l (108): w=4, h=10
0x23,0x16,
0x01,0xFF,0xFF,0x00,
0x02,0x03,0x03,0x02,

// m (109): w=7, h=7
0x06,0x6E,
0x7F,0x7F,0x01,0x1E,0x01,0x7F,0x7E,

// n (110): w=7, h=7
0x06,0x6E,
0x7F,0x7F,0x02,0x01,0x01,0x7F,0x7E,

// o (111): w=7, h=7
0x06,0x6E,
0x3E,0x7F,0x41,0x41,0x41,0x7F,0x3E,

// p (112): w=7, h=10
0x26,0x6E,
0xFF,0xFF,0x41,0x41,0x41,0x7F,0x3E,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// q (113): w=7, h=10
0x26,0x6E,
0x3E,0x7F,0x41,0x41,0x41,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x03,0x03,

// r (114): w=6, h=7
0x05,0x6F,
0x7F,0x7F,0x02,0x01,0x01,0x01,

// s (115): w=6, h=7
0x05,0x6F,
0x46,0x4F,0x49,0x49,0x79,0x31,

// t (116): w=6, h=10
0x25,0x0F,
0x08,0x08,0xFF,0xFF,0x08,0x08,
0x00,0x00,0x01,0x03,0x02,0x02,

// u (117): w=7, h=7
0x06,0x6E,
0x3F,0x7F,0x40,0x40,0x20,0x7F,0x7F,

// v (118): w=7, h=7
0x06,0x6E,
0x07,0x1F,0x78,0x60,0x78,0x1F,0x07,

// w (119): w=7, h=7
0x06,0x6E,
0x3F,0x7F,0x40,0x3C,0x40,0x7F,0x3F,

// x (120): w=6, h=7
0x05,0x6F,
0x63,0x77,0x1C,0x1C,0x77,0x63,

// y (121): w=7, h=10
0x26,0x6E,
0x3F,0x7F,0x40,0x40,0x40,0xFF,0xFF,
0x00,0x02,0x02,0x02,0x02,0x03,0x01,

// z (122): w=6, h=7
0x05,0x6F,
0x61,0x71,0x59,0x4D,0x47,0x43,

// { (123): w=4, h=12
0x23,0x1B,
0x20,0xFF,0xDF,0x00,
0x00,0x07,0x1F,0x18,

// | (124): w=1, h=12
0xA0,0x00,0x88,
0xFF,
0x1F,

// } (125): w=4, h=12
0x23,0x16,
0x00,0xDF,0xFF,0x20,
0x18,0x1F,0x07,0x00,

// ~ (126): w=7, h=3
0x06,0x0E,
0x06,0x01,0x01,0x02,0x04,0x04,0x03

};
// 1147 bytes
// 1337 bytes with FAST_FONT_INDEX
