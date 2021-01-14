main()
{
    int dec, oct, hex;

    while(1) {
        printf("\nInput (dec, oct, hex) ? ");
        scanf("%d %o %x", &dec, &oct, &hex);
        if (dec == 0) break;
        printf("\ndec --> %5d", dec);
        printf("\notc --> %5d", oct);
        printf("\nhex --> %5d", hex);
    }
}
