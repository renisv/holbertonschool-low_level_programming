#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to search
 * @size: size of the array
 * @cmp: function pointer to compare values
 *
 * Return: index of first matching element, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
break;
}
if (i == size)
return (-1);
return (i);
}
