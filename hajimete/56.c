main()
{
    int c;
    while(1) {
        printf("\nstart......\n");
        printf("Switch (B=1/C=2) ?");
        scanf("%d", &c);

        if(c == 2)  continue;
        else if(c == 1) break;

        printf("......end\n");
    }
    printf("Break Exit\n");
}
