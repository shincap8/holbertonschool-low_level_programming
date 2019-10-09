#include "holberton.h"
/**
* sqre - gets the square root of a number
* @x: integer x
* @y: integer y
*
* Description: This function gets the square of a number
* Return: it returns an int
*/
int sqre(int x, int y)
{
	int res;

	res = x / y;
	if (y == res)
	{
		if ((res * res) == x)
		{
			return (res);
		}
		else
			return (-1);
	}
	else
	{
		return (sqre(x, y - 1));
	}
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: int n
*
* Description: This function returns the natural square root of a number
* Return: it returns an int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqre(n, n));
	}
}
