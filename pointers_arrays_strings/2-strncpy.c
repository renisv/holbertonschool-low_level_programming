#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j]= src[j];
	}
	dest[j] = '\0';


	return (dest);
}