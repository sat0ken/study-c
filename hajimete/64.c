main()
{
    int a = 15, b = 25, sio1, add(int, int);
    sio1 = add(a, b);
    printf("add (%d, %d) --> %d\n", a, b, sio1);
}

int add(int x, int y)
{
    return (x+y);
}
