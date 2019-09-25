#include <stdio.h>
/**
 * main - using my own library
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, add, l;
	int *mul;
	l = 0;

	for (i = 3; i < 1024; i+3)
	{		
		if ((1024 % i) == 0)
		{
			mul[l] = i;
			l++;
		}
	}
	for (k = 5; k < 1024; k+5)
	{
		if ((1024 % k) == 0)
		{
			mul[l] = k;
			l++;
		}
	}
	for (j = 0; j <= l; j++)
	{
		add = add + mul[j];
	}
	printf("%d", add);
	printf("\n");
	return (0);
}
