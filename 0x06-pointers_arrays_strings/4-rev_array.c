#include "holberton.h"
/**
* reverse_array - reverses an array
* @a: character a
* @n: character n
*
* Description: this function reverses the content of an array of integers
*/
void reverse_array(int *a, int n)
{
	int i = n - 1, j, x;

	for (j = 0; j <= i; j++)
	{
		x = a[j];
		a[j] = a[i];
		a[i] = x;
		i--;
	}
}
