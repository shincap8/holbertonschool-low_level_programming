#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free a 2 dimensional gridi
 * @grid: number of char in the array
 * @height: character that needs to put in the array
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
