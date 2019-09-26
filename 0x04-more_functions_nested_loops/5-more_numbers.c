#include "holberton.h"
/**
* more_numbers - prints 10 times from 0 to 14
*
* Description: This function prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int n, x, i, z;

	for (i = 0; i < 10; i++)
	{
		z = 10;
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(49);
			}
			x = z % 10;
			_putchar('0' + x);
			z++;
		}
		_putchar('\n');
	}
}
