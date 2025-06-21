#include "main.h"

/**
 * _strncpy - Copies at most n characters from source to destination
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination string
 *
 * Description: This function copies up to n characters from the source string
 * to the destination.If the source is shorter than n characters, the remaining
 * space in the destination is filled with null bytes.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{

		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
