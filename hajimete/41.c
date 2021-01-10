main()
{
    int c;
    void BitDisp(int);

    while(1){
        printf("decimal=> ");
        scanf("%d", &c);
        BitDisp(c);
        if(c == 0) {
            break;
        }
    }

}

void BitDisp(int c)
{
    int i, wc;

    for(i = 15; i >= 0; i--){
        wc = (c >> i)&0x01;
        printf("%1d", wc);
    }
    printf("\n");
}
