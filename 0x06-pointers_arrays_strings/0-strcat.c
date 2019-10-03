#include "holberton.h"
/**
* *_strcat - concatenates two strings
* @dest: character des
* @src: character src
*
* Description: this function concatenates two strings
* Return: it returns a char
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
