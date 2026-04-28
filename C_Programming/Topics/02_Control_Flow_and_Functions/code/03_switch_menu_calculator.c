#include <stdio.h>

int main(void)
{
    int choice;
    double a, b;

    printf("Menu:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid choice input.\n");
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2)
    {
        printf("Invalid numeric input.\n");
        return 1;
    }

    switch (choice)
    {
    case 1:
        printf("Result: %.2lf\n", a + b);
        break;
    case 2:
        printf("Result: %.2lf\n", a - b);
        break;
    case 3:
        printf("Result: %.2lf\n", a * b);
        break;
    case 4:
        if (b == 0.0)
            printf("Division by zero is not allowed.\n");
        else
            printf("Result: %.2lf\n", a / b);
        break;
    default:
        printf("Invalid menu option.\n");
        break;
    }

    return 0;
}
