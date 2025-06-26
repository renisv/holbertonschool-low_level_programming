#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: substring to find
 *
 * Description: Finds the first occurrence of the substring 'needle'
 *              in the string 'haystack'. The terminating null bytes
 *              are not compared.
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

if (*needle == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}

return (NULL);
}
