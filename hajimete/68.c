static int matx[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
};

int MatDisp(int *, int);

main()
{
    MatDisp(&matx[0][0], 12);
}

int MatDisp(int *mat, int i)
{
    while (i--) printf("%4d", *mat++);
    printf("\n");
    return 0;
}
