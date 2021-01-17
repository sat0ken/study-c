#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define RSIZE 20

main()
{
    int fd;
    char buff[RSIZE+1];

    if ((fd=open("data30", O_WRONLY)) < 0)
        if ((fd=creat("data30", S_IWRITE)) < 0) exit(0);
    while (1) {
        printf("\ntypein ? ");
        scanf("%s", buff);
        if (buff[0] == '*') break;
        if(write(fd, buff, RSIZE) < 0) {
            printf("write error !!\n");
            break;
        }
    }
    close(fd);
}
