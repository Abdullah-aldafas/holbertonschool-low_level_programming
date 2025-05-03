#include <stdio.h>
#include "main.h"
/**
 *times_table - check main.h
 *Description:Write a function that prints the 9 times table, starting with 0.
 *
 *return: Nothing
 *
 */
void times_table(void)
{
    int n, r, result;

    for (n = 0; n <= 9; n++)
    {
        for (r = 0; r <= 9; r++)
        {
            result = n * r;

            if (r == 0)
            {
             
		    if (result < 10)
                {
                    _putchar(' ');
                    _putchar(result + '0');
                }
		  else
                {
                    _putchar((result / 10) + '0');
                    _putchar((result % 10) + '0');
                }
            }
            else
            {
                _putchar(',');
                _putchar(' ');

                if (result < 10)
                {
                    _putchar(' ');
                    _putchar(result + '0');
                }
                else
                {
                    _putchar((result / 10) + '0');
                    _putchar((result % 10) + '0');
                }
            }
        }
        _putchar('\n');
    }
}
