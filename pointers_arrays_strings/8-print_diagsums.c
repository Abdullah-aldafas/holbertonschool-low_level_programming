#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
		sum1 += a[i * size + i];

	for (i = 0; i < size; i++)
		sum2 += a[i * size + (size - 1 - i)];

	printf("%d, %d\n", sum1, sum2);
}

