#include "lists.h"
/**
* add_dnodeint- add a new node at the beginning of a double list
* @head: pointer to the first element
* @n: int to put in the node;
*
* Description: this function adds a new node at the start of the double list
* Return: the new head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *aux = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;
	aux->prev = tmp;
	*head = tmp;
	return (tmp);
}
