#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a list
  * @head: list
  * @index: index of the node
  * Return: node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x <= index; x++)
	{
		if (head == NULL)
			return (NULL);
		if (x != index)
		{
			head = head->next;
		}
	}
	return (head);
}
