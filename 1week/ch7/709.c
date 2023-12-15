#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

void show(int*);
int asc(const void*, const void*);

int main(int argc, char** argv) {
    int a[SIZE], i;
    srand((unsigned ) time(NULL));

    for (i = 0; i < SIZE; i++) {
        a[i] = rand() % 10 + 1;
    }
    show(a);
    qsort((void*)a, SIZE, sizeof(int), asc);
    show(a);
    return 0;
}

int asc(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

void show(int* array) {
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
};