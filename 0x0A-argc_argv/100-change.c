#include <stdio.h>
#include <stdlib.h>
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
	int ch, cents = 0;

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
		{
			ch = atoi(argv[1]);
			for (; ch > 0;)
			{
				if (ch % 25 == 0)
					ch = ch - 25;
				else if (ch % 10 == 0)
					ch = ch - 10;
				else if (ch % 5 == 0)
					ch = ch - 5;
				else if (ch % 2 == 0)
					ch = ch - 2;
				else
					ch = ch - 1;
				cents++;
			}
			printf("%d\n", cents);
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
