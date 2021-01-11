void Ftest(char *, double *);
void Printx(char *, double *);

main()
{
    char str[5];
    double fdata[10];

    Ftest(str, fdata);
}

void Ftest(char *s, double *f)
{
    Printx(s, f);
    s++;
    f++;
    Printx(s, f);
    s++;
    f++;
    Printx(s, f);
}

void Printx(char *s, double *f)
{
    printf("\nchar -> %08X  double -> %08X\n", s, f);
}
