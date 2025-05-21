#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to take from s2
 *
 * Return: Pointer to newly allocated space containing s1 followed by
 *         the first n bytes of s2, and null-terminated.
 *         Returns NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i = 0, j = 0, x, z, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	len = (n < j) ? n : j;

	arr = malloc((i + len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		arr[x] = s1[x];

	for (z = 0; z < len; z++)
		arr[x + z] = s2[z];

	arr[x + z] = '\0';

	return (arr);
}
