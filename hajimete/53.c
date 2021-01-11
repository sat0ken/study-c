int char_to_int(char *s);

main()
{
    char *str = "1234";
    int t;
    t = char_to_int(str);
    printf("%d\n", t);
}

int char_to_int(char *s)
{
    int w, t = 0;

    while(*s){
        if(*s < '0' || '9' < *s){
            w = 0;
        } else {
            w = *s - '0';
        }
        t = t*10+w;
        s++;
    }
    return t;
}
