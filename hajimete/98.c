#include <stdio.h>

main()
{
    float data[5];
    int i;
    FILE *fp;

    if ((fp = fopen("FILE31", "rb")) == NULL) {
        puts("read open error !!");
        return(-1);
    }
    if (fread(data, sizeof(float), 5, fp) != 5) {
        puts("read error !!");
        fclose(fp);
        return(-1);
    }
    printf("No.1");
    for (i=0; i<5; i++) printf("%7.1f", data[i]);
    puts("");
    if (fread(data, sizeof(float), 5, fp) != 5) {
        puts("read error !!");
        fclose(fp);
        return(-1);
    }
    printf("No.2");
    for(i=0; i<5; i++) printf("%7.1f", data[i]);
    puts("");
    fclose(fp);
    return(0);
}
