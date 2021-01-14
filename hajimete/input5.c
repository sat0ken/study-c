main()
{
    int yy, mm, dd;
    char name[20];

    while(1) {
        printf("\n Input (yymmdd name) ? ");
        scanf("%2d %2d %2d %s", &yy, &mm, &dd, name);
        if (yy == 0) break;
        printf("\nyy --> %3d", yy);
        printf("\nmm --> %3d", mm);
        printf("\ndd --> %3d", dd);
        printf("\nname -> %s\n", name);
    }
}
