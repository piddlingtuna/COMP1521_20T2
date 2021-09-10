/*
Translate this C program so it uses goto rather than if/else.

Then translate it to MIPS assembler.
*/

#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 46340) {
        printf("square too big for 32 bits\n");
    } else {
        y = x * x;
        printf("%d\n", y);
    }
    
    return 0;
}
