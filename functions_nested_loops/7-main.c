#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
    int n;
	print_last_digit(98);
    _putchar('\n');
	print_last_digit(0);
    _putchar('\n');
	n = print_last_digit(-1024);
    _putchar('\n');
	_putchar('0' + n);
	_putchar('\n');
    
    return (0);
}