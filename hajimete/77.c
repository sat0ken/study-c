main()
{
    int week;
    char *Weekname(int);

    for (week=1; week < 8; week++) {
        printf("(%d)    %s\n", week, Weekname(week));
    }
}

char *Weekname(int nn)
{
    static char *name[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };
    nn--;
    return ((nn<0 || nn>6) ? name[0]: name[nn]);
}
