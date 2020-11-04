#include "lists.h"
/**
  * print_listint - print all elements of a int list
  * @h: list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		if (h->n < 0)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		count++;
		h = h->next;
	}
	return (count);
}
