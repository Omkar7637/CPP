#include <stdio.h>

int divide(int a, int b)
{
    return a / b;
}

int main(void)
{
    int a = 10;
    int b = 0;
    printf("Result: %d\n", divide(a, b));
    return 0;
}