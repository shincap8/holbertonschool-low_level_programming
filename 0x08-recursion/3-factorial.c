#include "holberton.h"
/**
* factorial - return the factorial of a number
* @n: character n
*
* Description: This function returns the factorial of a number
* Return: it returns a int
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
