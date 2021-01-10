static char astr[] = "ABCDEFGH";

main()
{
    int i, m, n;

    n = 3;
    m = ++n;
    printf("m, n ->> %d, %d\n", m, n);

    n = 3;
    m = n++;

    printf("m, n ->> %d, %d\n", m, n);

    printf("\n");
    for(i = 0; astr[i] != 0; i++) {
        printf("[%2d] --> %c\n", i, astr[i]);
    }
}
