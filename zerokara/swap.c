#include <stdio.h>

void swap(int*, int*);

int main(int argc, char** argv) {
    int a = 2;
    int b = 3;
    printf("a = %d, b = %d\n", a, b);
    printf("a of addr = %p, b of addr = %p\n", &a, &b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("a of addr = %p, b of addr = %p\n", &a, &b);
}

void swap(int* a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}