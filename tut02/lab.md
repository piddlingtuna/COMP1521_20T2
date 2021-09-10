# Lab02

## How do I use the man pages?

malloc(3) does NOT mean use malloc to allocate 3 bytes.

It means use malloc, which is in section 3 of the man pages.

For more info, type
```
$ man 3 malloc
```

## How long should a string be?

In C, strings are null terminated.

They always end in '\0'.

If you want an 8 character long string, allocate 9 bytes.

```c

char *string = malloc((8 + 1) * sizeof char);
...
string[8] = '\0';

```

## What is a bcd?

A BCD is a hexadecimal digit except we never use 0xA, 0xB, 0xC, 0xD, 0xE or 0xF.

It ranges from 0x0 to 0x9.

### Unpacked BCD

Used in Q3

8 bits per BCD (4 bits are wasted)

        0x0102 == 0b 0000 0001 0000 0010
                     |-------| |-------|
                         1         2

        0x0402 == 0b 0000 0100 0000 0010
                     |-------| |-------|
                         4         2


### Unpacked BCD

Used in Q4

4 bits per BCD (0 bits are wasted)

        0x0102 == 0b 0001 0010
                     |--| |--|
                      1     2

        0x0402 == 0b 0100 0010
                     |--| |--|
                      4    2

Packed
0x10 = 0001 0000

Unpacked
0x0100 = 000 0001 0000 0000

Packed
0x16 = 0001 0110





./sixteen_in 0000 0000 0000 0000

int16_t    = 0000 0000 0000 0000

0
./sixteen_in 1111111111111111
-1
./sixteen_in 0011 0011 0011 0011

char *bits;

char bits[4] = {'0', 'h', '1', '\0'};

char bits[4] = "0h1";

bits[0] = '0'



bits[0] == '0'
bits[1] == '0'


bits[2] == '1'
bits[3] == '1'

return_value = 
0b 0000 0000 0000 0000 |
0b 0010 0000 0000 0000 = 
0b 0010 0000 00000 0000


0b 0010 0000 00000 0000 |
0b 0001 0000 00000 0000 =
0b 0011 0000


int16_t    = 0011 0011 0011 0011


13107
./sixteen_in 1111000011110000
-3856
