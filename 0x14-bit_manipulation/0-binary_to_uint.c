#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of 0 and 1;
 * Return: the number converted from binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, y = 0;
	int i = 0, pow = 1;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	while (i >= 0)
	{
		y = b[i] - 48;
		x = x + (y * pow);
		pow = pow * 2;
		i--;
	}
	return (x);
}
