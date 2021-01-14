main()
{
    int cc;
    int isupper(int);

    while((cc=getchar()) != EOF) {
        if(isupper(cc)) cc |= 0x20;
        putchar(cc);
    }
}

int isupper(int c)
{
    return ((0x40<c && c<0x5b) ? 1: 0);
}
