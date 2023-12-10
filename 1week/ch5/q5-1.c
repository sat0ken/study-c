#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char s1[256], s2[256];
    printf("１つ目の文字列を入力 = ");
    scanf("%s", s1);
    printf("２つ目の文字列を入力 = ");
    scanf("%s", s2);
    strcat(s1, s2);
    printf("結合した文字列: %s\n", s1);
}