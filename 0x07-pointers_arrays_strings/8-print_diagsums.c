#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of two diagonals
* @a: int a
* @size: int size
*
* Description: this function prints the sum of two diagonals
*/
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		y = y + a[(size + 1) * i];
	}
	for (i = 0; i <= size; i++)
	{
		x = x + a[(size - 1) * i];
	}
	printf("%d, %d\n", y, x);
}
