#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search through
 * @accept: string containing characters to match
 *
 * Description: Locates the first occurrence in string 's' of any of the bytes
 *              in string 'accept'.
 *
 * Return: pointer to byte in 's' matches one of bytes in 'accept',
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])  /* s[i] is '\0' at this point */
{
return (&s[i]);
}
}

return (NULL);
}
