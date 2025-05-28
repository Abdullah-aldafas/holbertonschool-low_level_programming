#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry point for the calculator program
 * @argc: Argument count
 * @argv: Argument vector (array of arguments)
 *
 * Return: 0 on success, or exits with error status
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a, b);
	printf("%d\n", result);

return (0);
}
