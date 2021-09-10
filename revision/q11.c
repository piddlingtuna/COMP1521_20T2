#include <stdio.h>

int main(void) {
    int n, a, b, c;
    n = scanf("%d %d %d", &a, &b, &c);

    return 0;
}

/*
C functions have a number of different ways of dealing with errors:

-   terminating the program entirely (rare)
-   setting the system global variable errno
-   returning a value that indicates an error (e.g., NULL, EOF)
-   setting a returning parameter to an error value 

They might even use some combination of the above.

Think about how the following code might behave for each of the inputs below. What is the final value for each variable?

a. 42 64 999


b. 42 64.4 999


c. 42 64 hello


d. 42 hello there


e. hello there


*/