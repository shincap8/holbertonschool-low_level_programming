#include "holberton.h"
#include <stdlib.h>
/**
 * length - 
 * @p: char
 *
 * Return: a integer
 */
int length(char *p);
{
	int i = 0, s, c = 0;

	while (p[i])
        {
                if (p[i] != ' ')
                        s = 1;
                else if (str[i] == ' ' && s == 1)
                {
                        c++;
                        s = 0;
                }
                i++;
        }
	return	(c);
}
/**
 * **strtow - split a string into words
 * @str: pointer to string
 *
 * Return: a character
 */
char **strtow(char *str)
{
	int i = 0, j = 0, s, c = 0;
	int **x;

	if (str = NULL || str == "")
		return (NULL);
	c = length(str);
	x = malloc((sizeof(char *) * c) + 1);
	if (x == NULL)
		return (NULL);
	c = 0;
	while (stri[i])
	{
		if(str[i] != ' ')
		{
			s = 1;
			c++;
		}
		else if (str[i] == ' ' && s = 1)
		{
			c++;
			x[j] = malloc(sizeof(char)* c);
			if (x[j] == NULL)
			{
				for (; j >= 0; j--)
				{
					free(x[j]);
				}
				free(x);
				return (NULL);
			}
			c = 0;
			s = 0;
			j++;
		}
	}
	i = 0;
	while (stri[i])
	{
		if (str[i])
	}
	return (x);
}
