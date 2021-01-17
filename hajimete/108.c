main()
{
    static char mstr[] = "AMZaklz059 ?%";
    char xstr[20];
    int i;
    void Prints(char []);

    printf("Data -> "); Prints(mstr);
    printf("\n");

    for (i=0; mstr[i] != 0; i++) xstr[i] = tolower(mstr[i]);
    xstr[i] = 0;
    printf("tolower ");
    Prints(xstr);

    for (i=0; mstr[i] != 0; i++) xstr[i] = toupper(mstr[i]);
    xstr[i] = 0;
    printf("toupper ");
    Prints(xstr);
}

void Prints(char str[])
{
    int i;
    for (i=0; str[i] != 0; i++) printf("[%c]   ", str[i]);
    printf("\n");
}
