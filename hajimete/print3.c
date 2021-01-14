main()
{
    int a = 65000,
        b = -123;

    printf("%%u     |%u|\n", a);
    printf("%%10u   |%10u|\n", a);
    printf("%%-10u  |%-10u|\n", a);
    printf("%%010u  |%010u|\n", a);
    printf("%%10u   |%10u|\n", b);
}
