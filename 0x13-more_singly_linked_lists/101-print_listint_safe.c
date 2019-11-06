#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* print_listint_safe- prints all elements of a list
* @head: pointer to the first element
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *follow, *now;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		now = head, follow = head->next;
		nodes++;
		if (follow > now)
			return (nodes);
		head = head->next;
	}

	return (nodes);
}
