#include "holberton.h"
#include <stdio.h>
/**
* print_array - write n elements of an array
* @a: integer a
* @n: integer n
*
* Description: this function writes n elements of an array
*/
void print_array(int *a, int n)
{
	int i;

	n--;
	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
