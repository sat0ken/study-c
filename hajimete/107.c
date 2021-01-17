main()
{
    static char mstr[] = "AZaz09 #?+";
    int i;

    printf("        ");
    for (i=0; mstr[i] != 0; i++) printf("[%c]  ", mstr[i]);
    printf("\n");

    printf("isalpha ");
    for(i=0; mstr[i] != 0; i++) 
        printf("%2d ", isalpha(mstr[i]));
    printf("\n");

    printf("isdigit ");
    for(i=0; mstr[i] != 0; i++) 
        printf("%2d ", isdigit(mstr[i]));
    printf("\n");

    printf("islower ");
    for(i=0; mstr[i] != 0; i++) 
        printf("%2d ", islower(mstr[i]));
    printf("\n");

    printf("isupper ");
    for(i=0; mstr[i] != 0; i++) 
        printf("%2d ", isupper(mstr[i]));
    printf("\n");

    printf("isspace ");
    for(i=0; mstr[i] != 0; i++) 
        printf("%2d ", isspace(mstr[i]));
    printf("\n");
}
