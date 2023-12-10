#include <stdio.h>
#include <string.h>

void uppercase_str(char*, char*);

int main(int argc, char** argv) {
    char s1[256], s2[256];
    printf("文字列を入力 = ");
    scanf("%s", s1);
    printf("文字列を入力 = ");
    scanf("%s", s2);

    if (strlen(s1) == strlen(s2)) {
        printf("同じ長さです\n");
    } else if (strlen(s1) < strlen(s2)) {
        printf("長い文字列: %s\n", s2);
    } else {
        printf("長い文字列: %s\n", s1);
    }
    
    return 0;
}

