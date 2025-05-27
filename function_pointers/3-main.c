#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main (int argc, char *argv[])
{
	int a , b;
	int (*func)(int,int);
	 int result = func(a, b);

	func = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
	exit(98);
	}
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	 a = atoi(argv[1]);
	 b = atoi(argv[3]);

printf("%d\n", result);

return (0);
}
