#define isupper(c) ((0x40<c && c<0x5b) ? 1: 0)

main()
{
    int cc;

    while((cc=getchar()) != EOF) {
        if(isupper(cc)) cc |= 0x20;
        putchar(cc);
    }

}
