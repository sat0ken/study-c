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
        switch(*s){
            case '1': w = 1; break;
            case '2': w = 2; break;
            case '3': w = 3; break;
            case '4': w = 4; break;
            case '5': w = 5; break;
            case '6': w = 6; break;
            case '7': w = 7; break;
            case '8': w = 8; break;
            case '9': w = 9; break;
            default: w = 0;
        }
        t = t*10+w;
        s++;
    }
    return t;
}
