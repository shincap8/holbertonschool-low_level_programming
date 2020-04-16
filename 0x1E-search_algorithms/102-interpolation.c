#include <stdio.h>
#include <math.h>
/**
* interpolation_search - searches for a value using the Interpolation algorithm
* @array: pointer of the first element of the array
* @size: number of elements in the array
* @value: value to search for
*
* Description: This function searches for a value using Interpolation algorithm
* Return: it returns a int
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, pos;

	if (array == NULL)
		return (-1);
	pos = min + (((double)(max - min) / (array[max] - array[min])) *
	(value - array[min]));
	if (pos > size)
	{
		printf("Value checked array[%d] is out of range\n", (int)pos);
		return (-1);
	}
	while (min <= max && value >= array[min] && value <= array[max])
	{
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] < value)
			min = pos + 1;
		else if (value < array[pos])
			max = pos - 1;
		else
			return ((int)pos);
		pos = min + (((double)(max - min) / (array[max] - array[min])) *
		(value - array[min]));
	}
	printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
	if (array[min] == value)
		return ((int)min);
	else
		return (-1);
}
