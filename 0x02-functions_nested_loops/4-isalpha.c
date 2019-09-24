#include "holberton.h"
/**
* _isalpha - check if the variable is a letter
* @c: a number o a letter
*
* Description: this function checks if c is a letter no matter the case
* Return: it returns 1 if the variable c is a letter if not 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
