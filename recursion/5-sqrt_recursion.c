#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion -  a function that returns the natural square root of a number.
 * @n: An input pounter
 * Return:  square root of a number.
 */
int change(int n ,int x)
{
	if (n < x*x)
	{
		return (-1);
	}
	if ( n == x*x)
	{
		return(x);
	}
	 return (change(n,x + 1));
}
int _sqrt_recursion(int n)
{
return (change(n , 0));
}
