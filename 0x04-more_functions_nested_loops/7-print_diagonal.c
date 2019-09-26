#include "holberton.h"
/**
* print_diagonal - draws a diagonal
* @n: integern
*
* Description: this function draws a diagonal
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
		}
	}
	_putchar('\n');
}
