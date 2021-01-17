#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE *frd, *fwt;
    int cc;

    if ((frd = fopen("FILE31", "rb")) == NULL) {
        puts("read open error!!");
        return(-1);
    }
    if ((frd = fopen("FILE33", "wb")) == NULL) {
        puts("write open error!!");
        return(-1);
    }
    for (;;) {
        if ((cc = fgetc(frd)) == EOF) {
            if (ferror(frd)) {
                puts("read error !!");
                fclose(fwt);
                return(-1);
            }
            if(feof(frd)) break;
        }
        if (fputc(cc, ftw) == EOF) {
            if (ferror(fwt)) {
                puts("write error !!");
                break;
            }
        }
    }
    fclose(frd);
    fclose(fwt);
    return(0);
}
