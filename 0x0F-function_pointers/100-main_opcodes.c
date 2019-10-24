nclude "3-calc.h"
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
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1] < 0))
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
