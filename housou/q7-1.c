#include <stdio.h>
#include <stdlib.h>
#include <search.h>

#define ARRAY_SIZE 10
#define NEW_ITEMS  1

int compare(int*, int*);
void array_print(int[], int);

int main(void) {
    int key;
    int *r;
    size_t elements, elements_t;
    int array[ARRAY_SIZE + NEW_ITEMS] = {
            12, 19, 70, 44, 16, 38, 10, 30, 28, 98
    };
    key = 17;

    elements_t = elements = ARRAY_SIZE;
    array_print(array, ARRAY_SIZE);
    printf("elements: %zu\n", elements);
    r = (int *) lsearch (&key, &array, &elements, sizeof (int),
                         (int (*)(const void *, const void *)) compare);

    if (r == NULL) {
        printf("ERROR: lsearch()");
        exit(-1);
    }
    printf("elements: %zu\n", elements);

    if (elements == elements_t) {
        printf ("Found : %d\n", key);
    }
    else {
        printf("Not found %d\n", key);
        printf("The item added at the end of the array.\n");
        array_print(array, ARRAY_SIZE + NEW_ITEMS);
    }

    return 0;
}

int compare(int *x, int *y) {
    return (*x - *y);
}

void array_print(int array[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}