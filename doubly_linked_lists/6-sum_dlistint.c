#include "lists.h"
/**
* sum_dlistint - return the sum of all the data (n) if a dlistint_t list
* @head: pointer to the head of the doubly linked list
*
* Return: sum of all data, or 0 is list empty
*/
int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
