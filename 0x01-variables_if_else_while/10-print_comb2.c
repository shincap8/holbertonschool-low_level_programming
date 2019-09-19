#include <stdio.h>

/**
 * main - Comando puts
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 0; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x == 57 && y < 57)
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
