#include <stdio.h>

/**
 * main - Comando puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	printf("\n");

	return (0);
}
