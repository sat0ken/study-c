#include <stdio.h>

#define DATA_NUM 5
int data[] = {7, 2, 6, 4,9};

void data_print();

int main() {
    data_print();
    for (int i = 0; i < DATA_NUM; i++) {
        for (int j = DATA_NUM - 1; j > i; j--) {
            if (data[j] < data[j - 1]) {
                int tmp = data[j];
                data[j] = data[j-1];
                data[j-1] = tmp;
                data_print();
            }
        }
    }
    printf("---\n");
    data_print();
}

void data_print() {
    for (int i = 0; i < DATA_NUM; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}