#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* free_list- free the list
* @head: pointer to the first element
*
* Description: this function frees the list
*/
void free_list(list_t *head)
{
	list_t *aux = head;

	while (aux)
	{
		free(head->str);
		free(head);
		head = aux->next;
		aux = aux->next;
	}
	free(head);
}
