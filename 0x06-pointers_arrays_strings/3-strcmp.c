#include "holberton.h"
/**
* *_strcmp - compares two strings
* @s1: character s1
* @s2: character s2
*
* Description: this function compares two strings
* Return: it returns an int
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, r = 0, n = 0, k;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i > j)
		n = i;
	else
		n = j;
	for (k = 0; k < n ; k++)
	{
		if(s1[k] != s2[k])
		{
			r = s1[k] - s2[k];
			break;
		}
	}
	
	return (r);
}
