main()
{
    int i;

    while(1){
        printf("jump point(1 to 5) ?\n");
        scanf("%d", &i);
        printf("\n");

        if( i <= 0) break;

        switch(i){
            case 1: printf(" -> case 1");
                break;
            case 2: printf(" -> case 2");
            case 3: printf(" -> case 3");
            case 4: printf(" -> case 4");
                break;
            case 5: printf(" -> case 5");
            default:
                printf(" -> default");
        }
        printf(" -> exit\n\n");
    }
}
