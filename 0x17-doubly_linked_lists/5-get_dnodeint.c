#include "lists.h"
/**
* get_dnodeint_at_index- returns the nth node of a double list
* @head: pointer to the first element
* @index: index of the node to return;
*
* Description: this function gets the nth node of a double list
* Return: the new head
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
		{
			node = head;
			return (node);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
