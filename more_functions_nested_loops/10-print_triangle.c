#include "main.h"

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				if (i <= size - j)
					_putchar(' ');
				else
					_putchar('#');

			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}