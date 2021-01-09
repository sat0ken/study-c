typedef unsigned char BYTE;
typedef struct {
    unsigned int mcode;
    unsigned char yomi[21];
}MOJI;

main()
{
    BYTE str1[7], str2[21], c1, c2;
    MOJI data[10];
    int j, k;

    for (k = 0; k < 10; k++) {
        printf("カンジ  ?"); gets(str1);
        if (str1[0] == "\0") {
            break;
        }
        data[k].mcode = str1[0]<<8 | str1[1];
        printf("ヨミカタ    ?"); gets(str2);
        strcpy(data[k].yomi, str2);
    }
    for (j = 0; j < k; j++) {
        c1 = data[j].mcode >> 8;
        c2 = data[j].mcode & 0xFF;
        printf("%2d : %c%c %s\n", j, c1, c2, data[j].yomi);
    }
}
