#include "lists.h"
/**
  * insert_nodeint_at_index - insert new node at a given position
  * @head: list
  * @idx: index to add node
  * @n: new node data
  * Return: new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *cabeza, *new;

	if (!head)
		return (NULL);
	cabeza = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = cabeza;
		*head = new;
		return (new);
	}
	for (x = 0; x < idx - 1; x++)
	{
		cabeza = cabeza->next;
	}
	new->next = cabeza->next;
	cabeza->next = new;
	return (new);
}


