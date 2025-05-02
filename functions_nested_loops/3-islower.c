#include <stdio.h>
#include "main.h"

/**
 * _islower - Check main.h
 * Description: function uses _putchar function to print
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
