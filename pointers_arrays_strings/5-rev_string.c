#include <stdio.h>
#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: An input integer
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, len;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
