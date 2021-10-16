#include<stdio.h>

int main(void)
{
    int a, b;

    puts("2つの整数を入力してください。");
    printf("整数a：");     scanf("%d", &a);
    printf("整数b：");     scanf("%d", &b);

    printf("aの値はbの値の%fです。\n", (double)(100.0 * a / b));
    return 0;
}
