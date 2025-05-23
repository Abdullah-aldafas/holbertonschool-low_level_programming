#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Converts all program arguments into a single string,
 *             each followed by a newline character.
 *
 * @ac: The number of arguments (argument count).
 * @av: Array of arguments (array of strings).
 *
 * Return: A pointer to a newly allocated string containing all arguments
 */

char *argstostr(int ac, char **av)
{
	int i, j, z, pos = 0;
	int total = 0;
	char *temp;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		total++;
		}
		total++;
	}
	total++;
	temp = malloc(total * sizeof(char));

	if (temp == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		z = 0;
		while (av[i][z] != '\0')
		{
			temp[pos++] = av[i][z++];
		}
		temp[pos++] = '\n';
	}
	temp[pos] = '\0';
	return (temp);
}
