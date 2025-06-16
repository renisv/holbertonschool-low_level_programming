#include "main.h"

void print_line(int n)
{
	int start = 0;
	while (start < n)
	{
		_putchar('_');
		start++;
	}
	_putchar('\n');
}