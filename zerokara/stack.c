#include <stdio.h>

#define STACK_SIZE 5

int stack[STACK_SIZE];
int head_index = -1;

void push(int);
int pop();
void printout();

int main(void) {
    push(5);
    printout();
    push(9);
    printout();
    push(3);
    printout();

    printf("pop %d, remain is ", pop());
    printout();
    printf("pop %d, remain is ", pop());
    printout();
}

void push(int value) {
    head_index++;
    stack[head_index] = value;
}

int pop() {
    int value = stack[head_index];
    head_index--;
    return value;
}

void printout() {
    for (int i = 0; i <= head_index; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}