#include <stdio.h>
#include "main.h"
/**
 *_abs - Check main.h
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}
}
