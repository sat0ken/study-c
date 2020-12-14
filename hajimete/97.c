int table[5] = {0, 1, 2, 3, 4},
    tdata[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

char mojiupr[] = "C PROGRAM STRING !!",
     mojilow[25] = "c program string !!";

main()
{
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("%d  ", table[i]);
    }
    printf("\n");
    i = 0;
    while(1) {
        printf("%d  ", tdata[i]);
        if (tdata[i] == 9) {
            break;
        }
        i++;
    }
    printf("\n");
    printf("%s\n", mojiupr);
    printf("%s\n", mojilow);
}
