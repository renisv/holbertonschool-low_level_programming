#include "main.h"
#include <unistd.h>

/**
* _islower -  checks a letter if its lowercase or not
* @c: parameter of input
* Return: 1 or 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
