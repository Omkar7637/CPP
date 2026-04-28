#include <stdio.h>
#include <time.h>

static long long sum_loop(int n)
{
    long long s = 0;
    for (int i = 1; i <= n; ++i)
        s += i;
    return s;
}

int main(void)
{
    clock_t start = clock();
    long long ans = sum_loop(10000000);
    clock_t end = clock();

    double sec = (double)(end - start) / CLOCKS_PER_SEC;
    printf("sum=%lld time=%.4f sec\n", ans, sec);
    return 0;
}