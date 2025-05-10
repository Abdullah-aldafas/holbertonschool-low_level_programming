#include <stdio.h>
#include "main.h"
/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;
	int found_digit = 0;


	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}

		i++;
	}

	return (result * sign);
}
