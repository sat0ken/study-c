int Sins(char [], char [], int);

main()
{
    char as[80], bs[80];
    int n, m;

    while(1) {
        printf("\nA String ? "); scanf("%s", as);
        printf("B String ? "); scanf("%s", bs);
        printf("Insert point ? "); scanf("%d", &n);

        Sins(as, bs, n);

        printf("A: [%s]\n", as);
        printf("B: [%s]\n", bs);
    }
}

int Sins(char as[], char bs[], int np)
{
    int nn, ns, na, nb;
    na = nb = 0;

    while(as[na] != 0) na++;
    while(bs[nb] != 0) nb++;

    if(np > na) {
        np = na;
    }
    nn = na - np + 2;
    na++;
    ns = na + nb;

    while(nn--) {
        as[ns] = as[na];
        ns--;
        na--;
    }
    for(nn = 0; nn < nb; nn++){
        as[np++] = bs[nn];
    }
    return 0;
}
