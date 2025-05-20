#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return NULL;

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return NULL;

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return NULL;
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return arr;
}
