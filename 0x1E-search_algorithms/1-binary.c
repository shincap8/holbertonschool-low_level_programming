#include <stdio.h>
/**
* binary_search - searches for a value using the Binary search algorithm
* @array: pointer of the first element of the array
* @size: number of elements in the array
* @value: value to search for
*
* Description: This function searches for a value using Binary search algorithm
* Return: it returns a int
*/
int binary_search(int *array, size_t size, int value)
{
	int min = 0, max = (int)size - 1, i, mid;

	if (array == NULL)
		return (-1);
	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i == max)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (min + max)  / 2;
		if (array[mid] < value)
			min = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
