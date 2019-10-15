#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a character
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, k, T, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	T = i + j;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= T; k++)
	{
		if (k < i)
			p[k] = s1[k];
		else
		{
			p[k] = s2[c];
			c++;
		}
	}
	return (p);
}
