#include "function_pointers.h"
/**
* int_index- sesarches for an integer
* @array: array of integers
* @size: size of the array
* @cmp: pointer to a function
*
* Description: this function searches for an integer
* Return: returns the index of the first element where cmp don't return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
