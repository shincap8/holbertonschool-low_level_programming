#include <stdio.h>
#include "search_algos.h"
/**
* exponential_search - searches for a value using the Exponential algorithm
* @array: pointer of the first element of the array
* @size: number of elements in the array
* @value: value to search for
*
* Description: This function searches for a value using Exponential algorithm
* Return: it returns a int
*/
int exponential_search(int *array, size_t size, int value)
{
	int range = 1;
	int min, max = (int)size - 1, i, mid;

	if (array == NULL)
		return (-1);
	while (range < (int)size && array[range] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", range, array[range]);
		range = range * 2;
	}
	max = range;
	range = range / 2;
	min = range;
	if (max > (int)size - 1)
		max = (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", min, max);
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
		mid = (min + max) / 2;
		if (array[mid] < value)
			min = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
