#include "holberton.h"
/**
* printprint_last_digit - prints the last digit of a number
* @int: n is an integer
*
* Description: This function prints the last digit of a number
* Return: the last digit
*/
int print_last_digit(int);
{
	int n;

	n = n % 10;

	_putchar('0' + n);
	return (n);
}
