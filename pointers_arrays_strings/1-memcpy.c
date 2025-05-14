#include <stdio.h>

/**
 * _memcpy - a function that copies memory area.
 * @n: An input unsigned integer
 * @dest : an memory area to copy
 * @src : an memory area to take from
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
