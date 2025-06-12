#include "main.h"
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char c;
	c = 'R';
	printf("%d\n", _islower(c));
	return (0);
}