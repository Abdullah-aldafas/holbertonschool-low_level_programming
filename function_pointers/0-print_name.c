#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints.
 * @n: An input integer
 * @name: An input pounter
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	printf("Hello, %s",name);
}
