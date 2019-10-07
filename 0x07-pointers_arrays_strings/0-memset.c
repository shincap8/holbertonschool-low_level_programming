#include "holberton.h"
/**
* *_memset - fill memory
* @s: character s
* @b: character b
* @n: integer n
*
* Description: This function fills the memory with a constant byte
* Return: it returns a char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	int j;

	while (s[j])
	{
		for (j = 0; i <= n; j++)
		{
			if (i == n)
			{
				break;
			}
			else
			{
				s[j] = b;
			}
			i++;
		}
	}
	return (s);
}
