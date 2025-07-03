#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int total_size, i;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
if (total_size < nmemb || total_size < size)
return (NULL);

ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < total_size; i++)
ptr[i] = 0;

return (ptr);
}
