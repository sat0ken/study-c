#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

void show(int*);
void swap(int*, int*);

int main(int argc, char** argv) {
    int a[SIZE], i, j;
    srand((unsigned )time(NULL));
    for (i = 0; i < SIZE; i++) {
        a[i] = rand() % 10 + i;
    }
    show(a);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE - i; j++) {
            if (a[j] < a[j+1]) {
                swap(&a[j], &a[j+1]);
            }
            show(a);
        }
    }
    return 0;
}

void show(int* array) {
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}