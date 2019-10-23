#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Entry point
* @argc: int
* @argv: array
*
* Return: Always 0 (Succes)
*/
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *o = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*o !='+' || *o != '-' || *o != '*' || *o !='/' || *o != '%') && o[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*o == '/' || *o == '%') && *o == '0')
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = (get_op_func(o)(num1, num2));
	printf("%d\n", calc);
	return (0);
}
