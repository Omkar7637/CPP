#include <stdio.h>

int main(void)
{
    int arr[] = {3, 1, 4, 1, 5};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));
    int sum = 0;

    for (int i = 0; i < n; ++i)
        sum += arr[i];

    printf("Array sum = %d\n", sum);
    return 0;
}