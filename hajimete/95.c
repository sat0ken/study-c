#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[])
{
    FILE *fp_r, *fp_w;
    int cc;
    char name_r[20], name_w[20];

    if (argc == 1) {
        fp_r = stdin;
        fp_w = stdout;
    } else if (argc == 2) {
        fp_r = fopen(argv[1], "r");
        fp_w = stdout;
    } else {
        if (*argv[1] == '*') {
            fp_r = stdin;
            fp_w = fopen(argv[2], "w");
        } else {
            fp_r = fopen(argv[1], "r");
            fp_w = fopen(argv[2], "w");
        }
    }

    if(fp_r == NULL || fp_w == NULL) exit(-1);

    while((cc=fgetc(fp_r)) != EOF) fputc(cc, fp_w);
    fclose(fp_r);
    fclose(fp_w);
}
