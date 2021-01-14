#include <stdio.h>

main()
{
    int cc;
    fprintf(stderr, "... start fcopy.\n");
    while((cc=fgetc(stdin)) != EOF) fputc(cc, stdout);
    fprintf(stderr, "... end of fcopy.\n");
}
