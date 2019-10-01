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
	int i, j, y;

	i = 0;
	j = 1;
	x = 0;
	while (s[i] != '\0')
	{
		y = s[i];
		printf("%d", y);
		printf("\n");
		if(y >= 48 && y <= 57)
		{
			y = s[i] - 48;
			printf("%d, ", y);			
			if(x == 0)
			{
				x = y;
				j = j * 10;
			}
			else
			{
				x = (x * j) + y;
				j = j * 10;
			}
		}
		i++;
	}
	printf("%d", x);
	return(x);
}
