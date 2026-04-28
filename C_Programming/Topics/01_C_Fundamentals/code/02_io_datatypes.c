#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Sum        : %d\n", a + b);
    printf("Difference : %d\n", a - b);
    printf("Product    : %d\n", a * b);

    if (b != 0)
    {
        printf("Quotient   : %d\n", a / b);
        printf("Remainder  : %d\n", a % b);
    }
    else
    {
        printf("Quotient   : undefined (division by zero)\n");
        printf("Remainder  : undefined (division by zero)\n");
    }

    return 0;
}
