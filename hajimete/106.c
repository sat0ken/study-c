main()
{
    static char astr[] = "ABCD",
                bstr[] = "1234",
                cstr[] = "AB",
                dstr[] = "ABCD";

    void list_cmp(char *, char *);

    list_cmp(astr, bstr);
    list_cmp(bstr, astr);
    list_cmp(astr, cstr);
    list_cmp(astr, dstr);
    list_cmp(bstr, cstr);
}

void list_cmp(char *xstr, char *ystr)
{
    printf("strcmp %-7s : %-7s --> %2d\n", xstr, ystr, strcmp(xstr, ystr));
}
