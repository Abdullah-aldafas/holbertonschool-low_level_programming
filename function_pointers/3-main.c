#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
	int a , b;
	int (*func)(int,int);
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
}
