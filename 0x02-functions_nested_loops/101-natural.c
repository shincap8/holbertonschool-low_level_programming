#include <stdio.h>
/**
 * main - using my own library
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, s = 0, r;
	int m[545];

	r = 0;

	for (i = 3; i < 1024; i = i + 3)
	{
		m[r] = i;
		r++;
	}
	for (k = 5; k < 1024; k = k + 5)
	{
		m[r] = k;
		r++;
	}
	for (j = 0; j < r; j++)
	{
		s = s + m[j];
	}

	printf("%d", s);
	printf("\n");
	return (0);
}
