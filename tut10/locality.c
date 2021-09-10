#include <stdlib.h>

int main(void) {

    int *array1 = (int *) malloc(10000);
    int *array2 = (int *) malloc(10000);

    for (int i = 0; i < 10000; i++) {
        // do stuff
        // use array1
    }
    free(array1);

    // actually load in array2
    for (int i = 0; i < 10000; i++) {
        // do stuff
        // use array2

        // we need more memory?
    }
    free(array2);

    int variable = func();

    return 0;

}

int func() {
    // do something
    helper1();
    helper2();
    helper3();
    return 42;
}

void helper1() {
    // do more stuff
}

void helper1() {
    // do more stuff
}

void helper2() {
    // do more stuff
}

void helper3() {
    // do more stuff
}
