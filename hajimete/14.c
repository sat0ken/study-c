main()
{
    int n, Sleng(char *);
    char astr[50];

    while(1) {
        scanf("%s", astr);
        n = Sleng(astr);
        printf("length ---> %d\n", n);
    }
}

int Sleng(char *s)
{
    int n = 0;
    while(*s++) {
        n++;
    }
    return (n);
}
