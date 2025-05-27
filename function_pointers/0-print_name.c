#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints.
 * @name: An input pounter
 * @f: function to print name
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
