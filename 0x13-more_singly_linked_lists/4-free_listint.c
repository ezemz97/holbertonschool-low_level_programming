#include "lists.h"
/**
  * listint_t - free list
  * @head: list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

