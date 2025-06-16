#include "main.h"

int _putchar(char c);
void print_diagonal(int n)
{
	int j;
	int i;

	for (i = 0; i <= n ; i++)
	{
		for (j = 0; j <= i; j++)
		{
		_putchar(' ');
		}
	
	_putchar('\\');
	_putchar('\n');
	}
	if (n < 1)
	{
	_putchar('\n');
	}
}
