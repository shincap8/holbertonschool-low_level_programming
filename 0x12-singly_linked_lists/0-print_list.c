#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* print_list- prints all elements of a list
* @h: pointer to the first element
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		nodes++;
	}

	return (nodes);
}
