int data = 128, func1(), func2();

main()
{
    int w = 1;
    static int x = 10;

    printf("..%d, %d, %d\n", w, x, data);
    func1();
    printf("..%d, %d, %d\n", w, x, data);
}

int func1()
{
    int w = 2;
    static int x = 20;
    printf("....%d, %d, %d\n", w, x, data);
    func2();
    printf("....%d, %d, %d\n", w, x, data);
    return 0;
}

int func2()
{
    int w = 3;
    static int x = 30;
    printf("......%d, %d, %d\n", w, x, data);
    return 0;
}
