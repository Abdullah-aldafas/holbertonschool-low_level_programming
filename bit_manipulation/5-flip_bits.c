#include <stdio.h>
#include "main.h"

/**
 *  flip_bits -a function that returns the number of bits you would need
 *  to flip to get from one number to another.
 * @n: An input unsigned long int
 * @m: An input unsigned long int
 * Return:  number of bits you need to flip to get from one number to another
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

	return (count);
}
