#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows = 2, cols = 3;
    int **m = (int **)malloc((size_t)rows * sizeof(int *));
    if (m == NULL) return 1;

    for (int i = 0; i < rows; ++i)
    {
        m[i] = (int *)malloc((size_t)cols * sizeof(int));
        if (m[i] == NULL) return 1;
    }

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            m[i][j] = i + j;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    for (int i = 0; i < rows; ++i) free(m[i]);
    free(m);
    return 0;
}