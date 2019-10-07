#include "holberton.h"
/**
* *_strchr - locates a character
* @s: character s
* @c: character c
*
* Description: this function locates a character in a string
* Return: it returns a char
*/
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s = (s + j);
			break;
		}
		else if (j == i)
		{
			s = 0;
		}
	}
	return (s);
}
