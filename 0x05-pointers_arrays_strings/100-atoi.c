#include "holberton.h"
#include <stdio.h>
/**
* -atoi - convert a string to an integer
* @s: integer s
*
* Description: this function converts a string to an integer
* Return: it returns an integer
*/
int _atoi(char *s)
{
	unsigned int x;
	int i, y, sig, j;

	i = 0;
	sig = 1;
	j = 0;
	x = 0;
	while (s[i] != '\0')
	{
		y = s[i];
		if (y == 45)
			sig = sig * -1;
		if (y >= 48 && y <= 57)
		{
			y = s[i] - 48;			
			if (x == 0)
				x = y;
			else
				x = (x * 10) + y;
			j++;
		}
		else if (j > 0)
			break;
		i++;
	}
	x = x * sig;
	return(x);
}
