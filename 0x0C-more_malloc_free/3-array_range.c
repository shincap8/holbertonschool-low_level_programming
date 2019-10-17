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
	int i, n = min, x = min;

	if (min > max)
		return (NULL);
	while (n <= max)
		n++;
	p = malloc(sizeof(int) * n);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= n; i++)
	{
		p[i] = x;
		x++;
	}
	return (p);
}
