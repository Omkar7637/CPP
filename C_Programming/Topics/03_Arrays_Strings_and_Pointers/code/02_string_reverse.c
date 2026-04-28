#include <stdio.h>

int main(void)
{
    char s[] = "interview";
    int len = 0;

    while (s[len] != '\0')
        ++len;

    for (int i = 0, j = len - 1; i < j; ++i, --j)
    {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }

    printf("Reversed: %s\n", s);
    return 0;
}