#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free a 2 dimensional gridi
 * @size: number of char in the array
 * @c: character that needs to put in the array
 *
 * Return: a character
 */
void free_grid(int **grid, int height)
{
	char *p;
	unsigned int i;

	p = malloc(size);
	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
