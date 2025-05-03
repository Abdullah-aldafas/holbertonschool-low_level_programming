#include <stdio.h>
#include "main.h"
/**
 * last - Check main.h
 *@n: integre input
 *
 *Description:Write a function that prints the last digit of a number.
 *
 *Return:Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;
	if (last < 0)
	{
		last = -last;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(last + '0');
		return(last);
	}
}
