main(int argc, char *argv[])
{
    int i;
    printf("argc: %d\n", argc);
    for(i=1; i < argc; i++){
        printf("argv %d -> %08X ", i, argv[i]);
        printf("%s\n", argv[i]);
    }
}
