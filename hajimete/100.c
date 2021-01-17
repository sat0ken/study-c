#include <stdio.h>

main()
{
    float data[5];
    int i;
    FILE *fp;

    if ((fp = fopen("FILE31", "wb")) == NULL) {
        puts("read open error !!");
        return(-1);
    }
    for (i=0; i<5; i++) data[i] = (i+1)*10.0;
    if (fwrite(data, sizeof(float), 5, fp) != 5) {
        puts("write error !!");
        fclose(fp);
        return(-1);
    }
    for (i=0; i<5; i++) data[i] = (i+1)*100.0;
    if (fwrite(data, sizeof(float), 5, fp) != 5) {
        puts("write error !!");
        fclose(fp);
        return(-1);
    }
    fclose(fp);
    return(0);
}
