#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random();

int main(int argc, char** argv) {
    char s1[10];
    int length, i;
    int* p1 = NULL;
    srand((unsigned)time(NULL));

    printf("配列の長さ: ");
    scanf("%s", s1);

    length = atoi(s1);
    if (length < 0 ) {
        puts("配列の長さは１以上にしてください");
    } else {
        p1 = (int*) malloc(sizeof(int) * length);
        if (p1 == 0) {
            printf("メモリの生成に失敗しました\n");
            return -1;
        }
        printf("生成した配列: ");
        for (i = 0; i < length; i++) {
            p1[i] = get_random();
            printf("%d ", p1[i]);
        }
        printf("\n");
        free(p1);
    }

    return 0;
}

int get_random() {
    return rand() % 10 + 1;
}