#include <stdio.h>
#include <stdint.h>

uint32_t six_middle_bits(uint32_t bits);

int main(void) {

    uint32_t bits = 0x0f0f0f0f;

    uint32_t middle = six_middle_bits(bits);

    printf("bits:   0x%x\n", bits);
    printf("middle: %d\n", middle);

    return 0;
}

uint32_t six_middle_bits(uint32_t bits) {
//    return (bits >> 13) & 0b111111;
    return (bits >> 13) & 0x3f;

}

uint32_t six_last_bits(uint32_t bits) {
//    return bits & 0b111111;
    return bits & 0x3f;

}

0000 1111 0000 1111 0000 1111 0000 1111
                                ^^ ^^^^
                        &0000 0011 1111
                            = 0000 1111

00 1111 0000 0000 0000 0000 0000 0000 00 << 26
                                ^^ ^^^^
0000 0000 0000 0000 0000 0000 0000 1111
                                        >> 26

/*
bits
0000 1111 0000 1111 0000 1111 0000 1111
                ^^^ ^^^

bits
0000000... 0000 1111 0000 1111 000
                           ^^^ ^^^

bits
0000000... 0000 1111 0000 1111 000
                           ^^^ ^^^
                         0011 1111
*/
