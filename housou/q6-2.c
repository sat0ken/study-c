#include <stdio.h>

int main() {
    int array[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            array[i][j]= (i+1) * (j+1);
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d x %d = %d\n",  i+1, j+1, array[i][j]);
        }
    }
}