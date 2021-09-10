#include <stdio.h>

int main(void) {
    char *str = "abc123\n";

    for (char *c = str; *c != '\0'; c++) {
        putchar(*c);
    }

    return 0;
}

/*
What is the output from the following program and how does it work? Try to work out the output without copy-paste-compile-execute.

*/
