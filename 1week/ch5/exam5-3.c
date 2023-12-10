#include <stdio.h>

void uppercase_str(char*, char*);

int main(int argc, char** argv) {
    char s1[256], s2[256];
    printf("英単語を入力 = ");
    scanf("%s", s1);
    uppercase_str(s1, s2);
    printf("変換後の文字列: %s\n", s2);
    return 0;
}

void uppercase_str(char* s1, char* s2) {
    while (*s1 != '\0') {
        if (*s1 >= 'a' && *s1 <= 'z') {
            *s2 = *s1 - 'a' + 'A';
        } else {
            *s2 = *s1;
        }
        s1++;
        s2++;
    }
    *s2 = '\0';
}