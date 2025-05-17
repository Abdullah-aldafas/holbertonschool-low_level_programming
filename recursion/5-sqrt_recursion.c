#include <stdio.h>
#include "main.h"
/**
 * change - helper function to find square root recursively
 * @x: current number to test
 * @n: the number to find the square root of
 *
 * Return: natural square root, or -1 if not found
 */
int change(int n, int x)
{
	if (n < x * x)
	{
		return (-1);
	}
	if (n == x * x)
	{
		return (x);
	}
	return (change(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
return (change(n, 0));
}
