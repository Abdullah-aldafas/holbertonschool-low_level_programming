#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

		_putchar(c);
	_putchar('\n');

}
