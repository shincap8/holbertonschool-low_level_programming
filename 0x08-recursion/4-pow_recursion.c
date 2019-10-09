#include "holberton.h"
/**
* _pow_recursion - returns x raised to the power of y
* @x: character x
* @y: character y
*
* Description: this function returns the value of x raised to the power of y
* Return: it returns a int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
