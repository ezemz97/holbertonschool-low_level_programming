#include "lists.h"
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
