#include <stdio.h>

int main(int argc, char** argv) {
    int array[] = {1, 2, 3};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++) {
        printf("array[i] is %d\n", array[i]);
    }
}