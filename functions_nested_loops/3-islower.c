#include "main.h"
#include <unistd.h>

/**
*_islower checks a letter if its lowercase or not
*returns 1 is lowercase
*returns 0 if uppercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
