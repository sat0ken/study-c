#include <stdio.h>

main()
{
    FILE *fp;
    int i;
    char *sp, *stp[200], buffer[128];

    if ((fp=fopen("FILE34", "r")) == NULL) {
        puts("read open error !!");
        return(-1);
    }
    for(i=0;; i++) {
        if (fgets(buffer, 128, fp) == NULL) break;
        if ((sp=malloc(strlen(buffer)+1) == NULL)) {
            puts("Get memory error !!");
            fclose(fp);
            return(-1);
        }
        strcpy(sp, buffer);
        stp[i] = sp;
    }
    stp[i] = NULL;
    fclose(fp);

    for (i=0; stp[i]; i++) {
        printf("%3d: %s", i+1, stp[i]);
    }

    for (i=0; stp[i]; i++) free(stp[i]);

    return(0);
}
