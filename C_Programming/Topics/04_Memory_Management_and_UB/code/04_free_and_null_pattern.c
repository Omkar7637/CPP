#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = (int *)malloc(sizeof(int));
    if (p == NULL) return 1;
    *p = 42;

    free(p);
    p = NULL;

    if (p == NULL)
        printf("Pointer reset to NULL after free\n");
    return 0;
}