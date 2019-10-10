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

	if (x < 0 || y == 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
		res = x / y;
		if (y == res && x % res == 0)
		{
			return (res);
		}
		else
		{
			return (sqre(x, y - 1));
		}
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
	return (sqre(n, n));
}
