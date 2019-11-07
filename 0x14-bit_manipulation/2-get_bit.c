#include "holberton.h"
#include <stdio.h>
/**
* get_bit - gets the bit at a given index
* @n: number
* @index: location of the number returned
* Return: the number in the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index == 0)
		return (0);
	if (size_of(n) >= 8)
		return (-1);
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
		if (n == 0)
			return (-1);
	}
	return (n & 1);
}
