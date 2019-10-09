#include "holberton.h"
/**
* _print_rev_recursion- prints a string in reverse
* @s: character s
*
* Description: this function prints a string in reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s = s + 1;
		_print_rev_recursion(s);
		s = s - 1;
		_putchar(*s);
	}
}
