#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most `n` bytes from `src`
 * @dest: The destination string (result will be stored here)
 * @src: The source string to append to `dest`
 * @n: Maximum number of bytes to copy from `src`
 *
 * Return: Pointer to the resulting string `dest`
 */
 
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; j < n && src[j] != '\0'  ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
