#include "lists.h"
/**
  * insert_nodeint_at_index - insert new node at a given position
  * @head: list
  * @idx: index to add node
  * @n: new node data
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *cabeza, *new;
	cabeza = *head;
	new = malloc(sizeof(listint_t));

	for (x = 0; x <= idx; x++)
	{
		if (cabeza == NULL)
			return (NULL);
		if (x != idx - 1)
			cabeza = cabeza->next;
		else
		{
			new->n = n;
			new->next = cabeza->next;
			cabeza->next = new;
		}
	}
	return (new);
}


