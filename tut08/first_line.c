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
    FILE *stream = fopen(argv[1], "r");
    if (stream == NULL) {
        perror("");// search errno -> convert to human readable message -> print
        return 1;
    }

    perror("");

    // fgetc vs fgets
    int c = fgetc(stream); // 0 <= char <= 127
    // EOF = END OF FILE #define EOF -1
    while (c != EOF && c != '\n') {
        fputc(c, stdout);
        c = fgetc(stream);
    }

    fclose(stream);

    return 0;

}
