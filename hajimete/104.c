#include <stdio.h>

main()
{
    float fdat;
    int i;
    FILE *fp;
    long int pos;

    if ((fp=fopen("FILE31", "rb")) == NULL) {
        puts("read open error !!");
        return(-1);
    }
    for (i=0; i<5; i++) {
        pos = ftell(fp);
        printf("pos: %4ld   ", pos);
        if (fread(&fdat, sizeof(float), 1, fp) != 1) {
            puts("EOF or error !!");
            break;
        }
        printf("(%2d) %7.1f\n", i, fdat);
    }
    fclose(fp);
    return(0);
}
