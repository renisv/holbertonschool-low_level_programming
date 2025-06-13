#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
    int num;
    num = _abs(-1);
	printf("%d\n", num);
	num = _abs(0);
	printf("%d\n", num);
	num = _abs(1);
	printf("%d\n", num);
	num = _abs(-98);
	printf("%d\n", num);
    return (0);
}
