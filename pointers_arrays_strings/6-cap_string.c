#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: Pointer to the string to be capitalized
 *
 * Return: Pointer to the modified string
 *
 * Description: Capitalizes the first letter of each word in a string.
 * Words are separated by: space, tab, newline, ,, ;, ., !, ?, ", (, ), {, }
 */

char *cap_string(char *str)
{
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ( i == 0)
		{
			
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	
	return(str);
}
