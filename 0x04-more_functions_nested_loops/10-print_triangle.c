#include "holberton.h"
/**
* print_triangle - prints triangle
* @size: integersize
*
* Description: this function says if the letter is lower case
* Return: returns 1 if it is lower case if not 0
*/
void print_triangle(int size)
{
	int i, j, r;

	if (size > 0)
	{
		for (i = 1; i <= size, i++)
		{
			r = size - i;
			for (j = 1; j <= size; j++)
			{
				for (; j <= r;)
				{
					_putchar(' ');
				}
				if (j >= r)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
