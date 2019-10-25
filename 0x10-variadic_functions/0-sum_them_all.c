#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - add all the parameters
* @n: const unsigned int n
* @...: variable arguments
*
* Description: This function add all the paremeters passed
* Return: it returns a int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int add = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
		add = add + va_arg(list, int);
	va_end(list);
	return (add);
}
