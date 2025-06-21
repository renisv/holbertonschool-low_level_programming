#include "main.h"

/**
 * reverse_array - Reverses the order of elements in an integer array
 * @a: Pointer to the array to be reversed
 * @n: Number of elements in the array
 *
 * Description: This function reverses the order of elements in the array
 * by swapping elements symmetrically around the center of the array.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= n / 2 - 1; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
