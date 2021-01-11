main(int argc, char *argv[])
{
    int i;
    printf("argc: %d\n", argc);
    while(--argc){
        i++;
        printf("argv %d -> %08X ", i, *++argv);
        printf("%c %s\n", **argv, *argv);
    }
}
