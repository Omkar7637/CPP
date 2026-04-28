#include <stdio.h>

int main(void)
{
    int shared = 0;
    for (int i = 0; i < 100000; ++i) shared++;
    for (int i = 0; i < 100000; ++i) shared++;
    printf("single-thread deterministic result=%d\n", shared);
    return 0;
}