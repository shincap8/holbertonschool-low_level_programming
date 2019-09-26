#include "holberton.h"
/**
* _isupper - check the lower case
* @c: integerc
*
* Description: this function says if the letter is lower case
* Return: returns 1 if it is lower case if not 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return  (0);
	}
}
