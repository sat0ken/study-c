main()
{
    int i;
    char    ca = 0x01, cb=0x81;
    short   sa = 0x7ff, sb = 0x8000;
    int     ia = 0x7fffffff, ib = 0x80000000;
    unsigned ua = 0x00000000, ub = 0xffffffff;
    long    la = -2147483648, lb = 2147483647;
    float   fa = 1.2345678901, fb = 1.2e+35, fc = 1.2e-35;
    double  da = 1.23456789012345678, db = 1e+305, dc = 1e-305;

    if (ca < cb) {
        printf("ca < cb\n");
    } else {
        printf("! (ca < cb)\n");
    }
    printf("short   sa = 0x7ff, sb = 0x8000 --> %6d, %6d\n", sa, sb);
    printf("short   sa+1, sb-1 --> %6d, %6d\n", sa+1, sb-1);
    printf("int     ia = 0x7fffffff, ib = 0x80000000 --> %11d, %11d\n", ia, ib);
    printf("int     ia+1, ib-1 --> %11d, %11d\n", ia+1, ib-1);
    printf("unsigned ua = 0x00000000, ub = 0xffffffff --> %11u, %11u\n", ua, ub);
    printf("unsigned ua+1, ub-1 --> %11u, %11u\n", ua+1, ua-1);
    printf("\nlong  la, lb --> %11d, %11d\n", la, lb);
    printf("long  la-1, lb+1 --> %11d, %11d\n\n", la-1l, lb+1l);

    for(i=0; i < 5; i++) {
        printf("float   %18.10G, %15G, %15G\n", fa, fb, fc);
        fb  *= 10.0;
        fc /= 10.0;
    }
    for(i=0; i < 6; i++) {
        printf("double  %18.16G, %15G, %15G\n", da, db, dc);
        db *= 10.0;
        dc /= 10.0;
    }
}
