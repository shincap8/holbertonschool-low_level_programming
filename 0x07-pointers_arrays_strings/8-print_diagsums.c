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
	int i, x = 0, y = 0, p;

	p = size - 1;
	for (i = 0; i <= size i++)
	{
		x = x + (a + (p*i))[0];
		y = y + (a + ((size + 1)*i))[0];
	}
	printf("%d, %d\n", y, x);
}
