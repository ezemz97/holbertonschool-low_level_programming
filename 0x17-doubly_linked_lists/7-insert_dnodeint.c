#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert node at given position
 * @h: head of list
 * @idx: index (position to add node to)
 * @n: data to store in the new node
 * Return: new node or null if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head = *h;
	size_t len = 0;

	len = dlistint_len(*h);
	if (!*h || idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == len)
		return (add_dnodeint_end(h, n));
	else if (idx > len)
		return (NULL);
	while (idx--)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = head;
	new->prev = head->prev;
	head->prev->next = new;
	head->prev = new;
	return (new);
}
/**
  * dlistint_len - Return number of nodes of a dlistint_t list
  * dlistint_t - struct type
  * @h: head
  * Return: Number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (x);
	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
