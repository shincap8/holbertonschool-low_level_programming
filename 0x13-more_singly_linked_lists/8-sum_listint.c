#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* sum_listint- sum of all the data of a list
* @head: pointer to the first element
*
* Description: this function sum the data of a list
* Return: the sum of all data in the list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
