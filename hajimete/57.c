static char atbl[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

main()
{
    char str[10];
    int data = 1, char_to_int(char *);

    while(data) {
        printf("\nInt Data ? ");
        scanf("%s", str);

        data = char_to_int(str);
        printf("... %d\n", data);
    }

}

int char_to_int(char *s)
{
    int w, t = 0;

    while(*s) {
        for(w = 0; w < 10; w++)
            if(atbl[w] == *s) goto okok;
        goto error;
        okok:
            t = t*10+w;
            s++;
    }
    return t;

error:
    return -1;
}
