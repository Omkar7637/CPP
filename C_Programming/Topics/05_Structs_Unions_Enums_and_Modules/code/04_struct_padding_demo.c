#include <stdio.h>

struct A
{
    char c;
    int x;
};

int main(void)
{
    printf("sizeof(struct A)=%zu\n", sizeof(struct A));
    return 0;
}