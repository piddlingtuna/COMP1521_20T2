// What is the difference in meaning between the following pairs (a/b and c/d) of groups of C statements:

#include <stdio.h>

int main(void) {
    int x = 1;

    // a.
    if (x == 0) {
        printf ("zero\n");
    }

    // b.
    if (x == 0)
        printf ("zero\n");

    // c.
    if (x == 0) {
        printf ("zero\n");
        printf ("after\n");
    }

    // d.
    if (x == 0)
        printf ("zero\n");
        printf ("after\n");

    return 0;
}
