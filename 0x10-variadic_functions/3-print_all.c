#include <stdarg.h>
#include <stdio.h>
/**
* print_all- prints anything
* @format: format
* @...: argumnets passed
*
* Description: this function prints anything
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, n = 0;
	char *s;

	while (format[n] == && format)
		n++;
	va_start(list, format);
	while (i < n)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if ((format[i] == 'i' || format[i] == 'c' ||
format[i] == 'f' || format[i] == 's') && i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
