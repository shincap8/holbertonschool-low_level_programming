#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - memory for an array
 * @nmemb: unsigned int nmemb
 * @size: unsigned int
 *
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0, n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	n = nmemb * size;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
