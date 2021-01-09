static int matx[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
};

main()
{
    int i, j;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++) {
            printf("%4d", matx[i][j]);
        }
        printf("\n");
    }
}
