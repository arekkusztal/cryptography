#ifndef AES_ECB_TEST_VECTORS_H
#define AES_ECB_TEST_VECTORS_H
static
uint8_t skey[16] = { 0x54, 0x68, 0x61, 0x74, 0x73, 0x20, 0x6d, 0x79, 0x20, 0x4b, 0x75,
		0x6e, 0x67, 0x20, 0x46, 0x75 };
static
uint8_t datablock[16] = { 0x54,0x77,0x6F,0x20,0x4F,0x6E,0x65,0x20,0x4E,0x69,0x6E,
		0x65,0x20,0x54,0x77,0x6F };
static
uint8_t datablock_2[32] = { 0x54,0x77,0x6F,0x20,0x4F,0x6E,0x65,0x20,0x4E,0x69,0x6E,
		0x65,0x20,0x54,0x77,0x6F, 0x54,0x77,0x6F,0x20,0x4F,0x6E,0x65,0x20,0x4E,0x69,0x6E,
		0x35,0x20,0x54,0x77,0x6F };

#endif
