#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: An input string
 * Return: converts a binary number to an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = result * 2 + (b - '0');
		b++;
	}
	return (result);
}
