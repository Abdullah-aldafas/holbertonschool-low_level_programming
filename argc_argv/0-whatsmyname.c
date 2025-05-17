#include <stdio.h>
#include "main.h"
/**
 * main - Prints the name of the program
 * @argc: Argument count (number of command-line arguments)
 * @argv: Argument vector (array of strings passed to the program)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
