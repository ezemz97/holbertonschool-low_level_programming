#include "lists.h"
/**
  * add_node_end - add node to the end of the list
  * @head: list
  * @str: string
  * Return: idk
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;

	list_t *new = malloc(sizeof(list_t)), *tmp = *head;

	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (0);
	new->str = strdup(str);
	while (str[count] != '\0')
		count++;
	new->len = count;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
