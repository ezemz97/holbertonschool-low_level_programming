#include "lists.h"
/**
 * sum_dlistint - sum the data (n) of all the nodes
 * @head: head node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int sum = head->n;

	if (!head)
		return (0);
	h = head;
	while (h->next)
	{
		h = h->next;
		sum += h->n;
		
	}
	return (sum);
}