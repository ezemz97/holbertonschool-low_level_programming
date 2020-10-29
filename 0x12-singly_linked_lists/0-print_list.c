#include "lists.h"
/**
  * print_list - Prints all the elements of a list_t list
  * list_t - struct type
  * @h: string
  * Return: Number of nodes - -1 error
  */
size_t print_list(const list_t *h)
{
	int x = 0;

	if (h == NULL || h == NULL)
		return (-1);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		/* Assign (or move) h as the next values of the list (from main) */
		h = h->next;
		x++;
	}
	return (x);
}

