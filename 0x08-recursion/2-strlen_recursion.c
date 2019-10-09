#include "holberton.h"
/**
* _strlen_recursion - return the lenght of a string
* @s: character s
*
* Description: This function returns the lenght of a string 
* Return: it returns a int
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return(0);
	}
	else
	{
		s = s + 1;
		return(1 +_strlen_recursion(s));
	}
}
