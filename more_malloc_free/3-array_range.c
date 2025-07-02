#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *array_range(int min, int max)
{
    int *numbers;
    int length, i;

    if (min > max)
        return (NULL);
    
    length = max - min + 1;
    numbers = malloc(length * sizeof(int));

    if (numbers == NULL)
        return (NULL);
    
    for (i = 0; min <= max; i++ )
    {
        numbers[i] = min;
        min++;
    }
    return (numbers);
}