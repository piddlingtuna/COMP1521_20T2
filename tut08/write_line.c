#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        // stdin
        // stdout
        // stderr
        fprintf(stderr, "Error: usage is %s <filename>", argv[0]);
        // printf("Hello World\n");
        // fprintf(stdout, "Hello World\n");
        return 1;
    }

    // filename = argv[1];
    FILE *stream = fopen(argv[1], "w"); // creates file if doesn't exist
    if (stream == NULL) {
        perror("");// search errno -> convert to human readable message -> print
        return 1;
    }

    // '\0' -> C the string is stopped
    // C's arrays don't track length

    // fgetc vs fgets
    int c = fgetc(stdin); // 0 <= char <= 127
    // EOF = END OF FILE #define EOF -1
    while (c != EOF && c != '\n') {
        fputc(c, stream);
        c = fgetc(stdin);
    }

    fclose(stream);

    return 0;

}
