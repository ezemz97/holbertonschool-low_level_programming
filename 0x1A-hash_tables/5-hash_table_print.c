#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
  * hash_table_print - Prints a hash table
  * @ht: Thash table to print
  *
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int index = 0;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; index < ht->size; ++index)
	{
		temp = ht->array[index];

		while (temp)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
