#include "holberton.h"
#include <stdio.h>
/**
* flip_bits - get one number to another
* @n: number given
* @m: number given
* Return: 1 if it worked
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int compare = 0;

	compare = n ^ m;
	while (compare > 0)
	{
		if (compare & 1)
			count++;
		compare = compare >> 1;
	}
	return (count);
}
