#include <stdio.h>

long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    int n;
    printf("Enter a non-negative integer (<=20): ");

    if (scanf("%d", &n) != 1 || n < 0 || n > 20)
    {
        printf("Invalid input range.\n");
        return 1;
    }

    printf("Factorial of %d is %lld\n", n, factorial(n));
    return 0;
}
