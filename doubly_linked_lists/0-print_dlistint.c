#include "lists.h"
/**
* print_dlistint - print all elements of a dlistint_t list
* @h: pointer to list
*
* Return the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t count = 0;
	tmp = h;

	while (temp != NULL)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
