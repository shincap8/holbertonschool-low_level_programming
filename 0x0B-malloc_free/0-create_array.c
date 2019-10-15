#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - creates an array fo chars
 * @size: number of char in the array
 * @c: character that needs to put in the array
 *
 * Return: a character
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (p == '\0')
	{
		return (p);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
