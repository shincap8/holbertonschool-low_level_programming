#include <stdio.h>
/**
* startupfun- prints all elements of a list
* @h: pointer to the first element
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
void startupfun (void) __attribute__ ((constructor));
void startupfun (void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
