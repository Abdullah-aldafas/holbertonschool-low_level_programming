#include <stdio.h>
#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int i = 0;

		while (accept[i])
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
