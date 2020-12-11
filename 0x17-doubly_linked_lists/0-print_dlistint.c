#include "lists.h"
/**
  * print_list - Prints all the elements of a list_t list
  * list_t - struct type
  * @h: string
  * Return: Number of nodes - -1 error
  */
 size_t print_dlistint(const dlistint_t *h)
 {
	int x;
	if (h == NULL || h == NULL)\
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
	
 }