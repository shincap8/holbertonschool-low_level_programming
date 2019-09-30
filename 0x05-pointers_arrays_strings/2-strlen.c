#include "holberton.h"
/**
* _strlen- returns the length of a string
* @s: character s
*
* Description: this function returns the length of a string
* Return: returns i that is the count of the characters in the string|
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
