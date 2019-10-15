#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a pointer to a 2 dimensional
 * @width: har in the array
 * @height: character that needs to put in the array
 *
 * Return: a character
 */
int **alloc_grid(int width, int height)
{
	int *p;

	p = malloc(sizeof(int) + (width * height));

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
