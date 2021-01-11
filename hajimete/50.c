main()
{
    int i, j;
    long l;

    printf("HEX");
    for(i = 0; i < 16; i++){
        printf("%4X", i);
    }
    printf("    00  000\n\n");

    for(i = 0; i < 16; i++){
        l = (long)i;
        printf(" %1X ", i);
        for(j = 0; j < 16; j++){
            printf("%4d", j+(i<<4));
        }
        printf("    %4ld %5ld\n", l<<8, l<<12);
    }
}
