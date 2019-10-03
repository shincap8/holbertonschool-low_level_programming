#include "holberton.h"
/**
* *cap_string - capitalize all words of a string
* @s: character s
*
* Description: this function writes a string in reverse
* Return: it returns a char
*/
char *cap_string(char *s)
{
	int i, c, x, r;

	i = 0;
	c = 0;
	while (s[i])
	{
		x = s[i];
		if (x == 32 || x == 9 || x == 10 || x == 44)
		{
			c = 1;
			r = i + 1;
		}
		else if (x == 125 || x == 34 || x == 40 || x == 41 || x == 123)
		{
			c = 1;
			r = i + 1;
		}
		else if (x == 33 || x == 63 || x == 59 || x == 46)
		{
			c = 1;
			r = i + 1;
		}
		if (c == 1 && x <= 122 && x >= 97 && r == i)
		{
			s[i] = x - 32;
			c = 0;
		}
		i++;
	}
	return (s);
}
