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

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc(i + 1);
	if (p == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
