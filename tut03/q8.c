/*
How large (#bytes) is each of the following C unions? 

You may assume   sizeof(char) == 1,   sizeof(short) == 2,   sizeof(int) == 4.
*/

union {
    int zID;
    char name[100];
} person;
// size == 100

union { unsigned short a; char b; } u2;
// size == max (2, 1) == 2

union { int a; char b[12]; } u3;
// size == max (4, 12) == 12

union { double a; char b[9]; } u4; // PADDING
// size == max (4, 14) == 16

union {
    unsigned int a;
    int b;
    struct { int x; int y; } c; } u5;
// size == 8
