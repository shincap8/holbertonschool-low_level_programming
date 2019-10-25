#include <stdarg.h>
#include <stdio.h>
/**
* array_iterator- execute a function on each element of an array
* @array: array of int
* @size: size of the array
* @action: pointer to a function
*
* Description: this function execute a function on each element of an array
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, n = 0;
	char *s;

	while (format[n])
		n++;
	va_start(list, format);
	while (i < n)
	{
		switch(format[i])
		{
			case 'c' :
				printf("%c", va_arg(list, int));
				break;
			case 'i' :
				printf("%d", va_arg(list, int));
				break;
			case 'f' :
				printf("%f", va_arg(list, double));
				break;
			case 's' :
				s = va_arg(list, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if ((format[i] == 'i' || format[i] == 'c' || format[i] == 'f' || format[i] == 's') && i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
