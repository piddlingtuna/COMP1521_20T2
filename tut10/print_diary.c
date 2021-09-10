// print $HOME/.diary to stdout

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//int global = 5;

// Environment variable - everywhere

int main(int argc, char *argv[]) {
    char *home = getenv("HOME");
    chdir(home);

    FILE *stream = fopen(".diary", "r");
    if (stream == NULL) {
        perror("fopen failed.");
        exit(1);
    }

    int byte;
    while ((byte = fgetc(stream))!= EOF) {
        putc(byte, stdout);
    }

    fclose(stream);
    //global = 7;

    return 0;
}


int function(void) {
    //global = 42;
    return 5;
}