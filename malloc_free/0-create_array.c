i#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes
 * @size: An input unsigned intger
 * @c: An input char
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{

if (size == 0)
{
return (NULL);
}
char *arr = malloc(size * sizeof(char));

if (arr == NULL)
{
return (NULL);
}

for (int i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
