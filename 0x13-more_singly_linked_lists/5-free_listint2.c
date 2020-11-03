#include "lists.h"
/**
  * free_listint2 - free list
  * @head: list
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	while (*head)
	{
		tmp = (**head).next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}

