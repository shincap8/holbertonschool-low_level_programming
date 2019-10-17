#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: int min
 * @max: int max
 *
 * Return: an int
 */
int *array_range(int min, int max)
{
	int *p;
	int i, n, x;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;
	p = malloc(sizeof(int) * n);
	if (p == NULL)
		return (NULL);
	x = min;
	for (i = 0; i <= n; i++)
	{
		p[i] = x;
		x++;
	}
	return (p);
}
