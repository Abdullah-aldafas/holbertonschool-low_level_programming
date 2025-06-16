#include <stdio.h>
#include "main.h"

/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index
 * @n: An input unsigned long int
 * @index: An input unsigned long int
 * Return:  length of a string.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return count;
}
