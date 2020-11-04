#include "lists.h"
/**
  * pop_listint - deletes the head node of a list and returns the head's data
  * @head: list
  * Return: head node's data
  */
int pop_listint(listint_t **head)
{
	listint_t *tmph, *tmp;
	int data;

	tmph = *head;
	if (!tmph)
		return (0);
	data = tmph->n;
	tmp = tmph->next;
	free(*head);
	*head = tmp;
	return (data);
}


