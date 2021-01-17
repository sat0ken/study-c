#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

main()
{
    int fd, i, iend, iw;
    char buff[16], data[128];

    if ((fd=open("data26", O_WRONLY)) < 0)
        if ((fd=creat("data26", S_IWRITE)) < 0) exit(0);
    printf("file id : %d\ndata in ?", fd);
    strcpy(buff, "\nfd: 0");
    scanf("%s", data);
    iend = strlen(data)/10;

    for (i=0; i<iend; i++) {
        iw = i*10;
        strncpy(buff+6, &data[iw], 10);
        buff[4] = '1';
        write(1, buff, 16);
        buff[4] = '2';
        write(2, buff, 16);
        buff[4] = '0' + fd;
        write(fd, buff, 16);
    }
    close(fd);
}
