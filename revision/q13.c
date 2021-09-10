#include <stdio.h>
#define N 10

int main(void) {
    char str[N] = { 'H', 'i', '\0' };
    printf("%s\n", str);
    return 0;
}

/*
For each of the following commands, describe what kind of output would be produced:

a. gcc -E x.c
b. gcc -S x.c
c. gcc -c x.c
d. gcc x.c

*/
