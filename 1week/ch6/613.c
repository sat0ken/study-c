#include <stdio.h>

typedef struct {
    int a;
    double b;
} num_data;

void dealData1(num_data data);
void dealData2(num_data* pData);

int main(int argc, char** argv) {
    num_data n1 = {1, 1.2f}, n2 = {1, 1.2f};
    printf("n1のアドレス: %p, n2のアドレス: %p\n", &n1, &n2);
    dealData1(n1);
    dealData2(&n2);
    printf("n1.a = %d, n1.b = %f\n", n1.a, n1.b);
    printf("n2.a = %d, n2.b = %f\n", n2.a, n2.b);
    return 0;
}

void dealData1(num_data data) {
    printf("a=%d, f=%f\n", data.a, data.b);
    printf("dealData1に渡ってきたデータのアドレス: 0x%p\n", &data);
    data.a = 2;
    data.b = 2.4;
}

void dealData2(num_data* data) {
    printf("a=%d, f=%f\n", data->a, data->b);
    printf("dealData2に渡ってきたデータのアドレス: 0x%p\n", data);
    data->a = 2;
    data->b = 2.4;
}