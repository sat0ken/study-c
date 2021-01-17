#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define RSIZE 20

main()
{
    int fd, cha_no;
    char buff[RSIZE+1];
    long ll, ret;

    if((fd=open("data30", O_RDONLY)) < 0) exit(0);
    while (1) {
        printf("Character No. ? \n");
        scanf("%d", &cha_no);
        if (cha_no < 0) break;
        ll = (long)cha_no;
        if ((ret=lseek(fd, ll, 0)) == ll) {
            read(fd, buff, RSIZE);
            buff[RSIZE] = '\0';
            printf("CNO. %4d    [%s]\n", cha_no, buff);
        }
    }
    close(fd);
}
