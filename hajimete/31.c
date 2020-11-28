int clo, line;

main()
{
    int i, j, add(int);
    add(10);
    add(10);
    add(10);
}

int add(int dd)
{
    static int jj = 0;
    int kk = 0;
    jj += dd;
    kk += dd;
    printf("add(%2d) static --> %3d, auto --> %3d\n", dd, jj, kk);
    return 0;
}
