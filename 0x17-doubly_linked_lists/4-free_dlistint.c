#include "lists.h"
/**
* free_dlistint- free the list
* @head: pointer to the first element
*
* Description: this function frees the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (aux)
	{
		free(head);
		head = aux->next;
		aux = aux->next;
	}
	free(head);
}
