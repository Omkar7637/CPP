#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 4;
    int *a = (int *)malloc((size_t)n * sizeof(int));
    if (a == NULL)
        return 1;

    for (int i = 0; i < n; ++i)
        a[i] = i + 1;

    int new_n = 8;
    int *tmp = (int *)realloc(a, (size_t)new_n * sizeof(int));
    if (tmp == NULL)
    {
        free(a);
        return 1;
    }
    a = tmp;

    for (int i = n; i < new_n; ++i)
        a[i] = i + 1;

    for (int i = 0; i < new_n; ++i)
        printf("%d ", a[i]);
    printf("\n");

    free(a);
    return 0;
}