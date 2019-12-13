#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* free_listint_safe- prints all elements of a list and free memory
* @h: pointer to the first element
*
* Description: this function prints all elements of a list and free memory
* Return: the number of nodes in the list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *before, *aux = *h;

	if (h == NULL)
		return (0);
	while (aux)
	{
		nodes++;
		if ((aux->next) >= aux)
		{
			return (nodes);
		}
		before = aux;
		aux = aux->next;
		free(before);
	}
	*h = NULL;
	return (nodes);
}
