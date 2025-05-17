#include <stdio.h>
#include "main.h"
/**
 * change - a function that if the input integer is a prime number
 * @i: An input intger
 * @n: An input intger
 * Return:   1 if is prime number 0 otherwise
 */
int change(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (change(n, i + 1));
}
/**
 * is_prime_number - a function that if the input integer is a prime number
 * @n: An input intger
 * Return:   1 if is prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (change(n, 2));
}
