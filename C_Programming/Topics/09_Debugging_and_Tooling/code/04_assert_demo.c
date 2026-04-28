#include <stdio.h>
#include <assert.h>

int safe_divide(int a, int b)
{
    assert(b != 0);
    return a / b;
}

int main(void)
{
    printf("%d\n", safe_divide(12, 3));
    return 0;
}