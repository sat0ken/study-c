#include <stdio.h>

int main(int argc, char** argv) {
    char char_array[] = {'a', 'b', 'c'};
    printf("char_arrayのアドレス :    %p\n", char_array);
    printf("char_array[0]のアドレス : %p\n", &char_array[0]);
    printf("char_array[1]のアドレス : %p\n", &char_array[1]);
    printf("char_array[2]のアドレス : %p\n", &char_array[2]);
    printf("\n");
    int int_array[] = {1, 2, 3};
    printf("int_array[0]のアドレス : %p\n", &int_array[0]);
    printf("int_array[1]のアドレス : %p\n", &int_array[1]);
    printf("int_array[2]のアドレス : %p\n", &int_array[2]);
}