#include <stdio.h>

void print_message(const char *msg)
{
    printf("%s\n", msg);
}

int main(void)
{
    print_message("Module-style function call demo");
    return 0;
}