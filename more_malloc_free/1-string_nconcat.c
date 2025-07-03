#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated concatenated string
 *         NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = 0, s2_len = 0, i, j;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1_len])
s1_len++;
while (s2[s2_len])
s2_len++;

if (n < s2_len)
s2_len = n;

concat = malloc(sizeof(char) * (s1_len + s2_len + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
concat[i] = s1[i];
for (j = 0; j < s2_len; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';

return (concat);
}
