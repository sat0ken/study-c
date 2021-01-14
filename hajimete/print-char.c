main()
{
    static char str[] = "ABCDEFG",
                moji = 'Z';

    printf("%%c     |%c|\n", moji);
    printf("%%s     |%s|\n", str);
    printf("%%10s   |%10s|\n", str);
    printf("%%-10s  |%-10s|\n", str);
    printf("%%20s   |%20s|\n", str);
    printf("%%-20s  |%-20s|\n", str);
}
