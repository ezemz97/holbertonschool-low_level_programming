#include "lists.h"
/**
  * add_dnodeint - Return address of new beginning node
  * @head: head
  * @n: data
  * Return: New node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	/*if there is no head, return new as head*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* else, assign previous of head to new node and head as new */
	(*head)->prev = new;
	*head = new;
	return (new);
}
