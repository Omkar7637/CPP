#include <stdio.h>

#define CAPACITY 5

int main(void)
{
    int q[CAPACITY];
    int front = 0, rear = 0, size = 0;

    for (int x = 1; x <= 3; ++x)
    {
        q[rear] = x;
        rear = (rear + 1) % CAPACITY;
        ++size;
    }

    while (size > 0)
    {
        printf("%d ", q[front]);
        front = (front + 1) % CAPACITY;
        --size;
    }
    printf("\n");
    return 0;
}