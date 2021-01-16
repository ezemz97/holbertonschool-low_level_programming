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
	unsigned long int index = 0;
	hash_node_t *temp = NULL, *hashNode = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0)
	|| ht->array == NULL || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			if (temp && strcmp(key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	hashNode = malloc(sizeof(hash_node_t));
	if (hashNode == NULL)
		return (0);
	hashNode->key = strdup(key);
	hashNode->value = strdup(value);
	hashNode->next = ht->array[index];
	ht->array[index] = hashNode;
	return (1);
}
