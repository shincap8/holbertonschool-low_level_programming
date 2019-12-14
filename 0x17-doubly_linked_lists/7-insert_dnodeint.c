#include "lists.h"
/**
* insert_dnodeint_at_index- inserts a new node in x position
* @h: pointer to the first element
* @idx: index where the node is added
* @n: int of the new
*
* Description: this function inserts a node in x position
* Return: the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new, *tmp, *aux = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (aux)
	{
		tmp = aux->next;
		if (i == idx && aux->next != NULL)
		{
			new->next = tmp;
			new->prev = aux;
			aux->next = new;
			tmp->prev = new;
			return (new);
		}
		if (i == idx && aux->next == NULL)
		{
			new->next = NULL;
			new->prev = aux;
			aux->next = new;
		}
		i++;
		aux = aux->next;
	}
	return (NULL);
}
