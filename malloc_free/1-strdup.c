#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
	int i, j;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	arr = malloc((i + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		arr[j] = str[j];
	}

	arr[j] = '\0';

	return (arr);
}
