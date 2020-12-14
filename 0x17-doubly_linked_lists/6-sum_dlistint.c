#include "lists.h"
/**
 * sum_dlistint - sum the data (n) of all the nodes
 * @head: head node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
