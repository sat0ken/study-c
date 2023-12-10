#include <stdio.h>

int my_strlen(char* s);

int main(int argc, char** argv) {
    char s1[256];
    printf("s1 = ");
    scanf("%s", s1);

    printf("文字列の長さは%d\n", my_strlen(s1));
}

int my_strlen(char* s) {
    int length = 0;
    while(*s != '\0') {
        length++;
        s++;
    }
    return length;
}