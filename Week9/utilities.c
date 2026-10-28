#include <stdio.h>
#include "utilities.h"

void clearScreen(void)
{
    printf("\n");
}

void pause(void)
{
    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}