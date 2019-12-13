#include "holberton.h"
#include <stdio.h>
/**
* set_bit - sets the value of a bit 1
* @n: number given
* @index: index
* Return: 1 if it worked
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
