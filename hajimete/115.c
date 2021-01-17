#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define RSIZE 20

main()
{
    int fd, rec_no;
    char buff[RSIZE+1];
    long ll, ret;

    if((fd=open("data30", O_RDONLY)) < 0) exit(0);
    while (1) {
        printf("Record No. ? \n");
        scanf("%d", &rec_no);
        if (rec_no < 0) break;
        ll = (long)rec_no * (long)RSIZE;
        if ((ret=lseek(fd, ll, 0)) == ll) {
            read(fd, buff, RSIZE);
            buff[RSIZE] = '\0';
            printf("RNO. %2d    [%s]\n", rec_no, buff);
        }
    }
    close(fd);
}
