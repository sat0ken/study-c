#include <stdio.h>

// Segmentation fault (core dumped)が起きる
int main(int argc, char** argv) {
    int *p = NULL;
    *p = 1; // アドレスを指定しないまま値を代入
    return 0;
}