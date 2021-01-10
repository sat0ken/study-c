main()
{
    int a, b;
    printf("Compare a,b ?");
    scanf("%d, %d", &a, &b);

    printf("\na < b     ->> %d\n", a < b);
    printf("a > b     ->> %d\n", a > b);
    printf("a <= b     ->> %d\n", a <= b);
    printf("a >= b     ->> %d\n", a >= b);
    printf("a == b     ->> %d\n", a == b);
    printf("a != b     ->> %d\n", a != b);

    printf("\n a && b   ->> %d\n", a &&b );
    printf("\na || b    ->> %d\n", a || b);
    printf("!a  ->> %d\n", !a);
}
