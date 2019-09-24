#include "holberton.h"
/**
* _abs - computes the absolute value of an integer
* @n: n is an integer
*
* Description: This function prints the sign of the variable
* Return: it return 1 if n is positive, -1 if n is negative, 0 if is 0
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}
