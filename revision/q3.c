typedef struct Coord {
    int x;
    int y;
    int z;
} Coord;

int main(void) {
    
    Coord coords[10];
    Coord a = { .x = 5, .y = 6, .z = 7 };
    Coord b = { .x = 3, .y = 3, .z = 3 };
    Coord *p = &a;

    /*** A ***/
    (*p).x = 6;
    p->y++;
    p->z++;
    b = *p;
    /*** B ***/

}

/*
a. Draw diagrams to show the state of the variables a, b, and p, at points A and B.

b. Why would a statement like *p.x++; be incorrect?

c. Write code to iterate over the coords array using just the pointer variable p the address of the end of the array, and setting each item in the array to (0,0,0). Do not use an index variable.

*/