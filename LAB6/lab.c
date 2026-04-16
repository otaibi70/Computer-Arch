#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main() {
    size_t step = 100 * 1024 * 1024; // trying it as 100mb + this not saved inside of real memory.
    size_t total = 0;

    while (1) {
        char *mem = malloc(step);
        if (!mem) {
            printf("Memory allocation failed!\n");
            break;
        }
        //do loop so we can use the memory real structure each time with 100mb
        for (size_t i = 0; i < step; i += 4096) {
            mem[i] = 1;
        }

        total += step;
        printf("Allocated: %zu MB\n", total / (1024 * 1024));

        usleep(30000);
    }

    return 0;
}