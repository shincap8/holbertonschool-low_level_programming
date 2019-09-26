#include "holberton.h"
/**
* print_number - prints an integer
* @n: integern
*
* Description: this function prints an integer
*/
void print_number(int n)
{
	int ld, c;

	c = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		ld = n;
	}	
	while (ld > 0)
	{
		if ((ld / 10) > 0)
		{
			c = c + 1;
			_putchar ('0' + c);
			ld = ld / 10;
		}
	}
	_putchar('\n');
}
