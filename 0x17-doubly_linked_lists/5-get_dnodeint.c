#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head node
 * @index: n node of the list
 * Return: the n node of a list
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;

	h = head;
	while (index)
	{
		if (!h->next)
			return (NULL);
		h = h->next;
		index--;
	}
	return (h);
}
