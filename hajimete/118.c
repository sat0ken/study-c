#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct kata {
    int code;
    char name[20];
    int yy, mm, dd;
}

main()
{
    struct kata a;
    int fd, flg;

    if ((fd=open("data36", O_RDONLY)) < 0) {
        printf("file open error !!");
        exit(-1);
    }
    printf("[kata size = %d]\n", sizeof(struct kata));
    while (1) {
        flg = read(fd, &a, sizeof(struct kata));
        if (flg < 0) {
            printf("read error !!");
            break;
        }
        if (flg < sizeof(struct kata)) break;
        printf("\n code : %d\n", a.code);
        printf("name : %s\n", a.name);
        printf("birth_day : %d/%d/%d\n", a.yy, a.mm, a.dd);
    }
    close(fd);
}
