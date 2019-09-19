#include <stdio.h>

/**
 * main - Comando puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			putchar(ch);
		}
		else
		{
			putchar(ch);
		}
	}
	printf("\n");

	return (0);
}
