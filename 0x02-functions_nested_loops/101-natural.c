#include <stdio.h>
/**
 * main - using my own library
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, add;
	int mul[1000];
	int l = 0;

	for (i = 3; i < 1024; i = i + 3)
	{
		mul[l] = i;
		l++;
	}
	for (k = 5; k < 1024; k = k + 5)
	{
		mul[l] = k;
		l++;
	}
	for (j = 0; j <= l; j++)
	{
		add = add + mul[j];
	}
	printf("%d", add);
	printf("\n");
	return (0);
}
