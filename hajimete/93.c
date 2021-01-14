#include <stdio.h>

main()
{
    int cc;
    printf("... start fcopy.\n");
    while((cc=fgetc(stdin)) != EOF) fputc(cc, stdout);
    printf("... end of fcopy.\n");
}
