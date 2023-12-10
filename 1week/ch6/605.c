#include <stdio.h>

int main(int argc, char** argv) {
    int a = 10;
    int* p = &a;
    int** pp = &p;
    printf("a=%d &a=0x%p\n", a, &a);
    printf("*p=%d p=0x%p &p=0x%p\n", *p, p, &p);
    printf("*pp=0x%p pp=0x%p\n", *pp, pp);
    return 0;
}