main()
{
    char cc;
    for(cc=0x20; cc<0x7f; cc++){
        if((cc&0x0f) == 0) putchar('\n');
        putchar(cc);
    }
}
