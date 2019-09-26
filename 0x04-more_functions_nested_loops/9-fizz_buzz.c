#include <stdio.h>
/**
 * main - printing numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3) || !(i % 5))
		{
			if (!(i % 3))
			{
				printf("Fizz");
			}

			if (!(i % 5))
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
		}

		printf(" ");
	}

	printf("\n");

	return (0);
}
