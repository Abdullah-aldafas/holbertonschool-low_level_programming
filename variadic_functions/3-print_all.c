#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format: An input pounter
 * Return:  print anything
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *str;

	va_start(args, format);


	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
						break;
			case 'i':
			printf("%d", va_arg(args, int));
					break;
			case 'f':
			printf("%f", va_arg(args, double));
				break;

			case 's':
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
			break;

			default:
			i++;
			continue;


		}
		if ((format[i + 1] == 'c' || format[i + 1] == 'i' ||
		       	format[i + 1] == 'f' || format[i + 1] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");

}
