#include <stdio.h>

main()
{
    float fdat;
    int i;
    FILE *fp;
    long int pos;

    if ((fp=fopen("FILE31", "rb")) == NULL) {
        puts("read error !!");
        return(-1);
    }
    for (i=0; i<5; i++) {
        if (fread(&fdat, sizeof(float), 1, fp) != 1) {
            puts("read error !!");
            fclose(fp);
            return(-1);
        }
        printf("%2d: %7.1f\n", i, fdat);
        pos = sizeof(float);
        if (fseek(fp, pos, SEEK_CUR) != 0) {
            puts("seek error !!");
            fclose(fp);
            return(-1);
        }
    }
    fclose(fp);
    return(0);
}
