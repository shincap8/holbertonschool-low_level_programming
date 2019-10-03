#include "holberton.h"
/**
* *_strncpy - copies a string
* @dest: character dest
* @src: character src
* @n: integer n
*
* Description: this function copies a string
* Return: it returns a char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (src[j])
		j++;
	for (i = 0; i < n; i++)
	{
		if (i >= j)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
