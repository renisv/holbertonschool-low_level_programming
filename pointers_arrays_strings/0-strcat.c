#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string (will contain the result)
 * @src: The source string to append to @dest
 *
 * Return: Pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
