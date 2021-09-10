#define LIFE 42
#define VAL random() % 20

#define sq(x) (x * x)
#define woof(y) (LIFE + y)

int main(void) {
    char s[LIFE];
    int i = woof(5);
    i = VAL;
    return (sq(i) > LIFE) ? 1 : 0;
}

/*
What will be the output of the following command:
gcc -E prog.c

*/
