#include <stdio.h>
#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 * @i: An input integer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return i;
}
