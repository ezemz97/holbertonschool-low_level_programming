#include "lists.h"
/**
 * free_dlistint - Free list
 * @head: Head
 * Return: void.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	if (!head)
		return;
	h = head;
	while (head)
	{
		head = head->next;
		free(h);
	}
	free(head);
}
