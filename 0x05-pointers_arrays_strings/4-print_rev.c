#include "holberton.h"
/**
* print_rev - write a string in reverse
* @s: integers
*
* Description: this function writes a string in reverse
*/
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i --;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
