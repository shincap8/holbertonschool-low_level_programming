#include "holberton.h"
/**
* *leet - encodes a sstring into 1337
* @s: character s
*
* Description: this function writes a string in reverse
* Return: it returns a char
*/
char *leet(char *s)
{
	int i = 0, j = 0, x = 1, y = 1;
	int M[] = {65, 69, 84, 79, 75};
	int m[] = {97, 101, 116, 111, 108};
	int n[] = {52, 51, 55, 48, 49};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			x = M[j] - s[i];
			y = m[j] - s[i];
			if (x == 0 || y == 0)
			{
				s[i] = n[j];
				x = 1;
				y = 1;
			}
		}
		i++;
	}
	return (s);
}
