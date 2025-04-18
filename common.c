#include <stdio.h>

void clearBuffer(void)
{
    // Clear the buffer
    while (getchar() != '\n')
        ;
}