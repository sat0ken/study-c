main()
{
    double a = 12.345,
           b = -12.345;

    printf("%%f         |%f|\n", a);
    printf("%%15.5f     |%15.5f|\n", a);
    printf("%%-15.5f    |%-15.5f|\n", a);
    printf("%%015.5f    |%015.5f|\n", a);
    printf("%%15.5f     |%15.5f|\n", b);
}
