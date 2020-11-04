#include "lists.h"
/**
  * delete_nodeint_at_index - delete node at index of a list
  * @head: list
  * @index: index to delete the node
  * Return: 1 if succeeded, 2 if failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *next, *temp;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (x = 0; temp != NULL && x < (index - 1); x++)
		temp = temp->next;

	if (!temp || temp->next == NULL)
		return (-1);

	next = temp->next->next;
	free(temp->next);
	temp->next = next;

	return (1);
}


