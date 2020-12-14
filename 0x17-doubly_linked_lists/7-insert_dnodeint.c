#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head;

	while (idx--)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	if (!*h || !(*h)->prev)
		new = add_dnodeint(h, n);
	else if (!head->next)
		new = add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		head->prev->next = new;
		head->next->prev = new;
		new->next = head;
		new->prev = head->prev;
	}
	return (new);
}
