#include <stdio.h>

#define CAP 10

int main(void)
{
    int stack[CAP];
    int top = -1;

    stack[++top] = 11;
    stack[++top] = 22;
    printf("pop=%d\n", stack[top--]);
    printf("pop=%d\n", stack[top--]);
    return 0;
}