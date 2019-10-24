#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* get_op_func- getsthe operator of the function
* @s: pointer to a function
*
* Description: this function call another function to do the operation
* Return: a pointer to a function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
