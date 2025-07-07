#include <stdio.h>
#include "function_pointers.h"

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