main()
{
    static char astr[] = "ABCD";
    char xstr[20];

    strcpy(xstr, astr);
    printf("strcpy  %s\n", xstr);

    strcat(xstr, ":XYZ");
    printf("strcat  %s\n", xstr);

    printf("strlen  %-10s --> %d\n", astr, strlen(astr));
    printf("strlen  %-10s --> %d\n", xstr, strlen(xstr));
}
