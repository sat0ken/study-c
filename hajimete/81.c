int col, line = 80;
static char str[6];

main()
{
    int i, j, add(int), disp();
    char cc = 'AA';

    for(i = 0; i < 5; i++) {
        str[i] = cc++;
    }
    cc = 0x00;
    add(10);
    add(10);
    add(10);
    printf("\nmain.str --> [%s]\n", str);
    disp();
}

int add(int dd)
{
    static int jj = 0;
    int kk = 0;

    jj += dd;
    kk += dd;
    printf("add(%2d)    static --> %3d  auto --> %3d\n", dd, jj, kk);
    return 0;
}

int disp()
{
    printf("\ndisp.str --> [%s]\n", str);
    return 0;
}













