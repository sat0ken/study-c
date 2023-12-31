#include <stdio.h>
#include <string.h>

int main(void) {
    char s0[] = "ABCDEF";
    char s1[] = "HIJKLMN";

    if (strncmp(s0, s1, 3) == 0) {
        printf("3文字目まで同じ\n");
    } else {
        printf("3文字目まで同じではない\n");
    }
}