main()
{
    int data[10], i;
    for(i=0; i<10; i++) data[i] = i*10;

    for(i=9; i>=0; i--) printf("data[%d] --> %d\n", i, data[i]);
}
