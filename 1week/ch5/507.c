#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char s[10];
    int len;
    strcpy(s, "ABC");
    printf("s=%s\n", s);
    strcat(s, "DEF");
    printf("s=%s\n", s);
    len = strlen(s);
    printf("文字列の長さ: %d\n", len);
    return 0;
}