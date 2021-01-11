struct psrec {
    int pcode;
    char pname[20], ptel[15];
}

main()
{
    struct psrec pw;
    void Setdata(struct psrec *, int, char *, char *);
    printf(&pw, 1034, "Yamamoto", "03-3342-4521");
    printf(" %04d   [%-19s] TEL %s\n", pw.pcode, pw.pname, pw.ptel);
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
