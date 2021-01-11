static int data[10] = {
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19
};

main()
{
    int w1, w2, w3, Dataset(int *);
    w1 = Dataset(data);
    w2 = Dataset(&data[0]);
    w3 = Dataset(&data[5]);

    printf(" data -> %d\n", w1);
    printf(" &data[0] -> %d\n", w2);
    printf(" &data[5] -> %d\n", w3);
}

int Dataset(int *x)
{
    return (*x);
}
