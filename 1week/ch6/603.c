#include <stdio.h>

int max_n(int, int);
int min_n(int, int);

int main(int argc, char** argv) {
    int (*cmp)(int, int) = max_n;
    int a = 1, b = 2;
    printf("%dと%dのうち最大のものは%d\n", a, b, max_n(a, b));
    cmp = min_n;
    printf("%dと%dのうち最小のものは%d\n", a, b, min_n(a, b));
    return 0;
}

int max_n(int m, int n) {
    if (m > n) {
        return m;
    }
    return n;
}

int min_n(int m, int n) {
    if (m < n) {
        return m;
    }
    return n;
}