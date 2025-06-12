#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
*gives value to c
*checks it
*/
int main(void)
{
	char c;
	c = 'R';
	printf("%d\n", _islower(c));
	return (0);
}