struct psrec {
    int pcode;
    char *pname, *ptel;
};

struct psrec ftbl[5] = {
    1023, "Yamamoto", "03-3421-1245",
    1085, "Morita",  "0421-22-1234",
    1520, "Okamoto", "03-3214-7841",
    2012, "Nakasone", "03-3214-8451",
    3018, "Ishibashi", "0426-11-2145"
};

main()
{
    int i;
    for(i=0; i < 5; i++) {
        printf("%04d    [%-19s] TEL %s\n", ftbl[i].pcode, ftbl[i].pname, ftbl[i].ptel);
    }
}
