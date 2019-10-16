#include "holberton.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: elementes in av
 * @av: double pointer contains strings
 *
 * Return: a character
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *x;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		j = 0;
		while (str[j])
			j++;
		k = k + j;
	}
	x = malloc((sizeof(char) * k) + ac + 1);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			x[l] = av[i][j];
			l++;
			j++;
		}
		x[l] = '\n';
		l++;
	}
	x[l] = '\0';
	return (x);
}
