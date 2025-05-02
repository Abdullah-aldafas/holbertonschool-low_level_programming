#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check holberton
 * Description:function that checks for lowercase character.
 * Return: Nothing.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
