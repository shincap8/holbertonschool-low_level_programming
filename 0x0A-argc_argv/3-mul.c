#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: int
* @argv: array
*
* Return: Always 0 (Succes)
*/
int main(int argc, char *argv[])
{
	int prct;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prct = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prct);
		return (0);
	}
}
