#include <stdio.h>
void startupfun(void) __attribute__ ((constructor));
/**
* startupfun- execute before main
*
* Description: this function execute before main
*/
void startupfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
