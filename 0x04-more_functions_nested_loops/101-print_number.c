#include "holberton.h"
/**
* print_number - prints an integer
* @n: integern
*
* Description: this function prints an integer
*/
void print_number(int n)
{
	int x, y;

	if (n < 0)
	{
		x = n * -1;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	y = x / 10;
	if(y)
	{
		print_number(y);
	}
	_putchar('0' + (n % 10));
}
