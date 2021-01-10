main()
{
    int wd, bd = 0x0f0f, cd = 0x4567;
    void BitDisp(int);

    printf(" 0x4567 --> ");
    BitDisp(cd);
    printf(" 0x0f0f --> ");
    BitDisp(bd);

    wd = cd | bd;
    printf(" OR --> ");
    BitDisp(wd);

    wd = cd & bd;
    printf(" AND --> ");
    BitDisp(wd);

    wd = cd ^ bd;
    printf(" XOR --> ");
    BitDisp(wd);

    wd = wd ^ bd;
    printf(" XOR --> ");
    BitDisp(wd);
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
