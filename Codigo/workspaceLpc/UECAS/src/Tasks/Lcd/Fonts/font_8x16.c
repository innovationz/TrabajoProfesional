#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_8x16[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCC,0x00,
0xD3,0x00,
0xE5,0x00,
0xF5,0x00,
0x05,0x01,
0x15,0x01,
0x1B,0x01,
0x25,0x01,
0x30,0x01,
0x40,0x01,
0x50,0x01,
0x56,0x01,
0x60,0x01,
0x66,0x01,
0x76,0x01,
0x84,0x01,
0x90,0x01,
0x9E,0x01,
0xAE,0x01,
0xBE,0x01,
0xCE,0x01,
0xDE,0x01,
0xEE,0x01,
0xFE,0x01,
0x0E,0x02,
0x16,0x02,
0x1E,0x02,
0x2A,0x02,
0x33,0x02,
0x3F,0x02,
0x4F,0x02,
0x5F,0x02,
0x6F,0x02,
0x7F,0x02,
0x8F,0x02,
0x9F,0x02,
0xAF,0x02,
0xBF,0x02,
0xD1,0x02,
0xE3,0x02,
0xF3,0x02,
0x05,0x03,
0x17,0x03,
0x27,0x03,
0x37,0x03,
0x49,0x03,
0x59,0x03,
0x69,0x03,
0x79,0x03,
0x8B,0x03,
0x9B,0x03,
0xAB,0x03,
0xBD,0x03,
0xCD,0x03,
0xDD,0x03,
0xED,0x03,
0xFD,0x03,
0x0D,0x04,
0x17,0x04,
0x27,0x04,
0x32,0x04,
0x3B,0x04,
0x45,0x04,
0x4A,0x04,
0x5C,0x04,
0x6C,0x04,
0x7C,0x04,
0x8C,0x04,
0x9C,0x04,
0xAE,0x04,
0xC0,0x04,
0xD2,0x04,
0xE4,0x04,
0xF4,0x04,
0x06,0x05,
0x18,0x05,
0x2A,0x05,
0x3C,0x05,
0x4C,0x05,
0x5C,0x05,
0x6C,0x05,
0x7C,0x05,
0x8C,0x05,
0x9C,0x05,
0xAE,0x05,
0xBE,0x05,
0xCE,0x05,
0xDE,0x05,
0xF0,0x05,
0x00,0x06,
0x0C,0x06,
0x11,0x06,
0x1D,0x06,
#endif // FAST_FONT_INDEX

// C040 (32): w=1, h=1
0x80,0x11,0xB5,
0x00,

// ! (33): w=3, h=15
0x22,0x77,
0x3F,0xFF,0x3F,
0x20,0x73,0x20,

// " (34): w=5, h=5
0x04,0x50,
0x13,0x0F,0x00,0x13,0x0F,

// # (35): w=8, h=14
0x27,0x68,
0x00,0x08,0xF8,0x0F,0x08,0xF8,0x0F,0x08,
0x02,0x3E,0x03,0x02,0x3E,0x03,0x02,0x00,

// $ (36): w=7, h=16
0x26,0x49,
0x38,0x44,0x82,0xFF,0x82,0x14,0x18,
0x1C,0x24,0x20,0xFF,0x20,0x11,0x0E,

// % (37): w=7, h=16
0x26,0x49,
0x3C,0x42,0x42,0xBC,0x60,0x1C,0x03,
0xC0,0x38,0x06,0x3D,0x42,0x42,0x3C,

// & (38): w=7, h=13
0x26,0x69,
0x00,0x9E,0x61,0x91,0x4E,0xC0,0x40,
0x0E,0x11,0x10,0x13,0x0C,0x0B,0x10,

// ' (39): w=3, h=5
0x82,0x02,0x4A,
0x13,0x13,0x0F,

// ( (40): w=4, h=16
0x23,0x5B,
0xF0,0x0C,0x02,0x01,
0x0F,0x30,0x40,0x80,

// ) (41): w=4, h=16
0xA3,0x02,0x49,
0x01,0x02,0x0C,0xF0,
0x80,0x40,0x30,0x0F,

// * (42): w=7, h=9
0x26,0xA9,
0x6C,0x28,0x92,0xFF,0x92,0x28,0x6C,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// + (43): w=7, h=9
0x26,0xA9,
0x10,0x10,0x10,0xFF,0x10,0x10,0x10,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// , (44): w=3, h=5
0x82,0x0D,0x4A,
0x13,0x13,0x0F,

// - (45): w=7, h=1
0x86,0x09,0x46,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// . (46): w=3, h=4
0x82,0x0D,0x4A,
0x06,0x0F,0x06,

// / (47): w=7, h=16
0x26,0x49,
0x00,0x00,0x00,0x80,0x70,0x0C,0x03,
0xC0,0x30,0x0C,0x03,0x00,0x00,0x00,

// 0 (48): w=6, h=14
0x25,0x6F,
0xF8,0x06,0x01,0x01,0x06,0xF8,
0x07,0x18,0x20,0x20,0x18,0x07,

// 1 (49): w=5, h=13
0x24,0x70,
0x02,0x02,0xFF,0x00,0x00,
0x10,0x10,0x1F,0x10,0x10,

// 2 (50): w=6, h=13
0x25,0x6F,
0x0C,0x0A,0x01,0xC1,0x22,0x1C,
0x18,0x16,0x11,0x10,0x10,0x1C,

// 3 (51): w=7, h=13
0x26,0x69,
0x0C,0x02,0x41,0x41,0x41,0xA2,0x1C,
0x06,0x08,0x10,0x10,0x10,0x08,0x07,

// 4 (52): w=7, h=13
0x26,0x69,
0xC0,0x30,0x0C,0x02,0xFF,0x00,0x00,
0x01,0x01,0x11,0x11,0x1F,0x11,0x01,

// 5 (53): w=7, h=13
0x26,0x69,
0x7F,0x21,0x11,0x11,0x11,0x21,0xC0,
0x06,0x0A,0x10,0x10,0x10,0x08,0x07,

// 6 (54): w=7, h=13
0x26,0x69,
0xF8,0x46,0x21,0x21,0x21,0x45,0x86,
0x07,0x08,0x10,0x10,0x10,0x08,0x07,

// 7 (55): w=7, h=14
0x26,0x69,
0x07,0x01,0x01,0x01,0xC1,0x39,0x07,
0x00,0x00,0x00,0x3C,0x03,0x00,0x00,

// 8 (56): w=7, h=13
0x26,0x69,
0x1C,0xA2,0x41,0x41,0x41,0xA2,0x1C,
0x07,0x08,0x10,0x10,0x10,0x08,0x07,

// 9 (57): w=7, h=13
0x26,0x69,
0x3C,0x42,0x81,0x81,0x81,0x42,0xFC,
0x04,0x08,0x10,0x10,0x10,0x08,0x07,

// : (58): w=3, h=9
0x22,0xF7,
0x83,0x83,0x83,
0x01,0x01,0x01,

// ; (59): w=3, h=11
0x22,0xF7,
0xC3,0xC3,0xC3,
0x04,0x07,0x01,

// < (60): w=5, h=16
0x24,0x55,
0x80,0x60,0x18,0x06,0x01,
0x01,0x06,0x18,0x60,0x80,

// = (61): w=7, h=5
0x06,0xE9,
0x11,0x11,0x11,0x11,0x11,0x11,0x11,

// > (62): w=5, h=16
0x24,0x4B,
0x01,0x06,0x18,0x60,0x80,
0x80,0x60,0x18,0x06,0x01,

// ? (63): w=7, h=15
0x26,0x69,
0x0C,0x0A,0x01,0x01,0x81,0x62,0x1C,
0x00,0x00,0x20,0x73,0x20,0x00,0x00,

// @ (64): w=7, h=13
0x26,0x69,
0xFC,0x02,0xF1,0x09,0x09,0x11,0xFE,
0x07,0x08,0x11,0x12,0x12,0x11,0x0B,

// A (65): w=7, h=13
0x26,0x69,
0x00,0xF0,0x0E,0x01,0x0E,0xF0,0x00,
0x1E,0x11,0x01,0x01,0x01,0x11,0x1E,

// B (66): w=7, h=13
0x26,0x69,
0x01,0xFF,0x41,0x41,0x41,0xA2,0x1C,
0x10,0x1F,0x10,0x10,0x10,0x10,0x0F,

// C (67): w=7, h=13
0x26,0x69,
0xF8,0x06,0x01,0x01,0x01,0x02,0x07,
0x03,0x0C,0x10,0x10,0x10,0x10,0x0E,

// D (68): w=7, h=13
0x26,0x69,
0x01,0xFF,0x01,0x01,0x01,0x06,0xF8,
0x10,0x1F,0x10,0x10,0x10,0x0C,0x03,

// E (69): w=7, h=13
0x26,0x69,
0x01,0xFF,0x41,0x41,0xF1,0x01,0x07,
0x10,0x1F,0x10,0x10,0x11,0x10,0x1E,

// F (70): w=7, h=13
0x26,0x69,
0x01,0xFF,0x41,0x41,0xF1,0x01,0x07,
0x10,0x1F,0x10,0x10,0x01,0x00,0x00,

// G (71): w=8, h=13
0x27,0x68,
0xF0,0x0C,0x02,0x01,0x41,0x42,0xC7,0x40,
0x03,0x0C,0x08,0x10,0x10,0x08,0x1F,0x00,

// H (72): w=8, h=13
0x27,0x68,
0x01,0xFF,0x21,0x20,0x20,0x21,0xFF,0x01,
0x10,0x1F,0x10,0x00,0x00,0x10,0x1F,0x10,

// I (73): w=7, h=13
0x26,0x69,
0x01,0x01,0x01,0xFF,0x01,0x01,0x01,
0x10,0x10,0x10,0x1F,0x10,0x10,0x10,

// J (74): w=8, h=13
0x27,0x68,
0x00,0x00,0x00,0x01,0x01,0x01,0xFF,0x01,
0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00,

// K (75): w=8, h=13
0x27,0x68,
0x01,0xFF,0x21,0x60,0x98,0x07,0x01,0x00,
0x10,0x1F,0x10,0x00,0x01,0x06,0x18,0x10,

// L (76): w=7, h=13
0x26,0x69,
0x01,0xFF,0x01,0x01,0x00,0x00,0x00,
0x10,0x1F,0x10,0x10,0x10,0x10,0x1E,

// M (77): w=7, h=13
0x26,0x69,
0xFF,0x02,0x1C,0xE0,0x1C,0x02,0xFF,
0x1F,0x10,0x00,0x00,0x00,0x10,0x1F,

// N (78): w=8, h=13
0x27,0x68,
0xFF,0x02,0x1C,0xE0,0x00,0x01,0xFF,0x01,
0x1F,0x10,0x00,0x00,0x07,0x08,0x1F,0x00,

// O (79): w=7, h=13
0x26,0x69,
0xFC,0x02,0x01,0x01,0x01,0x02,0xFC,
0x07,0x08,0x10,0x10,0x10,0x08,0x07,

// P (80): w=7, h=13
0x26,0x69,
0x01,0xFF,0x81,0x81,0x81,0x42,0x3C,
0x10,0x1F,0x10,0x10,0x00,0x00,0x00,

// Q (81): w=7, h=15
0x26,0x69,
0xF8,0x06,0x01,0x01,0x01,0x06,0xF8,
0x03,0x0C,0x12,0x12,0x32,0x4C,0x43,

// R (82): w=8, h=13
0x27,0x68,
0x01,0xFF,0x41,0x41,0xC1,0x22,0x1C,0x00,
0x10,0x1F,0x10,0x00,0x00,0x07,0x18,0x10,

// S (83): w=7, h=13
0x26,0x69,
0x1C,0x22,0x21,0x41,0x42,0x87,0x00,
0x1F,0x08,0x10,0x10,0x10,0x08,0x07,

// T (84): w=7, h=13
0x26,0x69,
0x07,0x01,0x01,0xFF,0x01,0x01,0x07,
0x00,0x10,0x10,0x1F,0x10,0x10,0x00,

// U (85): w=8, h=13
0x27,0x68,
0x01,0xFF,0x01,0x00,0x00,0x01,0xFF,0x01,
0x00,0x0F,0x10,0x10,0x10,0x10,0x0F,0x00,

// V (86): w=7, h=13
0x26,0x69,
0x1F,0xE1,0x00,0x00,0x00,0xE1,0x1F,
0x00,0x01,0x06,0x18,0x06,0x01,0x00,

// W (87): w=7, h=13
0x26,0x69,
0xFF,0x01,0x80,0x70,0x80,0x01,0xFF,
0x03,0x1C,0x03,0x00,0x03,0x1C,0x03,

// X (88): w=7, h=13
0x26,0x69,
0x01,0x07,0xD9,0x20,0xD9,0x07,0x01,
0x18,0x16,0x01,0x00,0x01,0x16,0x18,

// Y (89): w=7, h=13
0x26,0x69,
0x03,0x1D,0x60,0x80,0x60,0x1D,0x03,
0x00,0x10,0x10,0x1F,0x10,0x10,0x00,

// Z (90): w=7, h=13
0x26,0x69,
0x07,0x01,0x81,0x71,0x0D,0x03,0x01,
0x18,0x16,0x11,0x10,0x10,0x10,0x1E,

// [ (91): w=4, h=16
0x23,0x5B,
0xFF,0x01,0x01,0x01,
0xFF,0x80,0x80,0x80,

// \ (92): w=7, h=14
0x26,0x69,
0x03,0x0C,0x30,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x0C,0x30,

// ] (93): w=4, h=16
0xA3,0x02,0x49,
0x01,0x01,0x01,0xFF,
0x80,0x80,0x80,0xFF,

// ^ (94): w=7, h=4
0x06,0x49,
0x08,0x04,0x02,0x01,0x02,0x04,0x08,

// _ (95): w=7, h=1
0x86,0x11,0x46,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// ` (96): w=2, h=5
0x81,0x02,0x69,
0x0F,0x13,

// a (97): w=8, h=9
0x27,0xE8,
0xE0,0x12,0x09,0x09,0x09,0x89,0xFE,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,

// b (98): w=7, h=13
0x26,0x69,
0x01,0xFF,0x10,0x10,0x10,0x20,0xC0,
0x00,0x1F,0x10,0x10,0x10,0x08,0x07,

// c (99): w=7, h=9
0x26,0xE9,
0x7C,0x82,0x01,0x01,0x01,0x02,0xC7,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// d (100): w=7, h=13
0x26,0x69,
0xC0,0x20,0x10,0x10,0x10,0xFF,0x01,
0x07,0x08,0x10,0x10,0x10,0x1F,0x10,

// e (101): w=7, h=9
0x26,0xE9,
0x7C,0x8A,0x09,0x09,0x09,0x0A,0xCC,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// f (102): w=8, h=13
0x27,0x68,
0x10,0x10,0x10,0xFE,0x11,0x11,0x11,0x02,
0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x00,

// g (103): w=8, h=11
0x27,0xE8,
0x80,0x6E,0x51,0x51,0x51,0x8E,0x01,0x01,
0x03,0x04,0x04,0x04,0x04,0x04,0x03,0x00,

// h (104): w=8, h=13
0x27,0x68,
0x01,0xFF,0x20,0x10,0x10,0x10,0xE0,0x00,
0x10,0x1F,0x10,0x00,0x00,0x10,0x1F,0x10,

// i (105): w=8, h=14
0x27,0x48,
0x00,0x20,0x20,0x23,0xE3,0x00,0x00,0x00,
0x20,0x20,0x20,0x20,0x3F,0x20,0x20,0x20,

// j (106): w=7, h=16
0x26,0x49,
0x00,0x00,0x20,0x20,0x20,0x23,0xE3,
0x30,0x40,0x80,0x80,0x80,0x40,0x3F,

// k (107): w=8, h=13
0x27,0x68,
0x01,0xFF,0x00,0x80,0xC0,0x20,0x10,0x00,
0x10,0x1F,0x11,0x00,0x00,0x03,0x1C,0x10,

// l (108): w=8, h=13
0x27,0x68,
0x00,0x01,0x01,0x01,0xFF,0x00,0x00,0x00,
0x10,0x10,0x10,0x10,0x1F,0x10,0x10,0x10,

// m (109): w=8, h=9
0x27,0xE8,
0xFE,0x01,0x01,0xFE,0x01,0x01,0xFE,0x00,
0x01,0x01,0x00,0x01,0x01,0x00,0x01,0x01,

// n (110): w=8, h=9
0x27,0xE8,
0x01,0xFF,0x02,0x01,0x01,0x01,0xFE,0x00,
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,

// o (111): w=7, h=9
0x26,0xE9,
0x7C,0x82,0x01,0x01,0x01,0x82,0x7C,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,

// p (112): w=7, h=11
0x26,0xE9,
0x01,0xFF,0x81,0x81,0x81,0x42,0x3C,
0x04,0x07,0x04,0x04,0x00,0x00,0x00,

// q (113): w=7, h=11
0x26,0xE9,
0x3C,0x42,0x81,0x81,0x81,0xFF,0x01,
0x00,0x00,0x00,0x04,0x04,0x07,0x04,

// r (114): w=7, h=9
0x26,0xE9,
0x01,0x01,0xFF,0x02,0x01,0x01,0x06,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// s (115): w=7, h=9
0x26,0xE9,
0xC0,0x8E,0x11,0x11,0x11,0x12,0xE7,
0x01,0x00,0x01,0x01,0x01,0x01,0x00,

// t (116): w=7, h=12
0x26,0x89,
0x08,0x08,0xFF,0x08,0x08,0x08,0x00,
0x00,0x00,0x07,0x08,0x08,0x08,0x06,

// u (117): w=8, h=9
0x27,0xE8,
0x01,0xFF,0x00,0x00,0x00,0x81,0xFF,0x00,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x01,

// v (118): w=7, h=9
0x26,0xE9,
0x07,0x39,0xC0,0x00,0xC0,0x39,0x07,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// w (119): w=7, h=9
0x26,0xE9,
0x3F,0xC0,0x30,0x0F,0x30,0xC0,0x3F,
0x00,0x01,0x00,0x00,0x00,0x01,0x00,

// x (120): w=7, h=9
0x26,0xE9,
0x01,0x83,0x6D,0x10,0x6D,0x83,0x01,
0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// y (121): w=8, h=11
0x27,0xE8,
0x01,0x03,0x0D,0x90,0x60,0x19,0x07,0x01,
0x03,0x04,0x02,0x01,0x00,0x00,0x00,0x00,

// z (122): w=7, h=9
0x26,0xE9,
0x00,0x83,0x41,0x31,0x0D,0x03,0xC1,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// { (123): w=5, h=16
0x24,0x55,
0x80,0x40,0x3E,0x01,0x01,
0x00,0x01,0x7E,0x80,0x80,

// | (124): w=1, h=16
0xA0,0x02,0x79,
0xFF,
0xFF,

// } (125): w=5, h=16
0x24,0x4B,
0x01,0x01,0x3E,0x40,0x80,
0x80,0x80,0x7E,0x01,0x00,

// ~ (126): w=7, h=3
0x06,0x49,
0x02,0x01,0x01,0x02,0x04,0x04,0x02

};
// 1384 bytes
// 1574 bytes with FAST_FONT_INDEX
