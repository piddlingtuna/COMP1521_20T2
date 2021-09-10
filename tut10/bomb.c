// Fork Bomb
// DO NOT RUN

#include <sys/types.h> 
#include <unistd.h>

int main() {
    fork();
    return 0;
}

100, 101

Pids:
100
100, 101
100, 102, 101, 103
100, 104, 102, 105, 101, 106
