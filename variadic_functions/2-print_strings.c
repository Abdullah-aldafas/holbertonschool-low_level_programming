#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 *  followed by a new line.
 * @separator: An input pounter
 * @n: An input unsigned int
 * Return: prints a strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list agrs;

	va_start(agrs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(agrs, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%d", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(agrs);
	printf("\n");
}
