#include <stdio.h>

int main(void)
{
    int lock = 0;
    if (!lock)
    {
        lock = 1;
        printf("critical section entered\n");
        lock = 0;
    }
    return 0;
}