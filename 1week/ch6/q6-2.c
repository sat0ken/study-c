#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int* p1 = NULL;
    p1 = (int*) malloc(sizeof(int) * 10);
    int i;
    for (i = 0; i < 10; i++) {
        p1[i] = i + 1;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", p1[i]);
    }
    printf("\n");
    free(p1);
}