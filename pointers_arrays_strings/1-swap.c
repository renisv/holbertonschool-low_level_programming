#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the values of a and b
* @a : parameter to hold value
* @b : parameter to hold value
*/

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
