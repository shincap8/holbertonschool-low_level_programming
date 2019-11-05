#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* insert_nodeint_at_index- inserts a new node in x position
* @head: pointer to the first element
* @idx: index where the node is added
* @n: int of the new
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = aux;
		*head = new;
		return (new);
	}
	while (aux)
	{
		if (i == idx)
		{
			new->next = (aux)->next;
			aux->next = new;
			return (new);
		}
		i++;
		aux = aux->next;
	}
	return (NULL);
}
