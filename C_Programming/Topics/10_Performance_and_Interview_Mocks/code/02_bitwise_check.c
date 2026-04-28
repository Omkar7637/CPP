#include <stdio.h>

int main(void)
{
    int x = 29;
    int is_power_of_two = (x > 0) && ((x & (x - 1)) == 0);
    printf("%d is power of 2? %s\n", x, is_power_of_two ? "yes" : "no");
    return 0;
}