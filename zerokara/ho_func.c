#include <stdio.h>

void with_tax(int);
void without_tax(int);
// 第1引数が関数ポインタで第2引数がint, 戻り値はvoid
void print_price(void (*pf)(int), int);

int main(void) {
    print_price(without_tax, 1000);
    print_price(with_tax, 1000);
}

void with_tax(int price) {
    printf("税込み %d円です\n", (int)(price * 1.1));
}

void without_tax(int price) {
    printf("税抜き %d円です\n", price);
}

void print_price(void (*pf)(int), int price) {
    printf("価格は");
    (*pf)(price);
}
