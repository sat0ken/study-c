main()
{
    long a = 123456789l,
         b = -123456789l;

    printf("%%ld    |%ld|\n", a);
    printf("%%12ld  |%12ld|\n", a);
    printf("%%-12ld |%-12ld|\n", a);
    printf("%%012ld |%012ld|\n", a);
    printf("%%12ld  |%12ld|\n", b);
}
