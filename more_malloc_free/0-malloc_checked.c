#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 *         exits with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}

	return (arr);
}
