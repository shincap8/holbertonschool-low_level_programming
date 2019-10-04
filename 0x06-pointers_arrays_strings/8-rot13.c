#include "holberton.h"
/**
* *rot13 - encodes a sstring into 1337
* @s: character s
*
* Description: this function writes a string in reverse
* Return: it returns a char
*/
char *rot13(char *s)
{
	int i = 0, j;
	char M1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char M2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == M1[j])
			{
				s[i] = M2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
