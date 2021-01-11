static int matx[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
};

main()
{
    int i, j, ytot, ttot[3], total = 0;

    for (j = 0; j < 3; j++) {
        ttot[j] = 0;
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            ytot = 0;
            ytot += matx[i][j];
            ttot[j] += matx[i][j];
            total += matx[i][j];
            printf("%3d ", matx[i][j]);
        }
        printf("    %3d\n", ytot);
    }
    printf("\n");
    for (j = 0; j < 3; j++) {
        printf("%3d ", ttot[j]);
    }
    printf("    %3d\n", total);

}

