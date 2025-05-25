#include <stdio.h>
#include <string.h>

/**
 * help - Recursively checks if a string is a palindrome
 * @s: the string
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int help(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (help(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int end = strlen(s);

	if (*s == '\0')
		return (1);

	return (help(s, 0, end - 1));
}
