#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* free_listint- free the list
* @head: pointer to the first element
*
* Description: this function frees the list
*/
void free_listint(listint_t *head)
{
	listint_t *aux = head;

	while (aux)
	{
		free(head);
		head = aux->next;
		aux = aux->next;
	}
	free(head);
}
