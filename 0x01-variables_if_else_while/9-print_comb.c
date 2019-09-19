#include <stdio.h>

/**
 * main - Comando puts
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
		}
		else
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
