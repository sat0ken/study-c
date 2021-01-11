main()
{
    int ia, imult(int, int);
    float fa, fmult(float, float);
    double da, dmult(double, double);
    long la, lmult(long, long);

    ia = imult(3, 5);
    printf("int %d\n", ia);
    fa = fmult(3.0, 5.0);
    printf("float %f\n", fa);
    da = dmult(3.0, 5.0);
    printf("double %f\n", da);
    la = lmult(3l, 5l);
    printf("long %ld\n", la);
}

int imult(int x, int y)
{
    return (x*y);
}

float fmult(float x, float y)
{
    return (x*y);
}

double dmult(double x, double y)
{
    return (x*y);
}
long lmult(long x, long y)
{
    return (x*y);
}
