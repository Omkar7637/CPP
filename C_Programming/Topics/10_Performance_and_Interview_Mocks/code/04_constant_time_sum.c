#include <stdio.h>

int main(void)
{
    int n = 10;
    long long sum = (long long)n * (n + 1) / 2;
    printf("formula sum=%lld\n", sum);
    return 0;
}