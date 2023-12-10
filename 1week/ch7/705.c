#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv) {
    FILE *file;
    int i, size;
    char *rdata;

    file = fopen("./test.bin", "rb");
    if (file == NULL) {
        printf("ファイルが開けません\n");
        return 1;
    }
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    printf("file size is %d\n", size);
    rdata = (char*) malloc(sizeof (char) * size);
    fseek(file, 0, SEEK_SET);
    fread(rdata, sizeof (char), size, file);
    fclose(file);
    for (i = 0; i < size; i++) {
        printf("%x ", rdata[i]);
    }
    printf("\n");
    free(rdata);
    return 0;
}