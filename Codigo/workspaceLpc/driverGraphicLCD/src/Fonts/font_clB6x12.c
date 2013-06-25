#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_clB6x12[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xC8,0x00,
0xCD,0x00,
0xD4,0x00,
0xDB,0x00,
0xE2,0x00,
0xE9,0x00,
0xEE,0x00,
0xF8,0x00,
0x02,0x01,
0x09,0x01,
0x10,0x01,
0x15,0x01,
0x1C,0x01,
0x20,0x01,
0x2C,0x01,
0x33,0x01,
0x38,0x01,
0x3F,0x01,
0x46,0x01,
0x4D,0x01,
0x54,0x01,
0x5B,0x01,
0x62,0x01,
0x69,0x01,
0x70,0x01,
0x74,0x01,
0x79,0x01,
0x81,0x01,
0x88,0x01,
0x90,0x01,
0x98,0x01,
0xA0,0x01,
0xA7,0x01,
0xAE,0x01,
0xB5,0x01,
0xBC,0x01,
0xC3,0x01,
0xCA,0x01,
0xD1,0x01,
0xD8,0x01,
0xDE,0x01,
0xE5,0x01,
0xEC,0x01,
0xF3,0x01,
0xFA,0x01,
0x01,0x02,
0x08,0x02,
0x0F,0x02,
0x16,0x02,
0x1D,0x02,
0x24,0x02,
0x2C,0x02,
0x33,0x02,
0x3A,0x02,
0x41,0x02,
0x48,0x02,
0x4F,0x02,
0x56,0x02,
0x60,0x02,
0x6C,0x02,
0x76,0x02,
0x7E,0x02,
0x87,0x02,
0x8C,0x02,
0x93,0x02,
0x9A,0x02,
0xA1,0x02,
0xA8,0x02,
0xAF,0x02,
0xBB,0x02,
0xC2,0x02,
0xC9,0x02,
0xCF,0x02,
0xD9,0x02,
0xE0,0x02,
0xE6,0x02,
0xED,0x02,
0xF4,0x02,
0xFB,0x02,
0x02,0x03,
0x09,0x03,
0x10,0x03,
0x17,0x03,
0x1D,0x03,
0x24,0x03,
0x2B,0x03,
0x32,0x03,
0x39,0x03,
0x40,0x03,
0x47,0x03,
0x51,0x03,
0x55,0x03,
0x5F,0x03,
#endif // FAST_FONT_INDEX

// C040 (32): w=1, h=1
0x80,0x0A,0x95,
0x00,

// ! (33): w=2, h=8
0x01,0x16,
0xBF,0xBF,

// " (34): w=3, h=3
0x02,0x15,
0x07,0x00,0x07,

// # (35): w=5, h=7
0x04,0x2E,
0x14,0x7F,0x14,0x7F,0x14,

// $ (36): w=5, h=7
0x04,0x2E,
0x24,0x2A,0x7F,0x2A,0x12,

// % (37): w=5, h=7
0x04,0x2E,
0x23,0x13,0x08,0x64,0x62,

// & (38): w=5, h=7
0x04,0x2E,
0x36,0x49,0x51,0x21,0x50,

// ' (39): w=3, h=3
0x02,0x15,
0x04,0x03,0x01,

// ( (40): w=4, h=10
0x23,0x14,
0x7C,0xFF,0x83,0x00,
0x00,0x01,0x07,0x06,

// ) (41): w=4, h=10
0x23,0x0F,
0x00,0x83,0xFF,0x7C,
0x06,0x07,0x01,0x00,

// * (42): w=5, h=5
0x04,0x4E,
0x0A,0x04,0x1F,0x04,0x0A,

// + (43): w=5, h=5
0x04,0x4E,
0x04,0x04,0x1F,0x04,0x04,

// , (44): w=3, h=4
0x02,0xD5,
0x08,0x07,0x03,

// - (45): w=5, h=1
0x04,0x8E,
0x01,0x01,0x01,0x01,0x01,

// . (46): w=2, h=2
0x01,0xDB,
0x03,0x03,

// / (47): w=5, h=9
0x24,0x0E,
0x80,0x60,0x18,0x06,0x01,
0x03,0x00,0x00,0x00,0x00,

// 0 (48): w=5, h=8
0x04,0x0E,
0x7E,0xFF,0x81,0xFF,0x7E,

// 1 (49): w=3, h=8
0x02,0x15,
0x02,0xFF,0xFF,

// 2 (50): w=5, h=8
0x04,0x0E,
0x82,0xE3,0xF9,0x9F,0x86,

// 3 (51): w=5, h=8
0x04,0x0E,
0x42,0xC3,0x89,0xFF,0x76,

// 4 (52): w=5, h=8
0x04,0x0E,
0x60,0x78,0x4E,0xFF,0xFF,

// 5 (53): w=5, h=8
0x04,0x0E,
0x4F,0xCF,0x89,0xF9,0x71,

// 6 (54): w=5, h=8
0x04,0x0E,
0x7C,0xFE,0x8B,0xF9,0x70,

// 7 (55): w=5, h=8
0x04,0x0E,
0x03,0xC3,0xF1,0x3F,0x0F,

// 8 (56): w=5, h=8
0x04,0x0E,
0x76,0xFF,0x89,0xFF,0x76,

// 9 (57): w=5, h=8
0x04,0x0E,
0x0E,0x9F,0xD1,0x7F,0x3E,

// : (58): w=2, h=6
0x01,0x5B,
0x33,0x33,

// ; (59): w=3, h=8
0x02,0x55,
0x80,0x73,0x33,

// < (60): w=6, h=5
0x05,0x48,
0x04,0x04,0x0A,0x0A,0x11,0x11,

// = (61): w=5, h=3
0x04,0x6E,
0x05,0x05,0x05,0x05,0x05,

// > (62): w=6, h=5
0x05,0x48,
0x11,0x11,0x0A,0x0A,0x04,0x04,

// ? (63): w=6, h=8
0x05,0x08,
0x02,0x03,0xB1,0xB9,0x0F,0x06,

// @ (64): w=6, h=7
0x05,0x28,
0x3E,0x7F,0x41,0x5D,0x5F,0x0E,

// A (65): w=5, h=7
0x04,0x2E,
0x7C,0x7E,0x13,0x7E,0x7C,

// B (66): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x49,0x7F,0x36,

// C (67): w=5, h=7
0x04,0x2E,
0x3E,0x7F,0x41,0x63,0x22,

// D (68): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x41,0x7F,0x3E,

// E (69): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x49,0x49,0x41,

// F (70): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x09,0x09,0x01,

// G (71): w=5, h=7
0x04,0x2E,
0x3E,0x7F,0x49,0x7B,0x7A,

// H (72): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x08,0x7F,0x7F,

// I (73): w=4, h=7
0x03,0x2F,
0x41,0x7F,0x7F,0x41,

// J (74): w=5, h=7
0x04,0x2E,
0x30,0x70,0x41,0x7F,0x3F,

// K (75): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x1C,0x77,0x63,

// L (76): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x40,0x40,0x40,

// M (77): w=5, h=7
0x04,0x2E,
0x7F,0x7E,0x1C,0x7E,0x7F,

// N (78): w=5, h=7
0x04,0x2E,
0x7F,0x7E,0x1C,0x3F,0x7F,

// O (79): w=5, h=7
0x04,0x2E,
0x3E,0x7F,0x41,0x7F,0x3E,

// P (80): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x09,0x0F,0x06,

// Q (81): w=5, h=8
0x04,0x2E,
0x3E,0x7F,0x41,0xFF,0xBE,

// R (82): w=5, h=7
0x04,0x2E,
0x7F,0x7F,0x39,0x6F,0x46,

// S (83): w=5, h=7
0x04,0x2E,
0x26,0x6F,0x49,0x7B,0x32,

// T (84): w=6, h=7
0x05,0x28,
0x01,0x01,0x7F,0x7F,0x01,0x01,

// U (85): w=5, h=7
0x04,0x2E,
0x3F,0x7F,0x40,0x7F,0x3F,

// V (86): w=5, h=7
0x04,0x2E,
0x1F,0x3F,0x60,0x3F,0x1F,

// W (87): w=5, h=7
0x04,0x2E,
0x7F,0x3F,0x1C,0x3F,0x7F,

// X (88): w=5, h=7
0x04,0x2E,
0x77,0x7F,0x1C,0x7F,0x77,

// Y (89): w=5, h=7
0x04,0x2E,
0x07,0x7F,0x78,0x7F,0x07,

// Z (90): w=5, h=7
0x04,0x2E,
0x71,0x79,0x5D,0x4F,0x47,

// [ (91): w=4, h=10
0x23,0x14,
0xFF,0xFF,0x00,0x00,
0x07,0x07,0x06,0x06,

// \ (92): w=5, h=9
0x24,0x0E,
0x01,0x06,0x18,0x60,0x80,
0x00,0x00,0x00,0x00,0x03,

// ] (93): w=4, h=10
0x23,0x0F,
0x00,0x00,0xFF,0xFF,
0x06,0x06,0x07,0x07,

// ^ (94): w=6, h=3
0x05,0x08,
0x04,0x06,0x03,0x01,0x02,0x04,

// _ (95): w=6, h=1
0x85,0x08,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// ` (96): w=3, h=3
0x02,0x15,
0x01,0x03,0x04,

// a (97): w=5, h=5
0x04,0x6E,
0x0E,0x1F,0x11,0x0F,0x1F,

// b (98): w=5, h=8
0x04,0x0E,
0xFF,0xFF,0x88,0xF8,0x70,

// c (99): w=5, h=5
0x04,0x6E,
0x0E,0x1F,0x11,0x11,0x11,

// d (100): w=5, h=8
0x04,0x0E,
0x70,0xF8,0x88,0xFF,0xFF,

// e (101): w=5, h=5
0x04,0x6E,
0x0E,0x1F,0x15,0x17,0x06,

// f (102): w=5, h=9
0x24,0x0E,
0x08,0xFE,0xFF,0x09,0x01,
0x00,0x01,0x00,0x00,0x00,

// g (103): w=5, h=8
0x04,0x6E,
0x0E,0x9F,0x91,0xFF,0x7F,

// h (104): w=5, h=8
0x04,0x0E,
0xFF,0xFF,0x08,0xF8,0xF0,

// i (105): w=4, h=8
0x03,0x0F,
0x88,0xFB,0xFB,0x80,

// j (106): w=4, h=11
0x23,0x0F,
0x00,0x08,0xFB,0xFB,
0x04,0x04,0x07,0x03,

// k (107): w=5, h=8
0x04,0x0E,
0xFF,0xFF,0x70,0xD8,0x88,

// l (108): w=4, h=8
0x03,0x0F,
0x81,0xFF,0xFF,0x80,

// m (109): w=5, h=5
0x04,0x6E,
0x1F,0x1F,0x0E,0x1F,0x1E,

// n (110): w=5, h=5
0x04,0x6E,
0x1F,0x1E,0x01,0x1F,0x1E,

// o (111): w=5, h=5
0x04,0x6E,
0x0E,0x1F,0x11,0x1F,0x0E,

// p (112): w=5, h=8
0x04,0x6E,
0xFF,0xFF,0x11,0x1F,0x0E,

// q (113): w=5, h=8
0x04,0x6E,
0x0E,0x1F,0x11,0xFF,0xFF,

// r (114): w=5, h=5
0x04,0x6E,
0x1F,0x1E,0x03,0x01,0x01,

// s (115): w=5, h=5
0x04,0x6E,
0x12,0x17,0x15,0x1D,0x09,

// t (116): w=4, h=8
0x03,0x0F,
0x08,0x7F,0xFF,0x88,

// u (117): w=5, h=5
0x04,0x6E,
0x0F,0x1F,0x10,0x0F,0x1F,

// v (118): w=5, h=5
0x04,0x6E,
0x07,0x0F,0x18,0x0F,0x07,

// w (119): w=5, h=5
0x04,0x6E,
0x0F,0x1F,0x0E,0x1F,0x0F,

// x (120): w=5, h=5
0x04,0x6E,
0x1B,0x1F,0x04,0x1F,0x1B,

// y (121): w=5, h=8
0x04,0x6E,
0x0F,0x9F,0x90,0xFF,0x7F,

// z (122): w=5, h=5
0x04,0x6E,
0x19,0x1D,0x1F,0x17,0x13,

// { (123): w=4, h=10
0x23,0x14,
0x10,0xFF,0xEF,0x00,
0x00,0x01,0x07,0x06,

// | (124): w=1, h=10
0x20,0x1C,
0xFF,
0x07,

// } (125): w=4, h=10
0x23,0x0F,
0x00,0xEF,0xFF,0x10,
0x06,0x07,0x01,0x00,

// ~ (126): w=5, h=3
0x04,0x2E,
0x02,0x01,0x02,0x04,0x02

};
// 680 bytes
// 870 bytes with FAST_FONT_INDEX
