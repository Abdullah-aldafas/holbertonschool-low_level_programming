#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: An input pounter
 * Return:  length of a string.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int total = 0;

	if (n == 0)
	{
		return (0);
	}
	va_list(args);
	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{

