#include <stdio.h>

int linear_search(const int *a, int n, int key)
{
    for (int i = 0; i < n; ++i)
        if (a[i] == key) return i;
    return -1;
}

int main(void)
{
    int a[] = {8, 6, 7, 5, 3, 0, 9};
    int idx = linear_search(a, 7, 5);
    printf("index=%d\n", idx);
    return 0;
}