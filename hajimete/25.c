main()
{
    char    moji, cstr[10];
    int     i, count, k_table[5];
    float   ff, yy, f_table[5];
    double  dd, xx;

    long    ldata, nn;
    short   sdata, mm;
    unsigned udata, kk;

    moji = 'A';
    cstr[0] = 'M';
    cstr[5] = 0x41;
    i = 32767;
    k_table[2] = -32768;

    ff = 123.45;
    f_table[4] = 0.789;
    dd = 123.456789;

    ldata = 123456789l;
    sdata = -32768;
    udata = 65535;

    printf("char --> %c\n", moji);
    printf("int --> %d\n", i);
    printf("float --> %f\n", ff);
    printf("double --> %f\n", dd);
    printf("long --> %ld\n", ldata);
    printf("short --> %d\n", sdata);
    printf("unsigned --> %04x\n", udata);
}
