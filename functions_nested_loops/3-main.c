#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	c = 'R';
	printf("%d\n", _islower(c));
	return (0);
}