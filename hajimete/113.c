#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define RSIZE 20

main()
{
    int fd, n = 0;
    char buff[RSIZE+1];

    if ((fd=open("data30", O_RDONLY)) < 0) exit(0);
    while (1) {
        if (read(fd, buff, RSIZE) == 0) break;
        buff[RSIZE] = '\0';
        printf("%2d : %s", n++, buff);
    }
    close(fd);
}
