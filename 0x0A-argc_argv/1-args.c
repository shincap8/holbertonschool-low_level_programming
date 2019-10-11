#include <stdio.h>
/**
* main - Entry point
* @argc: int
* @argv: array
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	argv[argc] = argv[argc];
	return (0);
}
