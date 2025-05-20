#include <stdio.h>
#include "main.h"
#include <stdlip.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string (can be NULL, treated as empty)
 * @s2: second string (can be NULL, treated as empty)
 *
 * Return: pointer to newly allocated string containing s1 + s2,
 *         or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0, t = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (t = 0; s1[t] != '\0'; t++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	arr = malloc((t + j + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		arr[i + j] = s2[j];
	}

	arr[i + j] = '\0';

	return (arr);
}
