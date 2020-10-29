#include "lists.h"
/**
  * add_node - Adds a new node at the beggining of the list
  * @head: - List from main
  * @str: - String
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	int count = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	newNode->str = strdup(str);
	newNode->len = count;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
