#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* list_len- return
* @h: pointer to the first element
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = (*h).next;
		nodes++;
	}
	return (nodes);
}
