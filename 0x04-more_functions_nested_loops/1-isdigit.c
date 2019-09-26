#include "holberton.h"
/**
* _isdigit - check the digit
* @c: integerc
*
* Description: this function tells if the variable is a digit
* Return: returns 1 if it is a digit if not 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
