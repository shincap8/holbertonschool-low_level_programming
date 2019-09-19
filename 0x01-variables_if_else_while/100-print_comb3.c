#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (x < y && x != y)
			{
				putchar(x);
				putchar(y);
				if (x == 56 && y == 57)
				{
				}
				else
				{
					putchar(',');
					putchar(32);
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
