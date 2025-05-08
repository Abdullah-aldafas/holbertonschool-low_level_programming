#include <stdio.h>
#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: An input integer
 * @b: An input integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
