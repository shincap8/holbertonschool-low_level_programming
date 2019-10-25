#include <stdio.h>
#include <stdarg.h>
/**
* print_strings- prints strings
* @separator: pointer char
* @n: number of arguments
* @...: arguments passed
*
* Description: this function prints strings followed by a new line
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
			printf("(nill)");
		else
			printf("%s", string);
		if (i == (n - 1))
			printf("\n");
		else
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(list);
}
