#include "holberton.h"
/**
* print_number - prints an integer
* @n: integern
*
* Description: this function prints an integer
*/
void print_number(int n)
{
	int ld;

	for (; n >= 0; )
	{
		if (n > 9)
		{
			ld = n % 10;
			n = n / 10;
			_putchar('0' + ld);
		}
		else
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
