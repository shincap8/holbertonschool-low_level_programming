#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer
 * @str: character str
 *
 * Return: a character
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0, j;

	while (str[i])
		i++;
	i++;
	p = malloc(sizeof(char) * i);

	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			p[j] = str[j];
		}
		return (p);
	}
}
