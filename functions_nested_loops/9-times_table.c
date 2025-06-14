#include "main.h"

/**
* times_table - prints the time table
* Return: time table
*/

void times_table(void)
{
	int f1, f2, prod;

	for (f1 = 0; f1 <= 9; f1++)
		{
		_putchar('0');
		for (f2 = 1; f2 <= 9; f2++)
		{
		_putchar(',');
		_putchar(' ');
		prod = f1 * f2;
		if (prod <= 9)
		_putchar(' ');
		else
		_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');
		}
		_putchar('\n');
		}
}
