#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int even_sum = 0;

    for (int i = 0; i < n; ++i)
        if ((arr[i] & 1) == 0) even_sum += arr[i];

    printf("even_sum=%d\n", even_sum);
    return 0;
}