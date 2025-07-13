#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
int total = 0;
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
total += va_arg(args, int);
}

va_end(args);
return (total);
}
