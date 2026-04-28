#include <stdio.h>

int main(void)
{
    int done = 0;
    int ticks = 0;

    while (!done)
    {
        ++ticks;
        if (ticks == 5)
            done = 1;
    }

    printf("Loop finished in %d ticks\n", ticks);
    return 0;
}