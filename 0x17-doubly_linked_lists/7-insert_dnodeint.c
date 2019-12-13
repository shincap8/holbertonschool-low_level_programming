#include "lists.h"
/**
* insert_dnodeint_at_index- inserts a new node in x position
* @h: pointer to the first element
* @idx: index where the node is added
* @n: int of the new
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new;
	dlistint_t *aux = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = aux;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (aux)
	{
		if (i == idx)
		{
			new->next = aux->next;
			new->prev = aux;
			aux->next = new;
			new->next->prev = new;
			return (new);
		}
		i++;
		aux = aux->next;
	}
	return (NULL);
}
