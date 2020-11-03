#include "lists.h"
/**
  * delete_nodeint_at_index - delete node at index of a list
  * @head: list
  * @index: index to delete the node
  * Return: 1 if succeeded, 2 if failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *cabeza, *tmp;
	cabeza = *head;

	for (x = 0; x <= index; x++)
	{
		if (x != index - 1)
		{
			tmp = cabeza->next;
			free(cabeza->next);
			cabeza = tmp;
		}
		else if (x == index)
		{
			free(cabeza);
			cabeza->next = tmp;
		}

	}
	return (1);
}


