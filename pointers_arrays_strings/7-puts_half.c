#include <stdio.h>
#include "main.h"
/**
 * puts_half -  a function that prints half of a string,
 * followed by a new line.
 * @str: An input integer
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i = 0, len = 0, start;


	while (str[len] != '\0')
		len++;


	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;


	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

