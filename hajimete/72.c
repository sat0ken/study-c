main()
{
    int week, Printw(char *);
    char weekname[7][10] = {
        {'S', 'u', 'n', 'd', 'a', 'y', '\0'},
        {'M', 'o', 'n', 'd', 'a', 'y', '\0'},
        {'T', 'u', 'e', 's', 'd', 'a', 'y', '\0'},
        {'W', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y', '\0'},
        {'T', 'h', 'u', 'r', 's', 'd', 'a', 'y', '\0'},
        {'F', 'r', 'i', 'd', 'a', 'y', '\0'},
        {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y', '\0'}
    };

    for (week = 0; week < 7; week++) {
        Printw(weekname[week]);
    }
}

int Printw(char *name)
{
    printf("%s\n", name);
    return 0;
}
