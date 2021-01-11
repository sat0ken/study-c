struct man {
    int scode;
    int tail;
    int weight;
};

struct man dtable[10] = {
    101, 177, 72, 102, 177, 66,
    103, 172, 64, 194, 167, 60,
    105, 162, 64, 106, 162, 48,
    107, 157, 50, 108, 155, 48,
    109, 145, 52, 110, 142, 50
};

main()
{
    int i;
    printf("s_code  tail    weight\n");
    for(i=0; i <10; i++) {
        printf("    %03d    %3d %3d\n",
                dtable[i].scode,
                dtable[i].tail,
                dtable[i].weight);
    }
}
