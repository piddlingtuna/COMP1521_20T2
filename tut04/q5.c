/*
Translate this C program so it uses goto rather than if/else.

Then translate it to MIPS assembler.
*/

#include <stdio.h>

int main(void) {
    for (int x = 24; x < 42; x += 3) {
        printf("%d\n",x);
    }
}
