main()
{
    int a = 1024,
        b = -123;

    printf("%%d     |%d|\n", a);
    printf("%%8d    |%8d|\n", a);
    printf("%%-8d   |%-8d|\n", a);
    printf("%%08d   |%08d|\n", a);
    printf("%%8d    |%8d|\n", b);
}
