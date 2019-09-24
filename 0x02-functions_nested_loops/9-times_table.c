#include "holberton.h"
/**
* times_table - print the 9 times table
*
* Description: this function prints the 9 times table starting with 0
*/
void times_table(void)
{
	int i, j, x, y, n;

	for (i = 0; i <= 9; i++)
	{
		
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (j == 0)
			{
				_putchar('0' + n);
			}
			else if (n <= 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + n);
			}
			else
			{
				y = n % 10;
				x = n / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + x);
				_putchar('0' + y);
			}
		}
		_putchar('\n');
	}
}
