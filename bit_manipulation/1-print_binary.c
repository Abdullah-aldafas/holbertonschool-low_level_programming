#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: An input pounter
 * Return:  prints the binary representation of a number.
 */

void print_binary(unsigned long int n)
{
	if (n >> 1)
	{
		print_binary(n >> 1);
	}
		_putchar((n & 1) + '0');
}
