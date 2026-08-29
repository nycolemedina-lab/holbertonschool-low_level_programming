#include "lists.h"
/**
* get_dlistint_at_index - return the nth node of a dlistin_t linked list
* @head: pointer to the head of the doubly linked list
* @index: index of the node, starting from 0
*
* Return: pointer to the nth node, or NULL if failed
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head == NULL)
	{
		if (count == index)
			return (head);

		count++;
		head = head->next;
	}
	return (NULL);

}
