#include <stdio.h>

int main(void)
{
    for (int pid = 1; pid <= 3; ++pid)
        printf("Process %d: new -> ready -> running -> terminated\n", pid);
    return 0;
}