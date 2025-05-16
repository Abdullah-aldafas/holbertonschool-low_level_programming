#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * @s: An input pounter
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
