int Fact(int n);

main()
{
    int n;
    for (n = 0; n < 14; n++) {
        printf("%2d! => %d\n", n, Fact(n));
    }
}

int Fact(int x)
{
    if (x == 0) {
        return (1);
    } else {
        return (x*Fact(x-1));
    }
}
