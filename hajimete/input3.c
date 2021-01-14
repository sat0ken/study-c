main()
{
    char name[20];

    while(1) {
        printf("\n Name ? ");
        scanf("%s", name);
        if (name[0] == 'e') break;
        printf(" \nName --> %s\n", name);
    }
}
