#include<stdio.h>

int main(void)
{
    double vx;

    puts("実数を入力してください。");
    scanf("%lf", &vx);

    printf("あなたは%fと入力しました。\n", vx);
    return 0;
}
