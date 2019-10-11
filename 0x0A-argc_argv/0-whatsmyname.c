#include <stdio.h>
/**
* main - entry point
* @argv: array
* @argc: integer
*
* Description: This function prints a string followed by a new line
* Return: Always 0 (succes)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
