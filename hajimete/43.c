main()
{
    int arr[] = {0, 1, 2, 3, 4};
    Sigma(arr);
}

int Sigma(int *tbl[])
{
    int t = 0, i = 20;

    while(t--) t = t + *tbl++;
    return t;
}
