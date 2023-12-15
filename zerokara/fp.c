#include <stdio.h>

void func(int);
void func_a();
void func_b();
void func_c();

int main(void) {
    void (*pF)(int) = func;
    (*pF)(10);

    void (*pfs[])() ={func_a, func_b, func_c};
    for (int i = 0; i < 3; i++) {
        (*pfs[i])();
    }
}

void func(int a) {
    printf("a is %d\n", a);
}

void func_a() {
    printf("called func_a()\n");
}

void func_b() {
    printf("called func_b()\n");
}

void func_c() {
    printf("called func_c()\n");
}