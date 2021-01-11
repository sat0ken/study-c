main()
{
    int n = 3;

    printf("n --> %d\n", n);
    while(n--) {
        int i, n = 5;
        for(i = 0; i < n; i++) {
            printf(".. %d ", i);
        }
        printf("\n");
    }
    printf("n -- > %d\n", n);
}
