struct psrec {
    short pcode;
    char *pname, *ptel;
};

main()
{
    struct psrec fw;
    fw.pcode = 1023;
    fw.pname = "Yamamoto";
    fw.ptel = "03-3542-1278";

    printf(" %04d [%-19s] TEL %s\n", fw.pcode, fw.pname, fw.ptel);
}
