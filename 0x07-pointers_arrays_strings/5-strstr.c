#include "holberton.h"
/**
* *_strstr - locates a substring
* @haystack: character haystack
* @needle: character needle
*
* Description: this function locates a substring
* Return: it returns a char
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, y = 0, x;

	while (needle[j])
		j++;
	if (j == 0)
		return (haystack);
	j--;
	while (haystack[i])
	{
		for (x = 0; x <= j; )
		{
			if (needle[x] != haystack[i])
				i++;
			else if (needle[x] == haystack[i] && y == x)
			{
				y++;
				i++;
				x++;
			}
			if (y == j)
			{
				haystack = haystack + (i - j);
				return (haystack);
			}
		}
	}
	haystack = 0;
	return (haystack);
}
