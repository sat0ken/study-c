#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("整数1を入力してください：");
    scanf("%d", &n1);
    printf("整数2を入力してください：");
    scanf("%d", &n2);

    printf("それらの積は%dです。\n", n1 * n2);
    return 0;
}
