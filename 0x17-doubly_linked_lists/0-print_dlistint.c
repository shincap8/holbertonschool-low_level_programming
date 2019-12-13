#include "lists.h"
/**
* print_dlistint- prints all elements of a double list
* @h: pointer to the first element
*
* Description: this function prints all elements of a double list
* Return: the number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h->prev != NULL)
	{
		while (h->prev)
			h = h->prev;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
