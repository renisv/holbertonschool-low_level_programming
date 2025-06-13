#include "main.h"
#include <stdio.h>

/**
* print_last_digit - prints the last digit
* @n: parameter to hold value
* Return: n % 10
*/

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	n = n % 10;
	_putchar(n + 48);
	return (n);
}
