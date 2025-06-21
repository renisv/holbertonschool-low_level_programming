#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @str: Pointer to the string to be converted
 *
 * Return: Pointer to the modified string
 *
 * Description: This function iterates through each character of the string
 * and converts lowercase letters (a-z) to their uppercase equivalents (A-Z).
 * Other characters remain unchanged.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
