#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));

    for (int i = 0, j = n - 1; i < j; ++i, --j)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }

    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}