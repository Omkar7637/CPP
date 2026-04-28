#include <stdio.h>

int main(void)
{
    const char *s = "qualcomm";
    int vowels = 0;

    for (int i = 0; s[i] != '\0'; ++i)
    {
        char c = s[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            ++vowels;
    }

    printf("vowels=%d\n", vowels);
    return 0;
}