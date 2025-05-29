#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n:an unsigned integr
 * Return:  total of number
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int total = 0;
	va_list(args);

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total = total + va_arg(args, unsigned int);
	}
	va_end(args);
	return (total);
}
