#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char cmd[9][40], buff[80];
    void CmdList(char [][40], int);
    int n, k, ke;
    k = ke = -1;

    for (;;) {
        fputs("CMD >", stdout);
        gets(buff);
        if (!buff[0]) break;
        switch (buff[0]) {
            case '!': n = buff[1]-'0'-'1'; break;
            case '*': CmdList(cmd, ke); continue;
            default: k++;
                     if (k>8) k = 0;
                     if (k>ke) ke = k;
                     strcpy(&cmd[k][0], buff);
                     n = k;
        }
        if (n<0 ||n >ke) continue;
        system(&cmd[n][0]);
    }
    return(0);
}

void CmdList(char cm[][40], int k)
{
    int i;
    for (i=0; i<k; i++)
        printf("%d: %s\n", i+1, &cm[i][0]);
}
