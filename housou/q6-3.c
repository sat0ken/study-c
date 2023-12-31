#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random();

int main(void) {
    int i, j, k;
    int array[3][3][3];
    srand((unsigned)time(NULL));

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                array[i][j][k] = get_random();
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("[%d][%d][%d] = %d\n", i, j, k, array[i][j][k]);
            }
        }
    }
}

int get_random() {
    return rand() % 99 + 1;
}