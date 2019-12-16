#include "lists.h"
/**
* sum_dlistint- sum of all the data of a double list
* @head: pointer to the first element
*
* Description: this function sum the data of a double list
* Return: the sum of all data in the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	if (head->prev != NULL)
	{
		while (head->prev)
			head = head->prev;
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
