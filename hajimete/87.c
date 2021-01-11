union {
    struct {
        char id, name[21];
    } d1;
    struct {
        char  id, telno[15];
        short code, age;
    } d2;
} p_table[20];

int pp = 0;
void Mdump(char *, int, int);
void Scopy(char *, char *);

main()
{
    char w_name[25], w_telno[15];
    int w_code, w_age, i;

    while(1) {
        printf("\n----- Data input -----");
        printf("\n Code ? "); scanf("%d", &w_code);
        printf("\n Name ? "); scanf("%s", &w_name);
        printf("\n Age ? "); scanf("%d", &w_age);
        printf("\n Tel ? "); scanf("%s", &w_telno);

        if(w_code < 1) break;
        p_table[pp].d1.id = '1';
        Scopy(w_name, p_table[pp].d1.name);
        pp++;
        p_table[pp].d2.id = '2';
        Scopy(w_telno, p_table[pp].d2.telno);
        p_table[pp].d2.code = w_code;
        p_table[pp].d2.age = w_age;
        pp++;
    }
    printf("----- table dump -----\n");
    for(i=0; i < pp; i++) {
        Mdump( (char*)(&p_table[i].d1), sizeof(p_table[0]), i);
    }
}

void Mdump(char *mpnt, int cnt, int i)
{
    printf("(%2d)", i);
    while(cnt--) printf(" %02X", (*mpnt++)&0x00ff);
    printf("\n");
}

void Scopy(char *astr, char *bstr)
{
    while(*astr) *bstr++ = *astr++;
    *bstr = '\0';
}
