typedef unsigned char BYTE;

main()
{
    BYTE ss[50], tt[50];
    BYTE *Sadd(BYTE *, BYTE *);
    BYTE *Scpy(BYTE *, BYTE *);
    int Scmp(BYTE *, BYTE *);
    int Slen(BYTE *);

    while(1) {
        printf("\n S string ? "); scanf("%s", ss);
        printf("\n T string ? "); scanf("%s", tt);

        printf("\n... Slen(s) --> %d\n", Slen(ss));
        printf("... Slen(t) --> %d\n", Slen(tt));
        printf("... Scmp(s, t) --> %d\n", Scmp(ss, tt));
        printf("... Sadd(s, t) --> %s\n", Sadd(ss, tt));
        printf("... Scpy(s, t) --> %s\n", Scpy(ss, tt));
    }
}

BYTE *Sadd(BYTE *s, BYTE *t)
{
    unsigned char *pp;
    pp = s;
    while(*s++);
    for(--s; *s++=*t++;);
    return pp;
}

BYTE *Scpy(BYTE *s, BYTE *t)
{
    unsigned char *pp;
    for(pp = s; *s = *t; s++, t++);
    return pp;
}

int Scmp(BYTE *s, BYTE *t)
{
    unsigned char *sp, *tp;
    for(;*s==*t; s++, t++) if(!*s) return 0;
    for(sp = s, tp = t; *sp && *tp; sp++, tp++);
    if(*sp || *tp) {
        if(*tp) s = sp;
        else t = tp;
    }
    if(*s < *t) return -1;
    return 1;
}

int Slen(BYTE *s)
{
    int len = 0;
    while(*s++) len++;
    return len;
}
