#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* delete_nodeint_at_index- delete a new node in x position
* @head: pointer to the first element
* @index: index where the node is added
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *remove, *tmp;

	if (head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if (tmp == NULL)
			return (-1);
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			remove = tmp->next;
			tmp->next = remove->next;
			free(remove);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
