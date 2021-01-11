#define PrintMac(x) printf("%s\n", x)

void PrintFnc(char *);

main()
{
    PrintMac("C Program !! in #define");
    PrintFnc("C Program !! in function");
}

void PrintFnc(char *str)
{
    printf("%s\n", str);
}
