#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - go from n to 98
* @n: integer
*
* Description: this function print from n to 98
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
