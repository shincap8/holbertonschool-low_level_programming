#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - function that prints a variable type b
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
		putchar('1');
	else
		putchar('0');
}
