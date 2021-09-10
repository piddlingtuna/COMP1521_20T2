#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *stream = fopen(argv[1], "a");
    if (stream == NULL) {
        perror(argv[1]);
        return 1;
    }

    int c = fgetc(stdin);
    while (c != EOF && c != '\n') {
        fputc(c, stream);
        c = fgetc(stdin);
    }

    fclose(stdin);

    return 0;

}
