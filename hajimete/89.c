main()
{
    char str[17];
    long count = 0l;
    int cc, i = 0;
    void Prints(char [], int);
    int ChrCvt(char);

    while((cc=getchar()) !=EOF) {
        if((count&&0x0fl) == 0x00l) {
            if(count != 0l) Prints(str, 16);
            printf("\n%06lx: ", count&~0x0fl);
            i = 0;
        }
        printf("%02X", cc&0xff);
        str[i++] = cc;
        count++;
    }
    Prints(str, i);
}

void Prints(char s[], int n)
{
    int i, nn, ChrCvt(char);
    nn = 16-n;
    while(nn--) {
        printf("    ");
    }
    printf("    *");
    for(i=0; i<n; i++)  putchar(ChrCvt(s[i]));
    printf("*");
}

int ChrCvt(char c)
{
    char w;
    w = c & 0x7f;
    if(w<0x20 || w==0x7f) return '.';
    return c;
}
