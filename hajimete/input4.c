main()
{
    float fdata;
    double ddata;

    while(1) {
        printf("\n (fdata ddata) ? ");
        scanf("%f %lf", &fdata, &ddata);
        if (fdata <= 0.0) break;
        printf(" \nfdata --> %10.5E\n", fdata);
        printf(" \nddata --> %10.5E\n", ddata);
    }
}
