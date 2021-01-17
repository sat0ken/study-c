#include <stdio.h>

main(int argc, char *argv[])
{
    FILE *fp;
    int i;
    char buffer[128];

    if (argc < 2) return(-1);
    if ((fp = fopen(argv[1], "r")) == NULL) {
        puts("read open error !!");
        return(-1);
    }
    for (i=1;; i++) {
        if (fgets(buffer, 128, fp) == NULL) {
            if (ferror(fp)) {
                puts("read error !!");
                return(-1);
            }
            if (feof(fp)) break;
        }
        printf("%3d: %s", i, buffer);
    }
    fclose(fp);
    return(0);
}
