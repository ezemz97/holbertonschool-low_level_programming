#include "lists.h"
/**
  * listint_len - return number of elements of a list
  * @h: list
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("null string\n");
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
