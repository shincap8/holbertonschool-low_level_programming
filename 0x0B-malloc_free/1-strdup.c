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
	i++
	p = malloc(i);
	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
