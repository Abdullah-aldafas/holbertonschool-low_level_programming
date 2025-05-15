#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: An array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++
			 _putchar('\n');
	}
}
