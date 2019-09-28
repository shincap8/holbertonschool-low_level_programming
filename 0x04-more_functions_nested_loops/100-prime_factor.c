#include <stdio.h>
/**
 * main - printing numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, a;
	long n;

	n = 612852475143;
	a = 2;
	while (a <= n)
	{
		if ((n % a) == 0)
		{
			f = a;
			n = n / a;
			a = 1;
		}
		if (n == 1)
		{
			break;
		}
		a++;
	}
	printf("%d", f);
	printf("\n");

	return (0);
}
