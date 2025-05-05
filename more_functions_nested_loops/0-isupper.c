#include <stdio.h>
#include <main.h>
/**
 *_isupper - Write a function that checks for uppercase character.
 *
 *
 *@c is input function
 *
 *
 *returns 1 if c is  uppercase return 0 for otherwise
 *
 */
int _isupper(int c)
{
	if ( c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
