#include "holberton.h"
#include <stdlib.h>
/**
 * *_realloc - relocates a memory string;
 * @ptr: old pointer;
 * @old_size: old size;
 * @new_size: new size;
 *
 * Return: a pointer with the new space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		p[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (p);
}
