#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak)
 * @str: The string to be encoded
 * Return: Pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
				str[i] = number[j];
		}
	}
	return (str);
}
