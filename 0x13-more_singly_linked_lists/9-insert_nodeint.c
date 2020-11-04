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
	unsigned int i;
	listint_t *tmp, *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	for (i = 0; i < (idx - 1) && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
