main()
{
    int a = -1;
    void HexPrint(int);

    HexPrint(a);
    a = a<<4;
    HexPrint(a);
    a = a>>4;
    HexPrint(a);
}

void HexPrint(int x)
{
    printf("\n(%10d) --> %08X", x, x);
}
