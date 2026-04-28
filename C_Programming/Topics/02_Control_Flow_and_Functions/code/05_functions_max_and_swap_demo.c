#include <stdio.h>

int max_of_two(int a, int b)
{
    return (a > b) ? a : b;
}

/* Demonstrates modifying caller values via pointers. */
void swap_numbers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a, b;
    printf("Enter two integers: ");

    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Maximum is: %d\n", max_of_two(a, b));
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap_numbers(&a, &b);
    printf("After swap : a = %d, b = %d\n", a, b);

    return 0;
}
