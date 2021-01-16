#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table
* @ht: The hash table to add or update the key/value to
* @key: The key of a value
* @value: The value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hashNode = NULL, *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0
	|| key == NULL || value == NULL || key == NULL || strcmp(key, ""))
		return (0);

	/* If node exist and key is matched, assign value to node*/
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while (1)
		{
			if (strcmp(temp->key, key))
			{
				temp->value = strdup(value);
				return (1);
			}
			if (temp->next == NULL)
				break;
			temp = temp->next;
		}
	}
	/* If key is not matched, create new node */
	hashNode = malloc(sizeof(hash_node_t));
	if (hashNode == NULL)
		return (0);
	hashNode->key = strdup(key);
	hashNode->value = strdup(value);
	hashNode->next = NULL;

	/* Check if node exist, if true: insert at the start of the list */
	if (ht->array[index] != NULL)
	{
		hashNode->next = ht->array[index];
		ht->array[index] = hashNode;
	}
	else
		ht->array[index] = hashNode;
	return (1);
}
