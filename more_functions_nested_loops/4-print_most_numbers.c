#include <stdio.h>
#include "main.h"


/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: Always 0
 */


void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}

	}
	_putchar('\n');
}
