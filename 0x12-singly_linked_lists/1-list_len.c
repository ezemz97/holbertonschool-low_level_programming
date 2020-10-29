#include "lists.h"
/**
  * list_len - Prints all the elements of a list_t list
  * list_t - struct type
  * @h: string
  * Return: Number of nodes - -1 error
  */
size_t list_len(const list_t *h)
{
	int x = 0;

	if (h == NULL || h == NULL)
		return (0);
	while (h != NULL)
	{
		/* Assign (or move) h as the next values of the list (from main) */
		h = h->next;
		x++;
	}
	return (x);
}

