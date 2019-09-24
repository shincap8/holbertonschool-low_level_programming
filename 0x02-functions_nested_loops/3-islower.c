#include "holberton.h"
/**
* _islower - check the lower case
* @c: integerc
*
* Description: this function says if the letter is lower case
* Return: returns 1 if it is lower case if not 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
