#include <stdio.h>
/**
 * main - printing numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, a, n, b, c, p;
	double n;

	n = 612852475143;
	for (a = 2; a <= n; a++)
	{
		c = 0;
		f = 0;
		for (b = 2; b <= a; b++)
		{
			if ((a % b) == 0)
			{
				c++;
				if (a == b && c == 1)
				{
					f = 1;
				}
			}
		}
		if (f != 0)
		{
			if ((n % a) == 0)
			{
				p = a;
				n = n / a;
			}
		}
	}
	printf("%d", p);
	printf("\n");

	return (0);
}
