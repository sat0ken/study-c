#include <stdio.h>

int main(int argc, char** argv) {
    FILE *file;
    int i;
    char data[] = {0x10, 0x1a, 0x1e, 0x1f};
    char rdata[4];

    file = fopen("./test.bin", "wb");
    if (file == NULL) {
        printf("ファイルが開けません\n");
        return 1;
    }
    fwrite(data, sizeof (char ), sizeof (data), file);
    fclose(file);

    file = fopen("./test.bin", "rb");
    if (file == NULL) {
        printf("ファイルが開けません\n");
        return 1;
    }
    fread(rdata, sizeof (char ), sizeof (rdata), file);
    fclose(file);
    for (i = 0; i < sizeof (rdata); i++) {
        printf("%x ", rdata[i]);
    }
    printf("\n");
    return 0;
}