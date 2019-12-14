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
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
