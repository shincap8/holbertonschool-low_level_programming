#include "holberton.h"
/**
* factor - gets the prime factor
* @x: integer x
* @y: integer y
*
* Description: This function gets the prime factor
* Return: it returns an int
*/
int factor(int x, int y)
{
	if (y < x)
	{
		if ((x % y) == 0)
		{	
			return (0);
		}
		else
		{
			factor (x, (y + 1));
		}
	} 
	return (1);
}
/**
* is_prim_number - tell if the number is a prime factor
* @n: int n
*
* Description: This function returns 1 if is prime factor 0 is not
* Return: it returns an int
*/
int is_prime_number(int n)
{
	int res = 0;

	if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	else
	{
		res = res + factor(n, 2);
	}
	if (res == 0)
	res = 0;
	else
	res = 1;
	return (res);
}
