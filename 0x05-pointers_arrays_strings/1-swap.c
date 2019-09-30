#include "holberton.h"
/**
* swap_int - swap the value of two integers
* @a: pointer a
* @b: pointer b
*
* Description: This function swaps the value of two integers
*/
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
