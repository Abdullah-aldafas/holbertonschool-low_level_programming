#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum value to start from
 * @max: The maximum value to end at
 *
 * Return: Pointer to the newly allocated array
 *         or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int range, *arr, i;
	if (min > max)
	{
		return(NULL);
	}

	range = max - min + 1;

	arr = malloc(range * sizeof(int));

	if(arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
