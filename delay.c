#include "headers.h"
#include "functions.h"

void delay(unsigned int seconds)
{
    clock_t goal = seconds * CLOCKS_PER_SEC + clock();
    while (goal > clock());
}
