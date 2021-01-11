union udata {
    short i_data;
    float f_data;
    double d_data;
    char *str;
} uarea;

main()
{
    printf("union size -> %d\n", sizeof(union udata));
}
