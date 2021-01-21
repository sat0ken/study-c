#include <stdio.h>
#include <stdlib.h>
static void do_cat(FILE *f);

int
main(int argc, char *argv[])
{
    int i;
    if (argc == 1) {
        do_cat(stdin);
    } else {
        for (i = 1; i < argc; i++) {
            FILE *f;
            f = fopen(argv[i], "r");
            if (!f) {
                perror(argv[i]);
                exit(1);
            }
            do_cat(f);
            fclose(f);
        }
    }
    exit(0);
}

static void
do_cat(FILE *f)
{
    unsigned long n = 0;
    int c;
    int prev = '\n';
    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            n++;
        }
        prev = c;
    }
    if (prev != '\n') {
        n++;
    }
    printf("%ld\n", n);
}

