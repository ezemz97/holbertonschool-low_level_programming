#include "hash_tables.h"

/**
  * hash_table_create - Creates a new hash table
  * @size: Size of the array
  *
  * Return: A pointer to the newly created hash table (NULL if something fails)
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*
	* Define the new hash table and
	* the array of hash nodes structs
	*/
	hash_table_t *hashTable = NULL;
	hash_node_t **array = NULL;
	/* Used to traverse the array */
	unsigned long int x = 0;

	/* Assign memory for the new hash table */
	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);
	/*
	* Instantiate the array of pointers to hash nodes,
	* with the given array size
	*/
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	/* Set every pointer of the array to NULL (good practice) */
	for (; x < size; ++x)
		array[i] = NULL;

	/*
	* Store the information of the hash table
	* (the initialized array and the number of elements of it)
	*/
	hashTable->size = size;
	hashTable->array = array;

	return (hashTable);
}
