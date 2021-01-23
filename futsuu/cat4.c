#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void do_cat(FILE *f, int optarg);

int
main(int argc, char *argv[])
{
    int i, opt, argopt;

    while ((opt = getopt(argc, argv, "nt")) != -1) {
        switch (opt) {
        case 'n':
            argopt = 'n';
            break;
        case 't':
            argopt = 't';
            break;
        case '?':
            fprintf(stderr, "Usage: %s [-t output \\t] [-n output \\n]", argv[0]);
            exit(1);
        }
    }

    if (argc == 1) {
        do_cat(stdin, argopt);
    } else {
        for (i = optind; i < argc; i++) {
            FILE *f;
            f = fopen(argv[i], "r");
            if (!f) {
                perror(argv[i]);
                exit(1);
            }
            do_cat(f, argopt);
            fclose(f);
        }
    }
    exit(0);
}

static void
do_cat(FILE *f, int optarg)
{
    int c;
    while ((c = fgetc(f)) != EOF) {
        switch (c) {
        case '\t':
            if (optarg == 't' && fputs("\\t", stdout) == EOF) exit(1);
            break;
        case '\n':
            if (optarg == 'n' && fputs("$\n", stdout) == EOF) exit(1);
            break;
        default:
            if (putchar(c) < 0) exit(1);
            break;
        }
    }
}

