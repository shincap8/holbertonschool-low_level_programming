#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point
* @argc: int
* @argv: array
*
* Return: Always 0 (Succes)
*/
int main(int argc, char *argv[])
{
	int i, j, add = 0;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			j = 0;
			while (p[j])
			{
				if (isdigit(p[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			if (atoi(argv[i]) >= 0)
			{
				add = add + atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
