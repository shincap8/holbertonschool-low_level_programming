#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers- print numbers followed by a new line
* @separator: pointer char
* @n: number of arguments
* @...: variable passed by arguments
*
* Description: this function prints numbers followed by a new line
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
