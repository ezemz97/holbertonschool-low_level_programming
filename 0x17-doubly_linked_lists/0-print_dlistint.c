#include "lists.h"
/**
  * print_dlistint - Prints all the elements of a dlistint_t list
  * dlistint_t - struct type
  * @h: head
  * Return: Number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (x);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
