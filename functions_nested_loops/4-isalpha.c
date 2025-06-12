#include "main.h"
#include <unistd.h>

/**
* _isalpha - checks if a character is a letter
* @c: parameter to hold value
* Return: 1 or 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
