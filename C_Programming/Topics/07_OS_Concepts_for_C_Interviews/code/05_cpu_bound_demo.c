#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start = clock();
    volatile long long x = 0;
    for (int i = 0; i < 5000000; ++i) x += i;
    clock_t end = clock();

    printf("elapsed=%.4f sec\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}