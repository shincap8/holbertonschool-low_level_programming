#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* reverse_listint- free the list
* @head: pointer to the first element
*
* Description: this function reverse the list
* Return: pointer to the new first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = *head, *follow;

	if (head == NULL)
		return (NULL);
	*head = (*head)->next;
	aux->next = NULL;
	follow = *head;
	while (follow->next)
	{
		*head = (*head)->next;
		follow->next = aux;
		aux = follow;
		follow = *head;
	}
	follow->next = aux;
	return (follow);
}
