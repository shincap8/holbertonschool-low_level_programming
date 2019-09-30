#include "holberton.h"
#include <stdio.h>
/**
* rev_string - function that reverses a string
* @s: integers
*
* Description: this function reverses a string
*/
void rev_string(char *s)
{
	char a, b;
	int i, j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= j; i--)
	{
		a = s[i];
		b = s[j];
		s[j] = a;
		s[i] = b;
		j++;
	}
}
