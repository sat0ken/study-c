main()
{
    int a = 1024,
        b = -123;

    printf("%%X     |%X|\n", a);
    printf("%%10X   |%10X|\n", a);
    printf("%%-10X  |%-10X|\n", a);
    printf("%%010X  |%010X|\n", a);
    printf("%%10X   |%10X|\n", b);
}
