main()
{
    int a = 15, b = 25, sio1;
    void add(int *, int *, int *);

    add(&a, &b, &sio1);
    printf("add (%d, %d) --> %d\n", a, b, sio1);
}

void add(int *x, int *y, int *z)
{
    *z = *x+*y;
}
