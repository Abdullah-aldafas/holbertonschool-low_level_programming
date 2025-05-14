#include <stdio.h>
#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, match;

	while (*s)
	{
		match = 0;
		i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				match = 1;
				break;
			}
			i++;
		}
		if (!match)
			break;
		count++;
		s++;
	}
	return (count);
}
