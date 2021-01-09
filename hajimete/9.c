static char astr[] = "ABCDEFG";

main()
{
    char bstr[10], cstr[10];
    void scpy1(char[], char[]), scpy2(char *, char *);

    scpy1(astr, bstr);
    scpy2(astr, cstr);

    printf("%s  %s  %s\n", astr, bstr, cstr);
}

void scpy1(char from[], char to[])
{
    int i = 0;
    while(from[i] != 0x00) {
        to[i] = from[i];
        i++;
    }
    to[i] = 0x00;
}

void scpy2(char *from, char *to)
{
    while(*from != 0x00) {
        *to = *from;
        from++;
        to++;
    }
    *to = 0x00;
}
