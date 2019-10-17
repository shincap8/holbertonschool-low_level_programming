#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: character s1
 * @s2: character s2
 * @n: unsigned int
 *
 * Return: the string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k, e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
	{
		e = i + j + 1;
		p = malloc(sizeof(char) * e);
	}
	else
	{
		e = i + n + 1;
		p = malloc(sizeof(char) * (i + n + 1));
	}
	if (p == NULL)
		return (NULL);
	i = 0, j = 0;
	for (k = 0; k <= e; k++)
	{
		while (s1[i])
		{
			p[k] = s1[i];
			i++;
			k++;
		}
		for (; k < e; k++)
		{
			p[k] = s2[j];
			j++;
		}
		p[k] = '\0';
	}
	return (p);
}
