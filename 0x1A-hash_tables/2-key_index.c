#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* key_index - Returns the index of the element by it's hash
* @key: key passed to the hashing function
* @size: size of the hash table
*
* Return: Index of the key in a hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/**
	* Passes the string to the djb2 algorithm,
	* and get the index by doing:
	* <hash value> modulus <size>
	*/
	return (hash_djb2(key) % size);
}
