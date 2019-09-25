#include "holberton.h"
/**
* print_times_table - print n times table
* @n: n is an integer
*
* Description: this function prints n times table starting with 0
*/
void print_times_table(int n)
{
	int i, j, x, y, z, res;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			z = res % 10;
			if (j == 0)
				_putchar('0' + res);
			_putchar(',');
			_putchar(' ');
			else if (res <= 9 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			else if (res > 9 && res <= 99)
			{
				x = res / 10;
				_putchar(' ');
				_putchar('0' + x);
				_putchar('0' + z);
			}
			else
			{
				y = (res / 10) % 10;
				x = res / 100;
				_putchar('0' + x);
				_putchar('0' + y);
				_putchar('0' + z);
			}
		}
		_putchar('\n');
	}
	}
}
