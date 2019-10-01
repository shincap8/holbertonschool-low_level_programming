#include "holberton.h"
/**
* puts_half - prints half of the string
* @str: character str
*
* Description: this function prints half of a string
*/
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		 j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
	}
	i--;
	for (; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
