#include "holberton.h"
/**
* jack_bauer - prints every minute for 24 hours
* @n: n is an integer
*
* Description: This function prints every minute of 24 hours
*/
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (j >= 3)
					{
					}
					else
					{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					}
				}
			}
		}
	}
}
