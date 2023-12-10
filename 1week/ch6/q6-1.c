#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i;
    int sum = 0;
    for (i = 0; i < argc; i++) {
        sum += atoi(argv[i]);
    }
    printf("合計: %d\n", sum);
    return 0;
}