main()
{
    char astr[6] = {'A', 'B', 'C', 'D', 'E', '\0'},
         bstr[] = "ABCDE",
         cstr[8] = "ABCDE";

    int i;
    char ca, cb;
    ca = astr[2];
    cb = bstr[2];

    printf("astr[2] -> %c   bsrt[2] -> %c\n\n", ca, cb);

    printf("astr : %s\n", astr);
    printf("bstr : %s\n", bstr);
    printf("cstr : %s\n", cstr);
}
