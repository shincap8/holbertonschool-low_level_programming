#include "holberton.h"
#include <stdio.h>
/**
* get_bin - function that prints a variable type b
* @n: number
* @index: location of the number returned
* Return: the number in the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
		if (n == 0)
			return (-1);
	}
	return (n & 1);
}
