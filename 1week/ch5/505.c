#include <stdio.h>

#define SIZE 5

int main(int argc, char** argv) {
    int arr1[SIZE];
    char arr2[SIZE];
    int i;
    int* p1 = NULL;
    char* p2 = NULL;
    // 配列に値を代入
    for(i = 0; i < SIZE; i++) {
        arr1[i] = i;
        arr2[i] = 'A' + i;
    }
    // ポインタにアドレスを代入
    p1 = &arr1[0];
    p2 = &arr2[0];
    // 値を出力
    for(i = 0; i < SIZE; i++) {
        printf("arr1[%d] = %d, *(p1+%d) = %d ", i, arr1[i], i, *(p1+i));
        printf("arr2[%d] = %C, *(p2+%d) = %c\n", i, arr2[i], i, *(p2+i));
    }
    return 0;
}