#include "holberton.h"
/**
* puts2 - prints every other character of a string
* @str: character str
*
* Description: this function writes a string in reverse
*/
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j = j + 2)
	{
		if ((i % 2) == 2)
		{
			i--;
		}
			if (str[j] == '\0')
			{
			}
			else
			{
				_putchar(str[j]);
			}
	}
		_putchar('\n');
}
