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
	int i = 0, x = 0;
	va_list args;
	char *str;


	 if (format[i] == '\0')
                        return;

	va_start(args, format);

	while (format[i])
	{
		if ((format[i] == 'c' || format[i]  == 'i' ||
                        format[i] == 'f' || format[i] == 's') && x++)
                printf(", ");
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

		}
		i++;
	}
	va_end(args);
	printf("\n");

}
