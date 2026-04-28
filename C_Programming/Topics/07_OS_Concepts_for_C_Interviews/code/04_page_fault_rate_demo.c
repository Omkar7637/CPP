#include <stdio.h>

int main(void)
{
    int page_faults = 3;
    int accesses = 20;
    printf("fault rate = %.2f%%\n", 100.0 * page_faults / accesses);
    return 0;
}