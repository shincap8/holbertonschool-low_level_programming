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
		return (0);
	}
	else
	{
		s = s + 1;
		return (1 + _strlen_recursion(s));
	}
}
/**
* ispal - function
* @i: integer i
* @j: integer j
* @str: char
*
* Description: This function gets the square of a number
* Return: it returns an int
*/
int ispal(char *str, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (str[i] != str[j])
	{
		return (0);
	}
	if (i < j + 1)
	{
		return (ispal(str, i + 1, j - 1));
	}
	return (1);
}
/**
* is_palindrome - return 1 if the string is palindrom 0 if not
* @s: char s
*
* Description: This function returns 1 if a string is palindrome 0 if not.
* Return: it returns an int
*/
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
	{
		return (1);
	}
	return (ispal(s, 0, n - 1));
}
