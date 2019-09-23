#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w, x, y, z;

	for (w = 48; w <= 57; w++)
	{
		for (x = 48; x <= 57; x++)
		{
			for (y = w; y <= 57; y++)
			{
				if (y == w)
				{
					z = x + 1;
				}
				else
				{
					z = 48;
				}
				for (; z <= 57; z++)
				{
					putchar(w);
					putchar(x);
					putchar(32);
					putchar(y);
					putchar(z);
					if (w == 57 && x == 56 && y == 57 && z == 57)
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
	}
	putchar('\n');

	return (0);
}
