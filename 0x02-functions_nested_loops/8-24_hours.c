#include "holberton.h"
/**
* jack_bauer - prints every minute for 24 hours
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
					if (i == 2 && j > 3)
					{
					}
					else
					{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					}
				}
			}
		}
	}
}
