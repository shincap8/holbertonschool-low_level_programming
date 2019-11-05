#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* free_listint2- free the list
* @head: pointer to the first element
*
* Description: this function frees the list
*/
void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	if (head == NULL)
		return;
	while (aux)
	{
		free(*head);
		*head = aux->next;
		if (*head == NULL)
			head = NULL;
		aux = aux->next;
	}
}
