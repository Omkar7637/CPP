#include <stdio.h>

typedef union
{
    int i;
    float f;
} Number;

int main(void)
{
    Number n;
    n.i = 65;
    printf("as int=%d\n", n.i);
    n.f = 3.14f;
    printf("as float=%.2f\n", n.f);
    return 0;
}