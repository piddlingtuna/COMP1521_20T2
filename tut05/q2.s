#  Give MIPS directives to represent the following variables:

# .space n == allocate n bytes
# .byte 'A' == allocate 1 byte and store 'A'
# .word 1 == allocate 4 bytes and store 1

    .text

# a.    int u;
.space 4

# b.    int v = 42;
.word 42

# c.    char w;
.space 1

# d.    char x = 'a';
.byte 'a'

# e.    double y;
.space 8

# f.    int z[20];
.space 80 == 4 x 20
array+ 0
array + 4
array + 8
array[3]
# What is an array?

