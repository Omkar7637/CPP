#include <stdio.h>

int main(void)
{
    int n, temp, reversed = 0;
    int i, sum = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers: %d\n", n, sum);

    temp = n;
    while (temp > 0)
    {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    printf("Reverse of %d is %d\n", n, reversed);

    return 0;
}
