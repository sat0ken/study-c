#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE *fp_r, *fp_w;
    int cc;
    char name_r[20], name_w[20];

    printf("... start fcopy.\n");
    printf("Source File Name ?");
    scanf("%s", name_r);
    printf("Destination File Name ? ");
    scanf("%s", name_w);

    if((fp_r = fopen(name_r, "r")) == NULL) exit(-1);
    if((fp_w = fopen(name_w, "w")) == NULL) exit(-1);

    while((cc=fgetc(fp_r)) != EOF) fputc(cc, fp_w);
    fclose(fp_r);
    fclose(fp_w);
    printf("... end of fcopy.\n");
}
