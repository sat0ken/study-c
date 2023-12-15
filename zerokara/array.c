#include <stdio.h>

void func(int[]);

int main(void) {
    int scores[] = {10, 20, 30};
    func(scores);

    for (int i = 0; i < 3; i++) {
        printf("scores[%d] is %d\n", i, scores[i]);
    }
}

void func(int* array) {
    array[0] = 98;
    array[1] = 99;
    array[2] = 100;
}