#include "holberton.h"
/**
* print_number - prints an integer
* @n: integern
*
* Description: this function prints an integer
*/
void print_number(int n)
{
	int p, m, c;

	m = 1;
	c = 0;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	p = n;
	if (n > 9)
	{
		p = n;
		while (p > 9)
		{
			c++;
			m = m * 10;
			p = p / 10;
		}
		_putchar('0' + (n / m));
		m = m / 10;
		while (c > 0)
		{
			p = n;
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
