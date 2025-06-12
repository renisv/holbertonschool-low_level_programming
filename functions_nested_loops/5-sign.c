#include "main.h"
#include <stdio.h>

/**
* print_sign - checks value of number
* @n: parameter to hold value
* Return: 1 or 0 or -1
*/
int print_sign(int n)
{
	if (n > 0) 
	{
	_putchar('+');
	return (1);
	}
	else if(n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}