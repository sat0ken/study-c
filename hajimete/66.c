static int nmax;
void RecFunc(int n);
void Tline(int n);

main()
{
    while(1) {
        printf("\nN ? "); scanf("%d", &nmax);
        if(nmax < 1) break;
        RecFunc(nmax);
    }
}

void RecFunc(int nn)
{
    if (nn != 0) {
        Tline(nn);
        RecFunc(nn-1);
    }
    Tline(nn);
}

void Tline(int x)
{
    int y, i, xx;
    xx = nmax-x;
    for (i = 0; i < 3; i++) {
        y = xx*3;
        while(y--) printf(" ");
        printf("%d\n", x);
    }
}
