#include "main.h"
#include <stdio.h>

/**
* print_last_digit - prints the last digit
* @n: parameter to hold value
* Return: n % 10
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = -n;
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
