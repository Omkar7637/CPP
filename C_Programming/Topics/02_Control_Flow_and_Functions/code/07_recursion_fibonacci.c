#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int n, i;
    printf("Enter number of terms (0-40): ");

    if (scanf("%d", &n) != 1 || n < 0 || n > 40)
    {
        printf("Invalid input range.\n");
        return 1;
    }

    printf("Fibonacci series: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
