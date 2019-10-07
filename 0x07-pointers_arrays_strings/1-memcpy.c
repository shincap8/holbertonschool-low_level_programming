#include "holberton.h"
/**
* *_memcpy - copies memory area
* @dest: character des
* @src: character src
* @n : integer n
*
* Description: this function copies memory area
* Return: it returns a char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	int j = 0;


	for (; i < n; i++)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
