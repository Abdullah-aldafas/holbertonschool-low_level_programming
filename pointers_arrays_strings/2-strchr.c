#include <stdio.h>
#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: An pointer
 * @c: An input the first occurrence of the character
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
