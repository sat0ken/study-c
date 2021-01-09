static char ys[10] = {
    '\n', '\t', '\f', '\\', '\b',
    '\'', '\r', '\0', '\117', '\101'
    },
    str[] = "<STRING>";

main()
{
    int i;
    void Prints(char *);
    char xs = 0x41,
         xt = 'A';
    printf("\nxs --> %c xt --> %c\n\n", xs, xt);
    for (i = 0; i < 10; i++) {
        printf("ys[%d] --> %02X\n", i, ys[i]);
    }
    printf("\n%s\n", str);
    Prints("C Progam");
}

void Prints (char *str)
{
    printf("str ----> %s\n", str);
}
