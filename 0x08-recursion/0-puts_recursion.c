#include "holberton.h"
/**
* _puts_recursion - print a string
* @s: character s
*
* Description: This function prints a string followed by a new line
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s)
	{
		s = s + 1;
		_puts_recursion(s);
	}
	else
	_putchar('\n');

}
