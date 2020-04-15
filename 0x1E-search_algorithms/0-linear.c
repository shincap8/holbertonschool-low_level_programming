#include <stdio.h>
/**
* linear_search - searches for a value using the Linear search algorithm
* @array: pointer of the first element of the array
* @size: number of elements in the array
* @value: value to search for
*
* Description: This function search for a value using linear search algorithm
* Return: it returns a int
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
