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
	int i, j;
	int **x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(x[i]);
			}
			free(x);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
}
