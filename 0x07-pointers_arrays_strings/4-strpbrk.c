#include "holberton.h"
/**
* *_strpbrk - searches for any of a set of bytes.
* @s: character s
* @accept: character accept
*
* Description: this function searches for any of a set of bytes.
* Return: it returns a char
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
			j++;
		}
		j = 0;
		i++;
	}
	s = 0;
	return (s);
}
