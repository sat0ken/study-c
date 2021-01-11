struct psrec {
    int pcode;
    char pname[20], ptel[15];
};

main()
{
    struct psrec ptable[20];
    int code, i, ie = 0;
    void Setdata(struct psrec *, int, char *, char *);
    char name[20], telno[15];

    while(1) {
        printf("\nCode ? "); scanf("%d", &code);
        if(code < 1) break;
        printf("Name ? "); scanf("%s", name);
        printf("TEL.NO ? "); scanf("%s", telno);
        Setdata(&ptable[ie++], code, name, telno);
    }
}

void Setdata(struct psrec *fw, int code, char *name, char *telno)
{
    int i;
    fw->pcode = code;
    i = 0;
    while(*name) fw->pname[i++] = *name++;
    fw->pname[i] = '\0';
    for (i = 0; *telno; i++) {
        fw->ptel[i] = *telno++;
    }
    fw->ptel[i] = 0x00;
}

