#include <stdio.h>
#include <stdlib.h>

int global_var = 42;

int main(void)
{
    int stack_var = 7;
    int *heap_var = (int *)malloc(sizeof(int));
    if (heap_var == NULL)
        return 1;
    *heap_var = 99;

    printf("global: %p\n", (void *)&global_var);
    printf("stack : %p\n", (void *)&stack_var);
    printf("heap  : %p\n", (void *)heap_var);

    free(heap_var);
    return 0;
}