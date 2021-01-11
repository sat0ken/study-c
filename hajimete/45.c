main()
{
    int a, b, int_max(int, int);

    while(1) {
        printf("\ndata in a,b ? \n");
        scanf("%d, %d", &a, &b);
        printf("Max data --> %d\n", int_max(a, b));
    }

}

int int_max(int x, int y)
{
    return (x<y ? y : x);
}
