main()
{
    int a, b;

    a = 0;
    b = 1;

    do {
        a += b;
        printf("a, b --> %2d, %2d\n",a ,b);
        b++;
    } while(b < 11);
    printf("... a, b --> %d, %d\n", a, b);
}
