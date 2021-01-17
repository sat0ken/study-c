#include <stdio.h>

main()
{
    float fdat;
    int i;
    FILE *fp;
    long int pos;

    if ((fp=fopen("FILE31", "rb")) == NULL) {
        puts("file read error !!");
        return(-1);
    }

    for (i=0; i<10; i+=2) {
        pos = i*sizeof(float);
        if (fseek(fp, pos, SEEK_INT) != 0) {
            puts("seek error !!");
            fclose(fp);
            return(-1);
        }
        if (fread(&fdat, sizeof(float), 1, fp) != 1) {
            puts("read error !!");
            fclose(fp);
            return(-1);
        }
        printf("%2d: %7.1f\n", i, fdat);
    }
    fclose(fp);
    return(0);
}
