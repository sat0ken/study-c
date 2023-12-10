#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int get_random();
void show_even(int* a);

int main(int argc, char** argv) {
    int arr[10];
    int i;
    srand((unsigned)time(NULL));

    printf("乱数: ");
    for (i = 0; i < 10; i++) {
        char s1[10];
        arr[i] = get_random();
        printf("%d ", arr[i]);
    }
    printf("\n");
    show_even(arr);
    return 0;
};

int get_random() {
    return rand() % 10 + 1;
}

void show_even(int* a) {
    int i;
    printf("偶数: ");
    for (i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}