#include "lists.h"
/**
  * add_nodeint - add a node at the start of the list
  * @head: double pointer to head node
  * @n: int data value
  * Return: new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

