#include <stdio.h>
/**
* startupfun- execute before main
*
* Description: this function execute before main
*/
void startupfun(void) __attribute__ ((constructor));
void startupfun(void)
{
	printf("You're beat! and yet, you must allow,\n
I bore my house upon my back!\n");
}
