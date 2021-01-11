struct kata {
    char cstr[20];
    int code;
    float rithu;
};

main()
{
    struct kata table[10];

    printf("int size --> %d\n", sizeof(int));
    printf("float size --> %d\n", sizeof(float));
    printf("double size --> %d\n", sizeof(double));
    printf("kata size --> %d\n", sizeof(struct kata));
    printf("table size --> %d\n", sizeof(table));
}
