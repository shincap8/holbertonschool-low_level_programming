#include "holberton.h"
/**
* print_number - prints an integer
* @n: integern
*
* Description: this function prints an integer
*/
void print_number(int n)
{
	int m, c;
	unsigned int x, p;

	m = 1;
	c = 0;
	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = x * -1;
	}
	if (x > 9)
	{
		p = x;
		while (p > 9)
		{
			c++;
			m = m * 10;
			p = p / 10;
		}
		_putchar('0' + (x / m));
		m = m / 10;
		while (c > 0)
		{
			p = x;
			p = p / m;
			_putchar('0' + (p % 10));
			m = m / 10;
			c--;
		}
	}
	else
	{
		_putchar('0' + n);
	}
}
