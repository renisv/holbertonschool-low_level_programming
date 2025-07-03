#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: Pointer to the allocated array (success)
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size == 0)
{
return (NULL);
}
str = malloc(size * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);
}
