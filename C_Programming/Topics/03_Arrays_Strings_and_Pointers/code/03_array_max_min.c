#include <stdio.h>

int main(void)
{
    int arr[] = {9, 2, 7, 4, 5};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));
    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("max=%d min=%d\n", max, min);
    return 0;
}