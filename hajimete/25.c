main()
{
    int i, total, Sigmal(int);

    for(i=2; i<11; i++) {
        total = Sigmal(i);
        printf(" add (1 to %d) => %d\n", i, total);
    }
}

int Sigmal(int i)
{
    int tt = 0;
    while(i>0) {
        tt = tt+i;
        i--;
    }
    return tt;
}
