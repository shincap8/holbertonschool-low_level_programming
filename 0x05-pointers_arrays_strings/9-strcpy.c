#include "holberton.h"
/**
* *_strcpy - copies a string
* @dest: character des
* @src: character src
*
* Description: this function writes a string in reverse
* Return: it returns a char
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
