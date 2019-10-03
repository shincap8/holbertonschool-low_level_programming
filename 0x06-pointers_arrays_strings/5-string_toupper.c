#include "holberton.h"
/**
* *string_toupper - change lowercase to uppercase
* @l: character l
*
* Description: this function changes all lowercase of a string to uppercase
* Return: it returns a char
*/
char *string_toupper(char *l)
{
	int i;

	i = 0;
	while (l[i])
	{
		if (l[i] >= 97 && l[i] <= 122)
		{
			l[i] = l[i] - 32;
		}
		i++;
	}
	return (l);
}
