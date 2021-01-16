#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value associated with a key
  * @ht: The hash table to look into
  * @key: The key to finding
  *
  * Return: The value associated with the element
  * or NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if !(ht || key || ht->array)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}