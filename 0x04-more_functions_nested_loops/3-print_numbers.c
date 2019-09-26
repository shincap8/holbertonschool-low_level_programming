#include "holberton.h"
/**
* print_numbers - prints the number from 0 to 9
*
* Description: this function prints the numner from 0 to 9
*/
void print_numbers(void);
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0' +  n);
	}

	_putchar('\n');
}
