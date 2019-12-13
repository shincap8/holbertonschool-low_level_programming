#include "lists.h"
/**
* delete_dnodeint_at_index- delete a node in x position
* @head: pointer to the first element
* @index: index where the node is added
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 1;
	dlistint_t *remove, *tmp;

	if (head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if (tmp == NULL)
			return (-1);
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			remove = tmp->next;
			tmp->next = remove->next;
			remove->next->prev = tmp;
			free(remove);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
