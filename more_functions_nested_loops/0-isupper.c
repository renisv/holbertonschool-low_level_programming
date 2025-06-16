#include "main.h"

/**
* _isupper - checks if the letter is uppercase
* @c : interger to hold value
* Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
