#include <stdio.h>
#include "main.h"

/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index
 * @n: An input unsigned long int
 * @index: An input unsigned long int
 * Return:  length of a string.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >> sizeof(n) & 1)
		return (1);
	*n = *n | (1UL << index);
	return (-1);
}
