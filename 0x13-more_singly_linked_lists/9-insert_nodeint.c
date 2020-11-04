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
	unsigned int i = 0;
	listint_t *tmp, *new;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (i < idx - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
