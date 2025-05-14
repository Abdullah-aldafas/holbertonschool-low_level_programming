#include <stddef.h>
#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: A pointer to the input string
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (NULL);
}
