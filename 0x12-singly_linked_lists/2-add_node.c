#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node- add a new node at the beginning of a list
* @head: pointer to the first element
* @str: string to put in the node;
*
* Description: this function adds a new node at the start of the list
* Return: the new head
*/
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	while (str[i])
		i++;

	(*tmp).str = strdup(str);
	(*tmp).len = i;
	(*tmp).next = *head;
	*head = tmp;
	return (tmp);
}
