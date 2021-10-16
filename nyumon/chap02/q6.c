#include<stdio.h>

int main(void)
{
    int a;

    puts("身長を入力してください。");
    printf("身長：");     scanf("%d", &a);

    printf("標準体重は%.1fです。\n", (a - 100) * 0.9);
    return 0;
}
