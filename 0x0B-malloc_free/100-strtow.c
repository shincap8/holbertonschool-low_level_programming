#include "holberton.h"
#include <stdlib.h>
/**
 * length - it calculates the amount of words in a string
 * @p: char
 *
 * Return: a integer
 */
int length(char *p)
{
	int i = 0, s = 0, c = 0;

	while (p[i])
	{
		if (p[i] != ' ' || p[i] == '\0')
		{
			s = 1;
			if (p[i + 1] == '\0')
				c++;
		}
		else if (p[i] == ' ' && s == 1)
		{
			c++;
			s = 0;
		}
		i++;
	}
	return (c);
}
/**
 * **strtow - split a string into words
 * @str: pointer to string
 *
 * Return: a character
 */
char **strtow(char *str)
{
	int i = 0, j = 0, s = 0, cs = 0, cw = 0, k = 0;
	char **x;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	cs = length(str);
	if (cs == 0)
		return (NULL);
	x = malloc(sizeof(char *) * (cs + 1));
	if (x == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
			s = 1, cw = cw + 1;
		if ((str[i] == ' ' || str[i + 1] == '\0') && s == 1)
		{
			x[j] = malloc(sizeof(char) * (cw + 1));
			if (x[j] == NULL)
			{
				for (; j >= 0; j--)
					free(x[j]);
				free(x);
				return (NULL);
			}
			cw = 0, s = 0, j = j + 1;
		}
		i++;
	}
	i = 0, j = 0, s = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			x[j][k] = str[i], k = k + 1, s = 1;
		if ((str[i] == ' ' || str[i + 1] == '\0') && s == 1)
			x[j][k] = '\0', k = 0, s = 0, j = j + 1;
		i++;
	}
	x[j] = NULL;
	return (x);
}
