main()
{
    void Func02(char *, char *, char *), Func03(char *, char *, char *);
    char sta[10], stb[10], stc[20];

    printf("--- String copy function. \n");
    Func02("abc", "xyz", sta);
    printf("    Func02 abc + xyz --> [%s]\n", sta);

    Func03("123", "789", stb);
    printf("    Func03 123 + 789 --> [%s]\n", stb);

    Func02(sta, stb, stc);
    printf("    Func02 ------------> [%s]\n", stc);
    printf("--- end of program.\n");

}

void Func02(char *as, char *bs, char *cs)
{
    while(*as) *cs++ = *as++;
    while(*as) *cs++ = *bs++;

    *cs= 0x00;
}

void Func03(char *as, char *bs, char *cs)
{
    while(*as) *cs++ = *as++;
    do *cs++ = *bs;
        while(*bs++);
}
