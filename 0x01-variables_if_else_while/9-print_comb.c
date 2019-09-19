#include <stdio.h>

/**
 * main - Comando puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar("\n");

	return (0);
}
