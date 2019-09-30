#include "holberton.h"
/**
* _puts - prints a string followed by a new line
* @str: character str
*
* Description: this function prints a string followed by a new line to stdout.
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
