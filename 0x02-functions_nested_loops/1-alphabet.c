#include "holberton.h"
/**
* print_alphabet - Entry point
*
* This function prints the alphabet
*/
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
