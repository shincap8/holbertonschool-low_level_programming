#include "lists.h"
/**
* delete_dnodeint_at_index- delete a node in x position
* @head: pointer to the first element
* @index: index where the node is added
*
* Description: this function deletes a node in x position
* Return: 1 if succes -1 if not
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
		if (i == index && tmp->next != NULL)
		{
			remove = tmp->next;
			tmp->next = remove->next;
			remove->next->prev = tmp;
			free(remove);
			return (1);
		}
		if (i == index && tmp->next == NULL)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
