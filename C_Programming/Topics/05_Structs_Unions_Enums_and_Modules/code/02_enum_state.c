#include <stdio.h>

typedef enum
{
    STATE_IDLE = 0,
    STATE_RUNNING = 1,
    STATE_STOPPED = 2
} AppState;

int main(void)
{
    AppState st = STATE_RUNNING;
    if (st == STATE_RUNNING)
        printf("App is running\n");
    return 0;
}