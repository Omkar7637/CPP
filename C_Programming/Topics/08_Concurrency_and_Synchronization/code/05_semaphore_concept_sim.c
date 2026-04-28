#include <stdio.h>

int main(void)
{
    int waiting = 2;
    int signal = 1;
    if (signal && waiting > 0)
        printf("one waiting worker is released\n");
    return 0;
}