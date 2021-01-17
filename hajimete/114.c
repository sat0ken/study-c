#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

main(int argc, char *argv[])
{
    int fd;
    char buff[41];

    if ((fd=open(argv[1], O_RDONLY)) < 0) exit(0);
    while (1) {
        if (read(fd, buff, 40) <= 0) break;
        buff[40] = '\0';
        printf("%s\n", buff);
    }
    close(fd);
}
