#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *stream = fopen(argv[1], "r");
    if (stream == NULL) {
        perror(argv[1]);
        return 1;
    }

    int c = fgetc(stream);
    while (c != EOF && c != '\n') {
        fputc(c, stdout);
        c = fgetc(stream);
    }

    fclose(stream);

    return 0;

}
