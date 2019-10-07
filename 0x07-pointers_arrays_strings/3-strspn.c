#include "holberton.h"
/**
* _strspn - get the length of a prefix substring
* @s: character s
* @accept: character accept
*
* Description: this function get the length of a prefix substring
* Return: it returns an unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, c = 0;
	unsigned int x = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				c = 1;
				x = x + 1;
			}
			j++;
		}
		j = 0;
		if (c == 0)
		break;
		c = 0;
		i++;
	}
	return (x);
}
