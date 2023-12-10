#include <stdio.h>

int main(int argc, char** argv) {
    FILE *file;
    int c;
    file = fopen("./sample.txt", "r");
    if (file == NULL) {
        printf("ファイルが開けません\n");
        return 1;
    }
    while((c = fgetc(file)) != EOF) {
        printf("%c", (char )c);
    }
    fclose(file);
    return 0;
}