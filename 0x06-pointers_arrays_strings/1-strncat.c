#include "holberton.h"
#include <stdio.h>
/**
* *_strncat - concatenates two strings
* @dest: character des
* @src: character src
* @n: integer n
*
* Description: this function concatenates two strings
* Return: it returns a char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return(dest);
}
