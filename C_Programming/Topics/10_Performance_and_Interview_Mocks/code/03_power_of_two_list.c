#include <stdio.h>

int is_power_of_two(unsigned int x)
{
    return x && ((x & (x - 1U)) == 0U);
}

int main(void)
{
    for (unsigned int x = 1; x <= 16; ++x)
        if (is_power_of_two(x)) printf("%u ", x);
    printf("\n");
    return 0;
}