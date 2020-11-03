#include "lists.h"
/**
  * add_nodeint_end - add a node at the end of the list
  * @head: double pointer to head node
  * @n: int data value
  * Return: new node - null if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *tmp = NULL;

	new = malloc(sizeof(listint_t));
	tmp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next; /* move to next node */
	}
	tmp->next = new;
	return (new);
}
