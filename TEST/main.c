//
//  main.c
//  TEST
//
//  Created by Tang Zhixiong on 09/08/2016.
//
//

#include <stdio.h>
#include <string.h>

static void aaa(uint8_t input, uint8_t* output) {
    uint8_t data[]={
        /* 0x00 */	0x00,
        /* 0x01 */	0x01,
        /* 0x02 */	0x02,
        /* 0x03 */	0x03,
        /* 0x04 */	0x04,
        /* 0x05 */	0x05,
        /* 0x06 */	0x06,
        /* 0x07 */	0x07,
        /* 0x08 */	0x08,
        /* 0x09 */	0x09,
        /* 0x0a */	0x0a,
        /* 0x0b */	0x0b,
        /* 0x0c */	0x0c,
        /* 0x0d */	0x0d,
        /* 0x0e */	0x0e,
        /* 0x0f */	0x0f,
        /* 0x10 */	0x01,
        /* 0x11 */	0x00,
        /* 0x12 */	0x03,
        /* 0x13 */	0x02,
        /* 0x14 */	0x05,
        /* 0x15 */	0x04,
        /* 0x16 */	0x07,
        /* 0x17 */	0x06,
        /* 0x18 */	0x09,
        /* 0x19 */	0x08,
        /* 0x1a */	0x0b,
        /* 0x1b */	0x0a,
        /* 0x1c */	0x0d,
        /* 0x1d */	0x0c,
        /* 0x1e */	0x0f,
        /* 0x1f */	0x0e,
        /* 0x20 */	0x02,
        /* 0x21 */	0x03,
        /* 0x22 */	0x00,
        /* 0x23 */	0x01,
        /* 0x24 */	0x06,
        /* 0x25 */	0x07,
        /* 0x26 */	0x04,
        /* 0x27 */	0x05,
        /* 0x28 */	0x0a,
        /* 0x29 */	0x0b,
        /* 0x2a */	0x08,
        /* 0x2b */	0x09,
        /* 0x2c */	0x0e,
        /* 0x2d */	0x0f,
        /* 0x2e */	0x0c,
        /* 0x2f */	0x0d,
        /* 0x30 */	0x03,
        /* 0x31 */	0x02,
        /* 0x32 */	0x01,
        /* 0x33 */	0x00,
        /* 0x34 */	0x07,
        /* 0x35 */	0x06,
        /* 0x36 */	0x05,
        /* 0x37 */	0x04,
        /* 0x38 */	0x0b,
        /* 0x39 */	0x0a,
        /* 0x3a */	0x09,
        /* 0x3b */	0x08,
        /* 0x3c */	0x0f,
        /* 0x3d */	0x0e,
        /* 0x3e */	0x0d,
        /* 0x3f */	0x0c,
        /* 0x40 */	0x04,
        /* 0x41 */	0x05,
        /* 0x42 */	0x06,
        /* 0x43 */	0x07,
        /* 0x44 */	0x00,
        /* 0x45 */	0x01,
        /* 0x46 */	0x02,
        /* 0x47 */	0x03,
        /* 0x48 */	0x0c,
        /* 0x49 */	0x0d,
        /* 0x4a */	0x0e,
        /* 0x4b */	0x0f,
        /* 0x4c */	0x08,
        /* 0x4d */	0x09,
        /* 0x4e */	0x0a,
        /* 0x4f */	0x0b,
        /* 0x50 */	0x05,
        /* 0x51 */	0x04,
        /* 0x52 */	0x07,
        /* 0x53 */	0x06,
        /* 0x54 */	0x01,
        /* 0x55 */	0x00,
        /* 0x56 */	0x03,
        /* 0x57 */	0x02,
        /* 0x58 */	0x0d,
        /* 0x59 */	0x0c,
        /* 0x5a */	0x0f,
        /* 0x5b */	0x0e,
        /* 0x5c */	0x09,
        /* 0x5d */	0x08,
        /* 0x5e */	0x0b,
        /* 0x5f */	0x0a,
        /* 0x60 */	0x06,
        /* 0x61 */	0x07,
        /* 0x62 */	0x04,
        /* 0x63 */	0x05,
        /* 0x64 */	0x02,
        /* 0x65 */	0x03,
        /* 0x66 */	0x00,
        /* 0x67 */	0x01,
        /* 0x68 */	0x0e,
        /* 0x69 */	0x0f,
        /* 0x6a */	0x0c,
        /* 0x6b */	0x0d,
        /* 0x6c */	0x0a,
        /* 0x6d */	0x0b,
        /* 0x6e */	0x08,
        /* 0x6f */	0x09,
        /* 0x70 */	0x07,
        /* 0x71 */	0x06,
        /* 0x72 */	0x05,
        /* 0x73 */	0x04,
        /* 0x74 */	0x03,
        /* 0x75 */	0x02,
        /* 0x76 */	0x01,
        /* 0x77 */	0x00,
        /* 0x78 */	0x0f,
        /* 0x79 */	0x0e,
        /* 0x7a */	0x0d,
        /* 0x7b */	0x0c,
        /* 0x7c */	0x0b,
        /* 0x7d */	0x0a,
        /* 0x7e */	0x09,
        /* 0x7f */	0x08,
        /* 0x80 */	0x08,
        /* 0x81 */	0x09,
        /* 0x82 */	0x0a,
        /* 0x83 */	0x0b,
        /* 0x84 */	0x0c,
        /* 0x85 */	0x0d,
        /* 0x86 */	0x0e,
        /* 0x87 */	0x0f,
        /* 0x88 */	0x00,
        /* 0x89 */	0x01,
        /* 0x8a */	0x02,
        /* 0x8b */	0x03,
        /* 0x8c */	0x04,
        /* 0x8d */	0x05,
        /* 0x8e */	0x06,
        /* 0x8f */	0x07,
        /* 0x90 */	0x09,
        /* 0x91 */	0x08,
        /* 0x92 */	0x0b,
        /* 0x93 */	0x0a,
        /* 0x94 */	0x0d,
        /* 0x95 */	0x0c,
        /* 0x96 */	0x0f,
        /* 0x97 */	0x0e,
        /* 0x98 */	0x01,
        /* 0x99 */	0x00,
        /* 0x9a */	0x03,
        /* 0x9b */	0x02,
        /* 0x9c */	0x05,
        /* 0x9d */	0x04,
        /* 0x9e */	0x07,
        /* 0x9f */	0x06,
        /* 0xa0 */	0x0a,
        /* 0xa1 */	0x0b,
        /* 0xa2 */	0x08,
        /* 0xa3 */	0x09,
        /* 0xa4 */	0x0e,
        /* 0xa5 */	0x0f,
        /* 0xa6 */	0x0c,
        /* 0xa7 */	0x0d,
        /* 0xa8 */	0x02,
        /* 0xa9 */	0x03,
        /* 0xaa */	0x00,
        /* 0xab */	0x01,
        /* 0xac */	0x06,
        /* 0xad */	0x07,
        /* 0xae */	0x04,
        /* 0xaf */	0x05,
        /* 0xb0 */	0x0b,
        /* 0xb1 */	0x0a,
        /* 0xb2 */	0x09,
        /* 0xb3 */	0x08, 
        /* 0xb4 */	0x0f, 
        /* 0xb5 */	0x0e, 
        /* 0xb6 */	0x0d, 
        /* 0xb7 */	0x0c, 
        /* 0xb8 */	0x03, 
        /* 0xb9 */	0x02, 
        /* 0xba */	0x01, 
        /* 0xbb */	0x00, 
        /* 0xbc */	0x07, 
        /* 0xbd */	0x06, 
        /* 0xbe */	0x05, 
        /* 0xbf */	0x04, 
        /* 0xc0 */	0x0c, 
        /* 0xc1 */	0x0d, 
        /* 0xc2 */	0x0e, 
        /* 0xc3 */	0x0f, 
        /* 0xc4 */	0x08, 
        /* 0xc5 */	0x09, 
        /* 0xc6 */	0x0a, 
        /* 0xc7 */	0x0b, 
        /* 0xc8 */	0x04, 
        /* 0xc9 */	0x05, 
        /* 0xca */	0x06, 
        /* 0xcb */	0x07, 
        /* 0xcc */	0x00, 
        /* 0xcd */	0x01, 
        /* 0xce */	0x02, 
        /* 0xcf */	0x03, 
        /* 0xd0 */	0x0d, 
        /* 0xd1 */	0x0c, 
        /* 0xd2 */	0x0f, 
        /* 0xd3 */	0x0e, 
        /* 0xd4 */	0x09, 
        /* 0xd5 */	0x08, 
        /* 0xd6 */	0x0b, 
        /* 0xd7 */	0x0a, 
        /* 0xd8 */	0x05, 
        /* 0xd9 */	0x04, 
        /* 0xda */	0x07, 
        /* 0xdb */	0x06, 
        /* 0xdc */	0x01, 
        /* 0xdd */	0x00, 
        /* 0xde */	0x03, 
        /* 0xdf */	0x02, 
        /* 0xe0 */	0x0e, 
        /* 0xe1 */	0x0f, 
        /* 0xe2 */	0x0c, 
        /* 0xe3 */	0x0d, 
        /* 0xe4 */	0x0a, 
        /* 0xe5 */	0x0b, 
        /* 0xe6 */	0x08, 
        /* 0xe7 */	0x09, 
        /* 0xe8 */	0x06, 
        /* 0xe9 */	0x07, 
        /* 0xea */	0x04, 
        /* 0xeb */	0x05, 
        /* 0xec */	0x02, 
        /* 0xed */	0x03, 
        /* 0xee */	0x00, 
        /* 0xef */	0x01, 
        /* 0xf0 */	0x0f, 
        /* 0xf1 */	0x0e, 
        /* 0xf2 */	0x0d, 
        /* 0xf3 */	0x0c, 
        /* 0xf4 */	0x0b, 
        /* 0xf5 */	0x0a, 
        /* 0xf6 */	0x09, 
        /* 0xf7 */	0x08, 
        /* 0xf8 */	0x07, 
        /* 0xf9 */	0x06, 
        /* 0xfa */	0x05, 
        /* 0xfb */	0x04, 
        /* 0xfc */	0x03, 
        /* 0xfd */	0x02, 
        /* 0xfe */	0x01, 
        /* 0xff */	0x00, 
    };
    memcpy(output, data + input * 1, 1);
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("%02x", aaa[0xef]);
//    printf("%02x", aaa[0xfe]);
    uint8_t input = 0xef;
    uint8_t* output = malloc(1);
    aaa(input, output);
    printf("%02x", *output);
    return 0;
}
