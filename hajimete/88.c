main()
{
    int cc;
    long count = 0;

    while((cc = getchar()) != EOF) {
        if((count&0x0fl) == 0x00l)
            printf("\n%06lx : ", count&~0x0fl);
        printf("%02X", cc&0xff);
        count++;
    }
}
