main()
{
    int w = 1, a = 10;
    printf(".. %d, %d\n", w, a);
    {
        int w = 2;
        printf(".... %d, %d\n", w, a);
        {
            int w = 3;
            printf("...... %d, %d\n", w, a);
        }
        printf(".... %d, %d\n", w, a);
    }
    printf(".. %d, %d\n", w, a);
}
