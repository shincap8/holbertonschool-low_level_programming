#include "lists.h"
/**
* dlistint_len- counts all elements of a double list
* @h: pointer to the header
*
* Description: this function counts all elements of a double list
* Return: the number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
