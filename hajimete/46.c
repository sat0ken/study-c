main()
{
    int a, b;

    while(1) {
        printf("\ndata in a,b ?\n");
        scanf("%d, %d", &a, &b);

        if(a < b) {
            printf("... a < b!\n");
        } else if(a == b) {
            printf("... a == b!\n");
        } else {
            printf("... a > b!\n");
        }
    }
}
