char astr[] = "ABC#EFG#HIJ",
     bstr[] = "1234%5678%9";
int Scheck(char [], int);

main()
{
    int a, b;
    int i0 = 0,
        i5 = 5;

    a = Scheck(astr, i0);
    b = Scheck(bstr, i5);
    printf("[%s] %02d -> %d\n", astr, i0, a);
    printf("[%s] %02d -> %d\n", bstr, i5, b);
}

int Scheck(char astr[], int i)
{
    int flg = -1;

    while(astr[i] != 0) {
        if(astr[i] == '#' || astr[i] == '%') {
            flg = i;
            break;
        }
        i++;
    }
    return flg;
}
