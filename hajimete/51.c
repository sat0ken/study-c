main()
{
    char str[80], ctbl[32];
    int i, n;
    void Ccheck(char *, char [], int *);

    while(1){
        printf("\nString ?");
        scanf("%s", str);
        n = 0;
        Ccheck(str, ctbl, &n);
        for(i = 0; i < n; i++){
            printf("[%c] ", ctbl[i]);
        }
        printf("\n");
    }
}

void Ccheck(char *s, char t[], int *n)
{
    int i;

    while(*s){
        for(i = 0; i < *n; i++){
            if(*s == t[i]){
                break;
            }
        }
        if(i >= *n){
            t[i] = *s;
            (*n)++;
        }
        s++;
    }
}
