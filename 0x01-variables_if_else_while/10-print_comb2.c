#include <stdio.h>

/**
 * main - Comando puts
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x == 57 && y == 57)
			{
			}
			else
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
