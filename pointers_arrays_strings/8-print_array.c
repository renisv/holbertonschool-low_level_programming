#include "main.h"
#include <stdio.h>

/**
* print_array - prints array up to n
* @n: parameter to hold value
* @a: array
*/
void print_array(int *a, int n)
{
int m;
for (m = 0; m < n; m++)
{
printf("%d", a[m]);
if (m != n - 1)
{
printf(", ");
}
}
printf("\n");

}
