#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;
    int *a = (int *)malloc((size_t)n * sizeof(int));
    if (a == NULL)
    {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; ++i)
        a[i] = i * i;

    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");

    free(a);
    return 0;
}