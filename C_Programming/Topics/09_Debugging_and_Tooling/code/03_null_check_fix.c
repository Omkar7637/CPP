#include <stdio.h>

int main(void)
{
    int *p = NULL;
    if (p == NULL)
    {
        printf("Prevented null dereference\n");
        return 0;
    }
    printf("%d\n", *p);
    return 0;
}