#include "lists.h"
/**
* add_dnodeint_end- add a new node at the end of a double list
* @head: pointer to the first element
* @n: int to put in the node;
*
* Description: this function adds a new node at the end of a doublelist
* Return: the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	return (new);
}
