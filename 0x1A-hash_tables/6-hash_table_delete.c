#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (node = ht->array[index]; node != NULL; node = temp)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
