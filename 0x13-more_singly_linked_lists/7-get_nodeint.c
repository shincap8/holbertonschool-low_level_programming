#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* get_nodeint_at_index- returns the nth node of a list
* @head: pointer to the first element
* @index: index of the node to return;
*
* Description: this function adds a new node at the start of the list
* Return: the new head
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = malloc(sizeof(listint_t));
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
