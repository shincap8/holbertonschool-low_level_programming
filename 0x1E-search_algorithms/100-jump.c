#include <stdio.h>
#include <math.h>
/**
* jump_search - searches for a value using the  Jump search algorithm
* @array: pointer of the first element of the array
* @size: number of elements in the array
* @value: value to search for
*
* Description: This function searches for a value using  Jump search algorithm
* Return: it returns a int
*/
int jump_search(int *array, size_t size, int value)
{
	int min = 0, max = sqrt((int)size), i;

	if (array == NULL)
		return (-1);
	while (min < ((int)size - 1) && array[max] < value)
	{
		printf("Value checked array[%d] = [%d]\n", min, array[min]);
		min = max;
		max = max + sqrt((int)size);
		if (min >= value)
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", min, array[min]);
	printf("Value found between indexes [%d] and [%d]\n", min, max);
	for (i = min; i <= (int)size - 1 && i < max; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
