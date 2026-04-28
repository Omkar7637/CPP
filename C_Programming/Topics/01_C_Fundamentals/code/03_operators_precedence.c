#include <stdio.h>

int main(void)
{
    int a = 10, b = 2, c = 3;
    int result1 = a + b * c;
    int result2 = (a + b) * c;

    printf("a + b * c     = %d\n", result1);
    printf("(a + b) * c   = %d\n", result2);

    int x = 7;
    printf("Integer division 7 / 2 = %d\n", x / 2);
    printf("Floating division 7/2  = %.2f\n", (double)x / 2);

    return 0;
}
