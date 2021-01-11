main()
{
    char str[20];
    int char_to_int(char *), data = 1;

    while(data) {
        printf("\nInt Data ?");
        scanf("%s", str);

        data = char_to_int(str);
        printf("...%d\n", data);
    }
}

int char_to_int(char *s)
{
    int w, t = 0;

    while(*s) {
        if(*s == '1') w = 1;
        else if(*s == '2') w = 2;
        else if(*s == '3') w = 3;
        else if(*s == '4') w = 4;
        else if(*s == '5') w = 5;
        else if(*s == '6') w = 6;
        else if(*s == '7') w = 7;
        else if(*s == '8') w = 8;
        else if(*s == '9') w = 9;
        else w = 0;
        t = t*10+w;
        s++;
    }
    return t;
}
