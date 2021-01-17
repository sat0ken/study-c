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
    int fd;

    if ((fd=open("data36", O_CREAT|O_WRONLY|S_IWRITE)) < 0) {
        printf("open error !!");
        exit(-1);
    }
    while (1) {
        printf("\n code ? ");
        scanf("%d", &a.code);
        if (a.code > 9999 || a.code < 1) break;
        printf(" name ? ");
        scanf("%s", a.name);
        printf(" birth day (yy/mm/dd) ? ");
        scanf("%d/%d/%d", &a.yy, &a.mm, &a.dd);
        write(fd, &a, sizeof(struct kata));
    }
    close(fd);
}
