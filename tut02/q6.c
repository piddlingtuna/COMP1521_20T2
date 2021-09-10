#include <stdio.h>

typedef unsigned int Word;

Word reverseBits(Word w);

int main(void) {

    Word example1 = 0x01234567;
    printf("Example 1\n");
    printf("w == 0x%x\n", example1);
    printf("reverseBits(w) == 0x%x\n", reverseBits(example1));

    Word example2 = 0xE6A2C480;
    printf("Example 2\n");
    printf("w == 0x%x\n", example2);
    printf("reverseBits(w) == 0x%x\n", reverseBits(example2));

    return 0;
}

Word reverseBits(Word w) {
    Word ret = 0;
    for (Word i = 0; i < 32; i++) {
        Word lmask = 1 << (31 - i);
        Word rmask = 1 << i;
        if (w & lmask) {
            
            // ret = ret | rmask;
            ret |= rmask;
        }

    }
    /*    
    int i = 0;
    while (i < 32) {

        i++;
    }*/

    return ret;
}
/*
original = 0b1100

reverse  = 0b0011

w     = 0b1010 &
lmask = 0b1000
result= 0b1000

rmask = 0b0001 |
ret   = 0b0001

w     = 0b1010
lmask = 0b0100
rmask = 0b0010

*/