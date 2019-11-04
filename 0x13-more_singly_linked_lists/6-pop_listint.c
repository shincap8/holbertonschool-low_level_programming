#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* pop_listint- delete the head node
* @head: pointer to the first element
*
* Description: this function deletes the head node
* Return: the head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (0);
	tmp = (*head)->next;
	n = (*head)->n;
	free(head);
	*head = tmp;
	free(tmp);
	return (n);
}
