#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp(function) to compare the elements throw array
 * Return: The index of the first element for witch the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return(-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0)
				return (i);
	}
	return (-1);
}
