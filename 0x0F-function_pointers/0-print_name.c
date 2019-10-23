#include "function_pointers.h"
/**
* print_name- prints a name
* @name: character name
* @f: pointer to a function
*
* Description: this function prints a name
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
