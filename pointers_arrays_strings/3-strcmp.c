#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return:
 *   - 0 if strings are equal
 *   - Negative if s1 < s2 (lexicographically)
 *   - Positive if s1 > s2 (lexicographically)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}

return (s1[i] - s2[i]);
}
