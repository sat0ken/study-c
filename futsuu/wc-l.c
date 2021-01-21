#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    int c, cnt = 0;
    while ((c = fgetc(stdin)) != EOF) {
        //if (putchar(c) < 0) exit(1);
        //printf("%c, %d\n", c, c);
        if (c == 10) {
            cnt++;
        }
    }
    printf("%d", cnt);
    exit(0);
}

