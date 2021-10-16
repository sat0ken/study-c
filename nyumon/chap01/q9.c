#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("整数1を入力してください：");
    scanf("%d", &n1);
    printf("整数2を入力してください：");
    scanf("%d", &n2);
    printf("整数3を入力してください：");
    scanf("%d", &n3);

    printf("それらの和は%dです。\n", n1 + n2 + n3);
    return 0;
}
