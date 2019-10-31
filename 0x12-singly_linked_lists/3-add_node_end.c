#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node_end- add a new node at the end of a list
* @head: pointer to the first element
* @str: string to put in the node;
*
* Description: this function adds a new node at the end of a list
* Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;
	list_t *aux = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i])
		i++;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	return (new);
}
