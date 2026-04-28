#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("heartbeat.txt", "r");
    if (fp == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    char line[128];
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);
    return 0;
}