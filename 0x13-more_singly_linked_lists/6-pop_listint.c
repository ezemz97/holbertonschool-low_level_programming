#include "lists.h"
/**
  * pop_listint - deletes the head node of a list and returns the head's data
  * @head: list
  * Return: head node's data
  */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	listint_t *tmph, *tmp;
	int data;

	tmph = *head;
	data = tmph->n;
	tmp = tmph->next;
	free(*head);
	*head = tmp;
	return (data);
}

