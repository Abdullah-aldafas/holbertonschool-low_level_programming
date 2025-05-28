#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * op_add - Returns the sum of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of dividing two integers
 * @a: First integer
 * @b: Second integer
 * Return: Quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
