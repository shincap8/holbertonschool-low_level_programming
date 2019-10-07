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
	{
		j++;
	}
	j--;
	while (haystack[i])
	{
		for (x = 0; x <= j; x++)
		{
			if (needle[x] != haystack[i])
			{
				i++;
				x = -1;
			}
			else if (needle[x] == haystack[i] && y == x)
			{
				y++;
				i++;
			}
			if (y == j)
			{
				haystack = haystack + (i - j);
				return (haystack);
			}
		}
	}
	return (0);
}
