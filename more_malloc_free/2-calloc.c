#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _calloc - Allocates memory for an array using malloc and sets it to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL if failure or invalid input
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	p = arr;

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (arr);
}
