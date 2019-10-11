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
	if (y * y == x)
	{
		return (y);
	}
	if (y > (x / 2))
	{
		return (-1);
	}
	y++;
	y = sqre(x, y);
	return (y);
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
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqre(n, 1));
	}
}
