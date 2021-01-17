#include <stdio.h>

struct book {
    int code;
    char name[32];
    int place;
};

main()
{
    struct book data2, data3;
    void BookDisp(char *, struct book);
    FILE *fp;

    if((fp=fopen("FILE32", "wb")) == NULL) {
        puts("write open error !!");
        return(-1);
    }
    data2.code = 8901;
    strcpy(data2.name, "C Programming");
    data2.place = 2400;
    BookDisp("write", data2);
    if (fwrite(&data2, sizeof(struct book), 1, fp) != 1) {
        puts("write error !!");
        fclose(fp);
        return(-1);
    }
    fclose(fp);

    if((fopen("FILE32", "rb")) == NULL) {
        puts("read open error !!");
        return(-1);
    }
    if (fread(&data3, sizeof(struct book), 1, fp) != 1) {
        puts("read error !!");
        fclose(fp);
        return(-1);
    }
    BookDisp("read", data3);
    fclose(fp);
    return(0);
}

void BookDisp(char *s, struct book dat)
{
    printf("- %s -\n", s);
    printf(" code : %5d\n", dat.code);
    printf(" name : %sd\n", dat.name);
    printf(" place : %5d\n", dat.place);
}
