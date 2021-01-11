int sio1, sio2;

void add();

main()
{
    int a = 15, b = 25;
    sio1 = a;
    sio2 = b;
    add();
    printf("add (%d, %d) --> %d\n", a, b, sio1);
}

void add()
{
    sio1 = sio1 + sio2;
}
